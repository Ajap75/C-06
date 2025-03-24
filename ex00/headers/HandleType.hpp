/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandleType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastruc <anastruc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:45:24 by anastruc          #+#    #+#             */
/*   Updated: 2025/03/24 12:47:14 by anastruc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>


#ifndef HANDLETYPE_HPP
#define HANDLETYPE_HPP

void   handleSpecialCases(std::string &string_representation);
void   handleChar(std::string &string_representation);
void   handleInt(std::string &string_representation);
void   handleFloat(std::string &string_representation);
void   handleDouble(std::string &string_representation);


#endif