#include <iostream>
#include "../inc/whatever.hpp"


int main(void)
{

    {
        int a = 15;
        int b = 10;
        std::cout << "a: " << a  << std::endl;
        std::cout << "b: " << b  << std::endl;
        std::cout << "Min: " << ::min(a, b) << std::endl;
        std::cout << "Max: " << ::max(a, b) << std::endl;
        ::swap(a, b);
        std::cout << "After swap - a: " << a << ", b: " << b << std::endl;
    }

    {
        double a = 15.5;
        double b = 10.2;
        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;
        std::cout << "Min: " << ::min(a, b) << std::endl;
        std::cout << "Max: " << ::max(a, b) << std::endl;
        ::swap(a, b);
        std::cout << "After swap - a: " << a << ", b: " << b << std::endl;
    }

    {
        std::string a = "Hello";
        std::string b = "World";
        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;
        std::cout << "Min: " << ::min(a, b) << std::endl;
        std::cout << "Max: " << ::max(a, b) << std::endl;
        ::swap(a, b);
        std::cout << "After swap - a: " << a << ", b: " << b << std::endl;  
    }


    return 0;
}