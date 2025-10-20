/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:15:18 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/10/20 11:45:58 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                  NOTES - Ford–Johnson (Merge-Insertion) Sort               */
/* ************************************************************************** */
/*

This project implements the Ford–Johnson algorithm using both std::vector and 
std::deque. The algorithm minimizes the number of comparisons required to sort
a sequence by:
    1. Forming pairs and sorting each pair internally.
    2. Sorting the pairs by their maximum elements.
    3. Building the main group and inserting pend group elements using Jacobsthal
    sequence order and inserting trough binary search.

For the pair sorting Step, i tried two differenc implementations:
    1. Recursive version (commented out): Closer to the original Ford–Johnson 
    algorithm, using recursion to minimize comparisons.
    2. Bubble sort version (active): A simpler approach that reflects the
    algorithm’s logic and ensures sorted pairs with fewer comparisons.

To test the diffent versions, i introduced two static variables (_comparisonCountV 
and _comparisonCountD) that track the number of comparissons inside the vectorLess
and dequeLess funtions respectively. 

Performance note (when testing with 1000 random numbers):
    1. The bubble sort version made fewer comparisons, fullfilling best the Ford-Johnson
    algo idea (less comparissons possible), but ran slightly slower.
    2. The recursive version made more comparisons but executed faster.

I believe this happens because bubble sort do less comparissons overall but needs more 
data movement than the recursive method.

I decided to kept both versions in the code to demonstrate understanding of:
    1. The recursive comparison structure of Ford–Johnson follows the Ford-Johnson
    closely, as it uses recursion to compare pairs. 
    2. But in this case, a clear and simple practical implementation (bubble sort)
    achieves less number of comparissons, the main Ford Johnson objective.

That's the reason I kept bubble sort as my main implementation.
This experiments were a great learning expirience about algorithms.

*/
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

class PmergeMe
{
private:
    std::vector<int> _data;
    static int _comparisonCountV;
    static int _comparisonCountD;

    // helper function to calculate Jacobsthal number
    int jacobsthal(int n) const;
  
    // Ford-Johnson helper functions (for vector)
    void pairSortVRecursive(std::vector<std::vector<int> > &input,
        std::vector<int> &indices);
    void pairSortV(std::vector<std::vector<int> > &input);
    void jacobsthalInsertV(std::vector<std::vector<int> > &main,
        std::vector<std::vector<int> > &pend);
    std::vector<int> flattenV(const std::vector<std::vector<int> > &input);
    static bool vectorLess(const std::vector<int> &a, const std::vector<int> &b);

    // Ford-Johnson helper functions (for deque)
    void pairSortDRecursive(std::deque<std::deque<int> > &input,
        std::deque<int> &indices);
    void pairSortD(std::deque<std::deque<int> > &input);
    void jacobsthalInsertD(std::deque<std::deque<int> > &main,
        std::deque<std::deque<int> > &pend);
    std::deque<int> flattenD(const std::deque<std::deque<int> > &input);
    static bool dequeLess(const std::deque<int> &a, const std::deque<int> &b);

public:
    PmergeMe();                                 // default constructor
    PmergeMe(const std::vector<int> &input);    // constructor
    PmergeMe(const PmergeMe &other);            // copy constructor
    PmergeMe &operator=(const PmergeMe &other); // copy assignement operator
    ~PmergeMe();                                // destructor

    // Ford-Johnson sorting functions (vector and deque)
    std::vector<int> sortVector();
    std::deque<int> sortDeque();

    //getters
    int getComparisonCountV() const;
    int getComparisonCountD() const;
};