#include "../headers/ScalarConverter.hpp"
#include <string>
#include <iostream>
#include "../headers/Colors.hpp"





int main (int argc, char **argv)
{ 
    if (argc >= 2)
    {
        std::string string;
        string = argv[1];
        ScalarConverter::convert(string);
    }
    else
        std::cout << RED << "||| Not enough args |||" << RESET << std::endl;
}