/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 07:38:09 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/28 22:44:26 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
void easyfind(const T &container, int value)
{
    typename T::const_iterator it;
    it = std::find(container.begin(), container.end(), value);

    if (it == container.end())
        throw valueNotFound();

    std::cout << "Found the value " << value << " in the position "
        << std::distance(container.begin(), it) << "." << std::endl;
}

const char *valueNotFound::what() const throw()
{
    return ("Exception: Value not found.");
}
