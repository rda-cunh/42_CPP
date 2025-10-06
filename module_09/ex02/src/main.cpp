/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:14:52 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/10/06 23:24:01 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool is_valid_number(const std::string &s)
{
    if (s.empty())
        return (false);
    for (size_t i = 0; i < s.size(); ++i)
        if (s[i] < '0' && s[i] > '9')
            return (false);
    return (true);
}

template <typename T>
void print_container(const std::string prefix, const T &c)
{
    std::cout << prefix;
    for (size_t i = 0; i < c.size(); ++i)
        std::cout << c[i] << (i + 1 == c.size() ? "\n" : " ");
}

main(int argc, char **argv)
{
    if (argc <= 1)
    {
        std::cerr << "Error: Please provide correct arguments. Run as "
                  << "./PmergeMe arguments" << std::endl;
        return (1);
    }

    std::vector<int> input;
    for (int i = 1; i < argc; ++i)
    {
        std::string s(argv[i]);
        if (!is_valid_number(s))
        {
            std::cerr << "Error: empty argument or incorrect character found." << std::endl;
            return (1);
        }
        long n = std::strtol(argv[i], NULL, 10);
        if (n <= 0 || n > std::numeric_limits<int>::max())
        {
            std::cerr << "Error: number out of limits." << std::endl;
            return (1);
        }
        input.push_back(static_cast<int>(n));
    }
    print_container("Before: ", input);

    PmergeMe one(input);
    clock_t tStart = std::clock();
    std::vector<int> sorted_v = one.sortVector();
    double elapsed_v =

        return (0);
}