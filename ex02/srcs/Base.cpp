#include "../headers/A.hpp"
#include "../headers/B.hpp"
#include "../headers/C.hpp"
#include "../headers/Base.hpp"

Base::~Base(){}




#

/*Base * generate(void);
It randomly instantiates A, B, or C and returns the instance as a Base pointer. Feel free
to use anything you like for the random choice implementation.
void identify(Base* p);
It prints the actual type of the object pointed to by p: "A", "B", or "C".
void identify(Base& p);
It prints the actual type of the object referenced by p: "A", "B", or "C". Using a pointer
inside this function is forbidden.
Including the typeinfo header is forbidden.
Write a program to test that everything works as expected.*/