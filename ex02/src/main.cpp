#include <iostream>
#include "../inc/Array.hpp"


int main(void)
{
	std::cout << "Testing Array of integers:" << std::endl;
	Array<int> intArray(5); 

	std::cout << "Initial values in integer array: ";
	intArray.show();

	for (unsigned int i = 0; i < intArray.size(); ++i) {
		intArray[i] = i * 10;
	}

	std::cout << "Modified values in integer array: ";
	intArray.show();


	std::cout << "\nTesting Array of doubles:" << std::endl;
	Array<double> doubleArray(3);

	std::cout << "Initial values in double array: ";
	doubleArray.show();

	doubleArray[0] = 1.1;
	doubleArray[1] = 2.2;
	doubleArray[2] = 3.3;

	std::cout << "Modified values in double array: ";
	doubleArray.show();


	std::cout << "\nTesting copy constructor with integer array:" << std::endl;
	Array<int> intArrayCopy = intArray;  
	std::cout << "Copied integer array: ";
	intArrayCopy.show();

	std::cout << "\nTesting assignment operator:" << std::endl;
	Array<int> anotherArray(3);  
	anotherArray = intArray;

	std::cout << "Assigned integer array: ";
	anotherArray.show();

    Array<std::string> arrayString(3);
    arrayString[0] = "Hello";
    arrayString[1] = "World";
    arrayString[2] = "C++";

    std::cout << "\nTesting Array of strings:" << std::endl;
    std::cout << "Values in string array: ";
    arrayString.show();

    try
    {
	    std::cout << "Invalid index in double array: ";
	    doubleArray.show();
	    doubleArray[4] = 4.4;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
	    std::cout << "A negative Arrae ";
	    Array<int> negativeArray(-1); 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "Comparing arrays: ";
        Array<int> emptyArray1;
        Array<int> emptyArray2;
        Array<int> emptyArray3(0);
        Array<int> emptyArray4(1);
        emptyArray1.show();
        emptyArray2.show();
        if (emptyArray1 == emptyArray2)
            std::cout << "Both arrays are equal." << std::endl;
        else
            std::cout << "Arrays are not equal." << std::endl;
        if (emptyArray1 != emptyArray3)
            std::cout << "Arrays are not equal." << std::endl;
        else
            std::cout << "Both arrays are equal." << std::endl;
        if (emptyArray1 != emptyArray4)
            std::cout << "Arrays are not equal." << std::endl;
        else
            std::cout << "Both arrays are equal." << std::endl;    
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	return 0;
}
