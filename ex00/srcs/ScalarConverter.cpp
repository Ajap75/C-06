/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:09:02 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/24 15:03:51 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScalarConverter.hpp"
#include "../headers/Colors.hpp"

#include "../headers/Type.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include "../headers/DetectType.hpp"
#include "../headers/HandleType.hpp"

void ScalarConverter::convert(std::string &string_representation)
{
    if (string_representation.empty())
    {
        std::cout << RED << "INPUT ERROR\n" << RESET;
        return ;
    }
    switch (detectType(string_representation))
    {
        case(CHAR):
            handleChar(string_representation);
            break;

        case(INT):
            handleInt(string_representation);
            break;
            
        case(DOUBLE):
            handleDouble(string_representation);
            break;
            
        case(FLOAT):
            handleFloat(string_representation);
            break;

        case(SPECIAL_CASES):
            handleSpecialCases(string_representation);
            break;
        case(ERROR):
            std::cout << RED << "INPUT ERROR\n" << RESET;
            return ;
    }
}

