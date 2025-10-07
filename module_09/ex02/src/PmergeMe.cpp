/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:15:22 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/10/07 20:28:07 by rda-cunh         ###   ########.fr       */
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
    return (static_cast<int>((std::pow(2, n + 1) + ((n % 2 == 0) ? 1 : -1) / 3)));
}

// -- VECTOR ALGORITHM --

// sorting the pairs of the vector
void PmergeMe::pairSortV(std::vector<std::vector<int>> &input)
{
    int n = input.size();
    if (n <= 1)
        return;
    for (int i = 0; i + 1 < n; i += 2)
    {
        if (input[i + 1].back() < input[i].back())
            std::swap(input[i], input[i + i]);
    }
    if (n > 2)
    {
        std::vector<std::vector<int>> grouped;
        for (int i = 0; i + i < n; i += 2)
        {
            std::vector<int> merged(input[i]);
            merged.insert(merged.end(), input[i + 1].begin(), input[i + 1].end());
            grouped.push_back(merged);
        }
        if (n % 2)
            grouped.push_back(input.back());
        pairSortV(grouped); // recursion for further pairs group levels
        input = grouped;
    }
}

/* // insert pend elements into the main using Jacobsthal order (vector)
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
            count = pend.size();

    }
}
 */

// main function of the Ford-Johnson (merge-insertion) algorithm (vector)
std::vector<int> PmergeMe::sortVector()
{
    std::vector<std::vector<int>> pairs;
    int i = 0;
    int n = this->_data.size();
    while (i + 1 < n)
    {
        int a = this->_data[i];
        int b = this->_data[i + 1];
        pairs.push_back(a > b ? std::vector<int>{b, a} : std::vector<int>{a, b});
        i += 2;
    }
    if (i < n)
        pairs.push_back(std::vector<int>{_data[i]});

    pairSortV(pairs);

    std::vector<std::vector<int>> main;
    main.push_back(std::vector<int>{pairs[0][0]});
    for (size_t idx = 0; idx < pairs.size(); ++idx)
        if (pairs[idx].size() == 2)
            main.push_back(std::vector<int>{pairs[idx][1]});

    std::vector<std::vector<int>> pend;
    for (size_t idx = 1; idx < pairs.size(); ++idx)
        pend.push_back(std::vector<int>{pairs[idx][0]});
    jacobsthalInsertV(main, pend);
    return flattenV(main);
}
