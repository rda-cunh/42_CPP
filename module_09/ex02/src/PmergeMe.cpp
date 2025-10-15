/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:15:22 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/10/15 22:48:30 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const std::vector<int> &input) : _data(input) {}

PmergeMe::PmergeMe(const PmergeMe &other) : _data(other._data) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this == &other)
        return (*this);
    this->_data = other._data;
    return (*this);
}

PmergeMe::~PmergeMe() {}

// calculate Jacobshtal number
int PmergeMe::jacobsthal(int n) const
{
     return (static_cast<int>((std::pow(2, n + 1) + ((n % 2 == 0) ? 1 : -1)) / 3));
}


// -- VECTOR ALGORITHM --

// bool function to check if the pairs are in order (compare last element) for a vector
bool PmergeMe::vectorLess(const std::vector<int> &a, const std::vector<int> &b)
{
/*     if (a.empty() || b.empty())
        throw std::logic_error("vectorLess: empty vector passed to comparator");   //evaluate later if this check is needed */
    return (a.back() < b.back()); 
}

// sorting the pairs of the vector [USING SIMPLE SORTING - JUST COMPARES FIRST LEVEL OF PAIS - WORKS BUT DO NOT RESPECT COMPLETELY THE ALGO]
void PmergeMe::pairSortV(std::vector<std::vector<int> > &input)
{
    int n = input.size();
    
    // sort each pair internally
    for (int i = 0; i + 1 < n; i += 2)
    {
        if (input[i].size() == 2 && input[i][0] > input[i][1])
            std::swap(input[i][0], input[i][1]);
    }
    // sort the pairs by their largest element (second element or only element)
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            int a = input[j].back();
            int b = input[j+1].back();
            if (a > b)
                std::swap(input[j], input[j+1]);
        }
    }
}

/* // sorting the pairs of the vector recursivelly [RESPECTS ALGO BUT DOES NOT WORK - IT EATS MEMBERS]
void PmergeMe::pairSortV(std::vector<std::vector<int> > &input)
{
    int n = input.size();
    if (n <= 1)
        return;  //nothing to sort
    
    // sort pairs by their maximun element
    for (int i = 0; i + 1 < n; i += 2)
    {
        if (vectorLess(input[i + 1], input[i]))
            std::swap(input[i], input[i + 1]);
    }
    // use recursion to group pairs into larger units
    if (n > 2)
    {
        std::vector<std::vector<int> > grouped;
        
        //merge pairs into larger groups
        for (int i = 0; i + 1 < n; i += 2)
        {
            std::vector<int> merged(input[i]);
            merged.insert(merged.end(), input[i + 1].begin(), input[i + 1].end());
            grouped.push_back(merged);
        }

        // handle odd elements at the end, if they exist
        if (n % 2)
            grouped.push_back(input.back());

        // recursion on grouped pairs
        pairSortV(grouped);

        //update elements to the sorted group
        input = grouped;
    }
} */

// insert pend elements into the main using Jacobsthal order (vector)
void PmergeMe::jacobsthalInsertV(std::vector<std::vector<int> > &main,
                                 std::vector<std::vector<int> > &pend)
{
    int idx = 1;
    while (!pend.empty())
    {
        int j_curr = jacobsthal(idx);
        int j_prev = jacobsthal(idx - 1);
        int count = j_curr - j_prev;

        if (count > (static_cast<int>(pend.size())))
            count = static_cast<int>(pend.size());
        for (int i = count - 1; i >= 0; --i)
        {
            std::vector<int> to_insert = pend.back();
            pend.pop_back();

            std::vector<std::vector<int> >::iterator it =
                std::upper_bound(main.begin(), main.end(), to_insert, vectorLess);
            main.insert(it, to_insert);
        }
        ++idx;
    }
}
// joints vector of vector into one vector to present result
std::vector<int> PmergeMe::flattenV(const std::vector<std::vector<int> > &input)
{
    std::vector<int> result;
    for (size_t i = 0; i < input.size(); ++i)
        result.insert(result.end(), input[i].begin(), input[i].end());
    return (result);
}

