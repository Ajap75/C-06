/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:50:06 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/24 13:05:14 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include "Type.hpp"


#ifndef DETECTTYPE_HPP
#define DETECTTYPE_HPP


bool isChar(std::string &string_representation);
bool isInt(std::string &string_representation);
bool isDouble(std::string &string_representation);
bool isFloat(std::string &string_representation);
bool isSpecialCases(std::string &string_representation);
type detectType(std::string &string_representation);


#endif