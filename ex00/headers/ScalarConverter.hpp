/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:09:04 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/19 17:13:43 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>

#ifndef SCALARCONVERTER_CPP
#define SCALARCONVERTER_CPP

class ScalarConverter
{

    public :
    
    void static convert(std::string &string_representation);
    
    
    private :
    
    /*The class as to be non_istantiable,so let's declare the constructor as private*/
    
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter& operator = (const ScalarConverter &other);
    ScalarConverter();
    ~ScalarConverter();


};


#endif

/* A scalar type in C++ is a type that represents a single value 
(as opposed to a composite type like an arrey, struct, or class)
SCALAR TYPE <=> COMPOSITE TYPE
ex : Int, char, double, bool, pointer etc..*/