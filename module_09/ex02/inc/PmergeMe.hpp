/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:15:18 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/10/03 19:47:20 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
private:
    std::vector<int> _data;

    // Ford-Johnson helper functions (vector and deque)
    void pairSortV(std::vector<std::vector<int>> &input);
    void jacobsthalInsertV(std::vector<std::vector<int>> &input, std::vector<std::vector<int>> &input2); // check the best name for the args latter

public:
    PmergeMe();                                 // default constructor
    PmergeMe(const std::vector<int> &input);    // constructor
    PmergeMe(const PmergeMe &other);            // copy constructor
    PmergeMe &operator=(const PmergeMe &other); // copy assignement operator
    ~PmergeMe();                                // destructor

    // Ford-Johnson sorting functions (vector and deque)
    std::vector<int> sortVector();
    std::deque<int> sortDeque();
};