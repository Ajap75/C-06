/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:09:02 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/19 17:18:48 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScalarConverter.hpp"
#include <iostream>
#include <sstream>

void ScalarConverter::convert(std::string &string_representation)
{
    std::stringstream ss(string_representation);
    char chr;
    int num;
    float flt;
    double dbl;

    ss >> chr;
    if (ss.fail())
    {
        std::cout << "impossible" << std::endl;
    }
    else
        std::cout << "char: " << chr << std::endl;
        
    ss.clear();
    ss.str(string_representation);
    ss >> num;
    if (ss.fail())
    {
        std::cout << "impossible" << std::endl;
    }
    else
        std::cout << "int: " << num << std::endl;
    
    ss.clear();
    ss.str(string_representation);

    ss >> flt;
    if (ss.fail())
    {
        std::cout << "impossible" << std::endl;
    }
    else
        std::cout << "float: " << flt << std::endl;
    
    ss.clear();
    ss.str(string_representation);

    ss >> dbl;
    if (ss.fail())
    {
        std::cout << "impossible" << std::endl;
    }
    else
        std::cout << "double: " << dbl << std::endl;
    
}