// main function of the Ford-Johnson (merge-insertion) algorithm (vector)
std::vector<int> PmergeMe::sortVector()
{
    int n = this->_data.size();
    std::vector<std::vector<int> > pairs;
    int i = 0;
    while (i + 1 < n)    
    {
        int a = this->_data[i];
        int b = this->_data[i + 1];
        if (b < a)
        {
            pairs.push_back(std::vector<int>(2,0));
            pairs.back()[0] = b;
            pairs.back()[1] = a;
        }
        else
        {
            pairs.push_back(std::vector<int>(2,0));
            pairs.back()[0] = a;
            pairs.back()[1] = b;
        }
        i += 2;
    }
    if (i < n)
        pairs.push_back(std::vector<int>(1, _data[i]));
       
    pairSortV(pairs);

    std::vector<std::vector<int> > main;
    main.push_back(std::vector<int>(1, pairs[0][0]));
    for (size_t idx = 0; idx < pairs.size(); ++idx)
    {
        if (pairs[idx].size() == 2)
            main.push_back(std::vector<int>(1, pairs[idx][1]));
    }

    std::vector<std::vector<int> > pend;
    for (size_t idx = 1; idx < pairs.size(); ++idx)
        pend.push_back(std::vector<int>(1, pairs[idx][0]));
    
    jacobsthalInsertV(main, pend);
    
    return flattenV(main);
}

// -- DEQUE ALGORITHM --

bool PmergeMe::dequeLess(const std::deque<int> &a, const std::deque<int> &b)
{
/*     if (a.empty() || b.empty())
        throw std::logic_error("vectorLess: empty vector passed to comparator");   //evaluate later if this check is needed */
    return (a.back() < b.back()); 
}

// sorting the pairs of the deque
void PmergeMe::pairSortD(std::deque<std::deque<int> > &input)
{
    int n = input.size();

    // sort each pair internally
    for (int i = 0; i + 1 < n; i += 2)
    {
        if (input[i].size() == 2 && input[i][0] > input[i][1])
            std::swap(input[i][0], input[i][1]);
    }
    // sort the pairs by their largest element (second element or only element)
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            int a = input[j].back();
            int b = input[j+1].back();
            if (a > b)
                std::swap(input[j], input[j+1]);
        }
    }
}

// insert pend elements into the main using Jacobsthal order (deque)
void PmergeMe::jacobsthalInsertD(std::deque<std::deque<int> > &main,
                                 std::deque<std::deque<int> > &pend)
{
    int idx = 1;
    while (!pend.empty())
    {
        int j_curr = jacobsthal(idx);
        int j_prev = jacobsthal(idx - 1);
        int count = j_curr - j_prev;

        if (count > (static_cast<int>(pend.size())))
            count = static_cast<int>(pend.size());
        for (int i = count - 1; i >= 0; --i)
        {
            std::deque<int> to_insert = pend.back();
            pend.pop_back();

            std::deque<std::deque<int> >::iterator it =
                std::upper_bound(main.begin(), main.end(), to_insert, dequeLess);
            main.insert(it, to_insert);
        }
        ++idx;
    }
}

// joints deque of deques into one vector to present result
std::deque<int> PmergeMe::flattenD(const std::deque<std::deque<int> > &input)
{
    std::deque<int> result;
    for (size_t i = 0; i < input.size(); ++i)
        result.insert(result.end(), input[i].begin(), input[i].end());
    return (result);
}

// sort deque function
std::deque<int> PmergeMe::sortDeque()
{
    int n = this->_data.size();
    std::deque<std::deque<int> > pairs;
    int i = 0;
    while (i + 1 < n)    
    {
        int a = this->_data[i];
        int b = this->_data[i + 1];
        if (b < a)
        {
            pairs.push_back(std::deque<int>(2,0));
            pairs.back()[0] = b;
            pairs.back()[1] = a;
        }
        else
        {
            pairs.push_back(std::deque<int>(2,0));
            pairs.back()[0] = a;
            pairs.back()[1] = b;
        }
        i += 2;
    }
    if (i < n)
        pairs.push_back(std::deque<int>(1, _data[i]));
       
    pairSortD(pairs);

    std::deque<std::deque<int> > main;
    main.push_back(std::deque<int>(1, pairs[0][0]));
    for (size_t idx = 0; idx < pairs.size(); ++idx)
    {
        if (pairs[idx].size() == 2)
            main.push_back(std::deque<int>(1, pairs[idx][1]));
    }

    std::deque<std::deque<int> > pend;
    for (size_t idx = 1; idx < pairs.size(); ++idx)
        pend.push_back(std::deque<int>(1, pairs[idx][0]));
    
    jacobsthalInsertD(main, pend);
    
    return flattenD(main);
}
