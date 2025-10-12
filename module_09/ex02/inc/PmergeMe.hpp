/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:15:18 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/10/12 00:43:49 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <limits>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <cassert>

class PmergeMe
{
private:
    std::vector<int> _data;

    // helper function to calculate Jacobsthal number
    int jacobsthal(int n) const;

    // Ford-Johnson helper functions (for vector and deque)
    void pairSortV(std::vector<std::vector<int> > &input);
    void jacobsthalInsertV(std::vector<std::vector<int> > &main,
                           std::vector<std::vector<int> > &pend);
    std::vector<int> flattenV(const std::vector<std::vector<int> > &input);

    /*     void pairSortD(std::deque<std::deque<int>> &input);
        void jacobsthalInsertD(std::deque<std::deque<int>> &main,
                               std::deque<std::deque<int>> &pend);
        std::deque<int> flattenD(const std::deque<std::deque<int>> &input); */
    
    static bool vectorLess(const std::vector<int> &a, const std::vector<int> &b);

public:
    PmergeMe();                                 // default constructor
    PmergeMe(const std::vector<int> &input);    // constructor
    PmergeMe(const PmergeMe &other);            // copy constructor
    PmergeMe &operator=(const PmergeMe &other); // copy assignement operator
    ~PmergeMe();                                // destructor

    // Ford-Johnson sorting functions (vector and deque)
    std::vector<int> sortVector();
    //    std::deque<int> sortDeque();
};