

#include "../headers/Serializer.hpp"
#include "../headers/Data.hpp"
#include "../headers/Colors.hpp"
#include "stdint.h"

int main (void)
{

    Data data;
    Data* ptr = &data;

    ptr->c = 'q';
    ptr->i = 42;

    uintptr_t storage;
    storage = 42;
    
    std::cout << YELLOW << "-----TEST------"  << std::endl;
    std::cout << "ptr value = " << ptr << std::endl;
    std::cout << "storage value = " << storage << std::endl;
    
    std::cout << GREEN <<  "----SERIALIZATION----- = " << RESET << std::endl;
    storage = Serializer::serialize(ptr);
    std::cout << YELLOW << "ptr value = " << ptr << std::endl;
    std::cout << "storage value = " << storage << std::endl;
    std::cout << "Info: The storage value (uintptr_t) contains the pointer address reinterpreted using reinterpret_cast." << std::endl;
    std::cout << "A uintptr_t is an unsigned integer type large enough to hold a pointer address." << std::endl;
    
    std::cout << GREEN << "----DESERIALIZATION----- = " << RESET << std::endl;
    ptr = NULL;
    ptr = Serializer::deserialize(storage);
    std::cout << YELLOW << "ptr value = " << ptr << std::endl;
    std::cout << "storage value = " << storage << std::endl;
    std::cout << "Info: We recover the pointer address by applying the deserialization function to the stored uintptr_t value." << std::endl;
    std::cout << GREEN << "----USABLE STRUCTURE ?----- = " << RESET << std::endl;
    std::cout << YELLOW << "c = " << data.c << std::endl;
    data.c = 'A';
    std::cout << "c = " << data.c << std::endl;


}

/* ************************************************************************** */
/*                                                                            */
/*            static_cast vs reinterpret_cast — Mini-Course (C++98)           */
/*                                                                            */
/* ************************************************************************** */

/*
** static_cast — Used in ex00 (ScalarConverter)
**
** ▸ Purpose:
**     - Perform safe and logical conversions between related types.
**     - Used for numeric types (int, float, double, char), or up/down casting in inheritance.
**     - Does NOT reinterpret memory, just changes type semantics.
**
** ▸ Example:
**     int i = 65;
**     char c = static_cast<char>(i);      // 'A'
**     float f = static_cast<float>(i);    // 65.0f
**
** ▸ Safe to use. Compiler enforces type correctness.
** ▸ Cannot convert between unrelated types like int ↔︎ pointer.
*/

/*
** reinterpret_cast — Used in ex01 (Pointer serialization)
**
** ▸ Purpose:
**     - Reinterpret the raw bits of a value as another type.
**     - Allows pointer <-> integer casting, or casting between unrelated pointers.
**     - Dangerous if misused: no safety, no conversion, just reinterpreting memory.
**
** ▸ Example:
**     Data* ptr = &data;
**     uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);   // Serialize
**     Data* back = reinterpret_cast<Data*>(raw);          // Deserialize
**
** ▸ Used when doing low-level memory manipulations (serialization, networking, etc.)
** ▸ You MUST ensure the types are compatible in memory layout.
*/

/*
** Summary:
**
**  static_cast:
**    - Safe, compiler-checked
**    - For numeric conversions and logical casts
**    - Used in ScalarConverter (ex00)
**
**  reinterpret_cast:
**    - Unsafe, no type checking
**    - For raw memory reinterpretation (e.g. pointer ↔ integer)
**    - Used in Pointer Serialization (ex01)
*/