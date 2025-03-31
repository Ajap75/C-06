/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:58:06 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/28 11:11:49 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include "../headers/Data.hpp"
#include <string>
#include <iostream>
# include <stdint.h>

class Serializer
{
    public :
    
    static uintptr_t serialize(Data* ptr); 
    /* nsigned integer type uintptr_t : est un type entier non signé capable de contenir la valeur d’un pointeur sans perte.*/
    static Data* deserialize(uintptr_t raw);

    private :
    Serializer();
    ~Serializer();
    Serializer(const Serializer &other);
    Serializer& operator =(const Serializer &other);
    
};


#endif