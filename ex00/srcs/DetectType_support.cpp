/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectType_support.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:49:21 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/24 13:13:56 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "../headers/DetectType.hpp"

bool isChar(std::string &string_representation)
{
    if (string_representation.length() == 1 && !std::isdigit(string_representation[0]))
        return(1);
    else
        return (0);
}

bool isInt(std::string &string_representation)
{
    unsigned long i;
    i = 0;
    if (string_representation[i] == '-' || string_representation[i] == '+')
        i++;
    if (i == string_representation.length())
        return (false);
    while (i < string_representation.length())
    {
        if (!isdigit(string_representation[i]))
            return (false);
        i++;
    }
    return (true);
}


bool isDouble(std::string &string_representation)
{
    unsigned long i;
    int dot;
    int digit;
    
    digit = 0;
    dot = 0;
    
    if (string_representation[string_representation.length() - 1] == 'f')
        return (false);
    i = 0;
    if (string_representation[i] == '-' || string_representation[i] == '+')
        i++;
    if (i == string_representation.length())
        return (false);
    while (i < string_representation.length())
    {
        if (isdigit(string_representation[i]))
            digit += 1;
        else if (string_representation[i] == '.')
            dot += 1;
        else
            return(false);
        i++;
    }
    if (dot == 1 && digit >= 1)
        return (true);
    return(false);
}


bool isFloat(std::string &string_representation)
{
    unsigned long i;
    int dot;
    int digit;
    bool f_ending;
    
    digit = 0;
    dot = 0;
    f_ending = 0;
    
    i = 0;
    if (string_representation[i] == '-' || string_representation[i] == '+')
        i++;
    if (i == string_representation.length())
        return (false);
    while (i < string_representation.length())
    {
        if (i == string_representation.length() - 1 && string_representation[i] == 'f')
            f_ending = true;
            
        else if (isdigit(string_representation[i]))
            digit += 1;
        else if (string_representation[i] == '.')
            dot += 1;
        else
            return(false);
        i++;
    }
    if (dot == 1 && digit >= 1 && f_ending == true)
        return (true);
    return(false);
}

bool isSpecialCases(std::string &string_representation)
{
    if (string_representation == "nan" || 
        string_representation == "-inf" ||
        string_representation == "+inf" ||
        string_representation == "nanf" ||
        string_representation == "-inff" ||
        string_representation == "+inff")
        return (true); 
    else 
        return (false);
}

/*"-4.2   4.2   0.0"*/