/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:11:48 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/08/03 16:47:41 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"
#include <stdint.h>

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &other);
        Serializer &operator=(const Serializer &other);        
        ~Serializer();

    public:
        static uintptr_t serialize(Data* ptr);      //It takes a pointer and converts it to the unsigned integer type uintptr_t.
        static Data* deserialize(uintptr_t raw);    //It takes an unsigned integer parameter and converts it to a pointer to Data.
};

#endif