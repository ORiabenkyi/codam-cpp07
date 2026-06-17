#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
private:
    T*     _array;
    size_t _size;
public:
    Array() : _array(new T[0]()), _size(0) {}

    Array(size_t size) : _array(new T[size]()), _size(size) {}

    Array(const Array& other) : _array(new T[other._size]()), _size(other._size)
    {
        for (size_t i = 0; i < _size; ++i)
            _array[i] = other._array[i];
    }

    Array& operator=(const Array& other)
    {
        if (this != &other)
        {
            T* temp = new T[other._size]();
            for (size_t i = 0; i < other._size; ++i)
                temp[i] = other._array[i];
            delete[] _array;
            _array = temp;
            _size  = other._size;
        }
        return *this;
    }

    ~Array() { delete[] _array; }

    T& operator[](size_t index)
    {
        if (index >= _size)
            throw std::out_of_range("Index out of range");
        return _array[index];
    }

    bool operator==(const Array& other) const
    {
        if (_size != other._size)
            return false;
        for (size_t i = 0; i < _size; ++i)
            if (_array[i] != other._array[i])
                return false;
        return true;
    }

    bool operator!=(const Array& other) const
    {
        return !(*this == other);
    }

    const T& operator[](size_t index) const
    {
        if (index >= _size)
            throw std::out_of_range("Index out of range");
        return _array[index];
    }

    size_t size() const { return _size; }

    void show() const
    {
        for (size_t i = 0; i < _size; ++i)
            std::cout << _array[i] << " ";
        std::cout << std::endl;
    }
};

#endif
