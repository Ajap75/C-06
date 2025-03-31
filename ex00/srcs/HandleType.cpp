/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandleType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:01:27 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/28 10:49:15 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/Type.hpp"
#include "../headers/Colors.hpp"

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cmath>
#include <limits.h>

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
void    printOutput(char c, int i, float f, double d)
{
    if (i < 0 || i > 127)
        std::cout << "char: Non displayable" << std::endl;
    else if (!isprint(c))
        std::cout << "char: Non displayable" <<std::endl;
    else    
        std::cout << "char: " << "'" << c << "'" << std::endl;
        
        
    if (std::isnan(i))
        std::cout << "int: impossible" << std::endl;
    else 
        std::cout << "int: " << i << std::endl;


    std::cout << "float: " << std::fixed << std::setprecision(1) << f << 'f' << std::endl;
    
    std::cout << "double: "<< std::fixed << d   << std::endl;
}
void   handleChar(std::string &string_representation)
{
    char c;
    std::stringstream ss(string_representation);
    ss >> c;
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);
    printOutput(c, i, f, d);
}
void   handleInt(std::string &string_representation)
{    
    int i;
    std::stringstream ss(string_representation);
    ss >> i;
    if (i < INT_MIN || i >= INT_MAX)
    {
        std::cout << RED << "||| overflow |||" << RESET << std::endl;
        return ;
    }
    char c = static_cast<char>(i);
    float f = static_cast<float>(i);
    double d = static_cast<double>(i);
    printOutput(c, i, f, d);
}
void   handleFloat(std::string &string_representation)
{

    if (!string_representation.empty() &&
    string_representation[string_representation.length() - 1] == 'f')
    {
        string_representation = string_representation.substr(0, string_representation.length() - 1);
    }
    float f;
    std::stringstream ss(string_representation);
    ss >> f;
    f = static_cast<float>(f);

    char c = static_cast<char>(f);
    int i = static_cast<int>(f);
    double d = static_cast<double>(f);
    printOutput(c, i, f, d);
}
void   handleDouble(std::string &string_representation)
{
    double d;
    std::stringstream ss(string_representation);
    ss >> d;
    char c = static_cast<char>(d);
    int i = static_cast<int>(d);
    float f = static_cast<float>(d);
    printOutput(c, i, f, d);
}


