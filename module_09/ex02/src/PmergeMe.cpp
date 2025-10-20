/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:15:22 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/10/20 11:47:59 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//initialization of the static variables
int PmergeMe::_comparisonCountV = 0;
int PmergeMe::_comparisonCountD = 0;

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

// getters
int PmergeMe::getComparisonCountV() const { return _comparisonCountV; }
int PmergeMe::getComparisonCountD() const { return _comparisonCountV; }

// calculate Jacobshtal number
int PmergeMe::jacobsthal(int n) const
{
     return (static_cast<int>((std::pow(2, n + 1) + ((n % 2 == 0) ? 1 : -1)) / 3));
}

// -- VECTOR ALGORITHM --

// bool function to check if the pairs are in order (compare last element) for a vector
bool PmergeMe::vectorLess(const std::vector<int> &a, const std::vector<int> &b)
{
    ++_comparisonCountV;
    return (a.back() < b.back()); 
}
/* 
void PmergeMe::pairSortVRecursive(std::vector<std::vector<int> > &input, 
        std::vector<int> &indices)
{
    int n = indices.size();
    if (n <= 1)
        return;
    
    // order each adjacent pair ensure indices[i] is the small and indices[i+1] is the large
    for (int i = 0; i + 1 < n; i += 2)
    {
        int left = indices[i];
        int right = indices[i + 1];
        if (vectorLess(input[right], input[left]))
            std::swap(indices[i], indices[i + 1]);
    }

    // build grouped list that contains the "large" indices (and maybe the last number)
    std::vector<int> grouped;
    grouped.reserve((n + 1) / 2);
    for (int i = 0; i + 1 < n; i += 2)
        grouped.push_back(indices[i + 1]);
    if (n % 2)
        grouped.push_back(indices[n - 1]);

    // recurse on grouped (to sort the large elements)
    pairSortVRecursive(input, grouped);

    // Build a map large -> small so we can reinsert the smalls in the correct place. Use a vector sized to input.size(), filled with -1 to mark "no small"
    std::vector<int> small_for_large(input.size(), -1);
    for (int i = 0; i + 1 < n; i += 2)
    {
        int small = indices[i];
        int large = indices[i + 1];
        small_for_large[large] = small;
    }

    // Reconstruct indices: for each element g in grouped, if it has a paired small, push the small first, then push the large. If no pair (single), push g alone.
    std::vector<int> result;
    result.reserve(n);
    for (size_t k = 0; k < grouped.size(); ++k)
    {
        int g = grouped[k];
        if (g >= 0 && g < static_cast<int>(small_for_large.size()) &&
            small_for_large[g] != -1)
        {
            result.push_back(small_for_large[g]);
        }
        result.push_back(g);
    }

    // replace indices with the reconstructed order (no duplicates, same length)
    indices = result;
}


// sorting the pairs of the vector recursivelly
void PmergeMe::pairSortV(std::vector<std::vector<int> > &input)
{
    int n = input.size();this->_comparisonCountV = 0;
    if (n <= 1)
        return;  //nothing to sort
    
    // sort each pair internally
    for (int i = 0; i < n; ++i)
    {
        if (input[i].size() == 2 && input[i][0] > input [i][1])
            std::swap(input[i][0], input[i][1]);
    }

    //Build an initial index list to help with ordering
    std::vector<int> indices;
    for (int i = 0; i < n; ++i)
        indices.push_back(i);
       
    // use recursion to sort the indices based on pair max values
    pairSortVRecursive(input, indices);

    // reorder input according with the indices (avoiding loosing data)
    std::vector<std::vector<int> > sorted;
    for (size_t i = 0; i < indices.size(); ++i)
        sorted.push_back(input[indices[i]]);
    input.swap(sorted);
} */

void PmergeMe::pairSortV(std::vector<std::vector<int> > &input)
{
    // sort pairs by their maximum element (back element)
    for (size_t i = 0; i < input.size(); ++i)
    {
        for (size_t j = i + 1; j < input.size(); ++j)
        {
            if (input[j].back() < input[i].back())
                std::swap(input[i], input[j]);
        }
    }
}

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
    _comparisonCountV = 0;
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
    ++_comparisonCountD;
    return (a.back() < b.back()); 
}

/* void PmergeMe::pairSortDRecursive(std::deque<std::deque<int> > &input,
                                  std::deque<int> &indices)
{
    int n = indices.size();
    if (n <= 1)
        return;
    
    // order each adjacent pair ensure indices[i] is the small and indices[i+1] is the large
    for (int i = 0; i + 1 < n; i += 2)
    {
        int left = indices[i];
        int right = indices[i + 1];
        if (dequeLess(input[right], input[left]))
            std::swap(indices[i], indices[i + 1]);
    }

    // build grouped list that contains the "large" indices (and maybe the last number)
    std::deque<int> grouped;
    for (int i = 0; i + 1 < n; i += 2)
        grouped.push_back(indices[i + 1]);
    if (n % 2)
        grouped.push_back(indices[n - 1]);

    // recurse on grouped (to sort the large elements)
    pairSortDRecursive(input, grouped);

    // Build a map large -> small so we can reinsert the smalls in the correct place. Use a vector sized to input.size(), filled with -1 to mark "no small"
    std::deque<int> small_for_large(input.size(), -1);
    for (int i = 0; i + 1 < n; i += 2)
    {
        int small = indices[i];
        int large = indices[i + 1];
        small_for_large[large] = small;
    }

    // Reconstruct indices: for each element g in grouped, if it has a paired small, push the small first, then push the large. If no pair (single), push g alone.
    std::deque<int> result;
    for (size_t k = 0; k < grouped.size(); ++k)
    {
        int g = grouped[k];
        if (g >= 0 && g < static_cast<int>(small_for_large.size()) &&
            small_for_large[g] != -1)
        {
            result.push_back(small_for_large[g]);
        }
        result.push_back(g);
    }

    // replace indices with the reconstructed order (no duplicates, same length)
    indices = result;
    
}


// sorting the pairs of the deque
void PmergeMe::pairSortD(std::deque<std::deque<int> > &input)
{
    int n = input.size();
    if (n <= 1)
        return;

    // sort each pair internally
    for (int i = 0; i < n; ++i)
    {
        if (input[i].size() == 2 && input[i][0] > input[i][1])
            std::swap(input[i][0], input[i][1]);
    }
    // build initial index list
    std::deque<int> indices;
    for (int i = 0; i < n - 1; ++i)
        indices.push_back(i);
    
    // recursive pair sorting
    pairSortDRecursive(input, indices);

    // reorder input according with sorted indices
    std::deque<std::deque<int> > sorted;
    for (size_t i = 0; i < indices.size(); ++i)
        sorted.push_back(input[indices[i]]);
    input.swap(sorted);
}  */

void PmergeMe::pairSortD(std::deque<std::deque<int> > &input)
{
    // sort pairs by their maximum element (back element)
    for (size_t i = 0; i < input.size(); ++i)
    {
        for (size_t j = i + 1; j < input.size(); ++j)
        {
            if (input[j].back() < input[i].back())
                std::swap(input[i], input[j]);
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
    _comparisonCountD = 0;
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
