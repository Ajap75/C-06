/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandleType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:01:27 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/24 14:01:40 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/Type.hpp"
#include <iostream>
#include <sstream>
#include <string>

void   handleSpecialCases(std::string &string_representation)
{
    if (string_representation == "nan" || string_representation == "-inf" || string_representation == "+inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << string_representation << 'f' << std::endl;
        std::cout << "double: " << string_representation << std::endl;
    }


    if  (string_representation == "nanf" || string_representation == "-inff" || string_representation == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << string_representation << std::endl;
        std::cout << "double: " << string_representation.substr(0, (string_representation.length() - 1)) << std::endl;
    }

}

void   handleChar(std::string &string_representation)
{
    char c = string_representation[0];
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    
    std::cout << "char: " << c <<std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}
void   handleInt(std::string &string_representation)
{
    int i;
    std::stringstream ss(string_representation);
    ss >> i;
    char c = static_cast<char>(i);
    float f = static_cast<float>(i);
    double d = static_cast<double>(i);

    
    std::cout << "char: " << c <<std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}
void   handleFloat(std::string &string_representation)
{
    char c = string_representation[0];
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    
    std::cout << "char: " << c <<std::endl;
    std::cout << "int: " << i<< std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}
void   handleDouble(std::string &string_representation)
{
    char c = string_representation[0];
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    
    std::cout << "char: " << c <<std::endl;
    std::cout << "int: " << i<< std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}
