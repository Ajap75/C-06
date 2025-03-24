/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:59:34 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/24 13:04:52 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/DetectType.hpp"
#include "../headers/Type.hpp"

#include <iostream>
#include <sstream>
#include <string>

type detectType(std::string &string_representation)
{
    if (isChar(string_representation))
        return(CHAR);
    else if (isInt(string_representation))
        return (INT);
    else if (isFloat(string_representation))
        return(FLOAT);
    else if (isDouble(string_representation))
        return(FLOAT);
    else if (isSpecialCases(string_representation))
        return (SPECIAL_CASES);
    return (ERROR);
}
