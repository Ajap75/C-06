#include "../headers/A.hpp"
#include "../headers/B.hpp"
#include "../headers/C.hpp"
#include "../headers/Base.hpp"
#include "../headers/Colors.hpp"

Base* generate(void)
{
    /*Random generator*/

    std::srand(std::time(0));
    int random = std::rand() % 10;
    std::cout << YELLOW << "Random generator = " << random << std::endl;

    if (random <= 2)
        return (new A());
    else if (random >= 7 )
        return (new B());
    else 
        return (new C());
}


void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << GREEN << "A" << RESET << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << GREEN << "B" << RESET << std::endl;
    if(dynamic_cast<C*>(p))
        std::cout << GREEN<< "C" << RESET << std::endl;
    return ;
}

void identify(Base& p)
{
    try
    {
        (void) dynamic_cast<A&>(p);
        std::cout << GREEN << " A" << RESET << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    try
    {
        (void) dynamic_cast<B&>(p);
        std::cout << GREEN << " B" << RESET << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    try
    {
        (void) dynamic_cast<C&>(p);
        std::cout << GREEN << " C" << RESET << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    return ;
}


int main (void)
{
    Base* ABC;
    ABC = generate();
    Base& refABC = *ABC;
    



    std::cout << YELLOW << "----------TEST----------" << std::endl;
    std::cout << "An object of class A, B, or C has been generated (parent class = Base class)" << std::endl;
    std::cout << std::endl << std::endl;
    std::cout << "FIRST WAY to identify the class : Using a generic pointer to base class and the dynamic_cast<target_class>(p)." << std::endl;
    std::cout << "If the dynamic_conversion succeed, it will return a non_null pointer to the SAME object. The object can be safely interpreted more specifically as A, B or C.\n By testing the dynamic_cast with the three options we can determine of which class is the object" << std::endl;
    std::cout << "Ptr adresse = " << ABC << std::endl;
    std::cout << "Return of void identify(Base* p) = ";
    identify(ABC);
    std::cout << YELLOW << "Ptr adresse = " << ABC << std::endl;
    std::cout << std::endl;
    std::cout << YELLOW << "SECOND WAY to identify the class : Using a reference to the object dynamic_cast<target_class>(p)." << std::endl;
    std::cout << "If the dynamic_conversion fail, an exception will be thrown, and the programme will move to the next try block" << std::endl;
    std::cout << "and test the next dynamic_cast" << std::endl;
    std::cout << "Return of void identify(Base& p) = ";
    identify(refABC);

    delete(ABC);
}