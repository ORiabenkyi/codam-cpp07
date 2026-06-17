#include <iostream>
#include "../inc/iter.hpp"

static void doubleInt(int &x)             { x *= 2; }
static void appendBang(std::string &s)    { s += "!"; }
static void printInt(const int &x)        { std::cout << x << " "; }
static void printStr(const std::string &s){ std::cout << s << " "; }

int main(void)
{
    {
        int array[] = {1, 2, 3, 4, 5};
        ::iter(array, 5, doubleInt);
        for (size_t i = 0; i < 5; ++i)
            std::cout << array[i] << " ";
        std::cout << std::endl;
    }

    {
        std::string array[] = {"Hello", "World", "C++"};
        ::iter(array, 3, appendBang);
        for (size_t i = 0; i < 3; ++i)
            std::cout << array[i] << " ";
        std::cout << std::endl;
    }

    {
        const int carray[] = {10, 20, 30};
        ::iter(carray, 3, printInt);
        std::cout << std::endl;
    }

    {
        const std::string sarray[] = {"Hello", "World", "C++"};
        ::iter(sarray, 3, printStr);
        std::cout << std::endl;
    }

    return 0;
}
