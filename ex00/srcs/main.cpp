#include "../headers/ScalarConverter.hpp"


int main (int argc, char **argv)
{ 
    std::string string;
    string = argv[1];
    if (argc >= 2)
        ScalarConverter::convert(string);
}