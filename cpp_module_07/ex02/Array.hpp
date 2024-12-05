/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:40:49 by oel-houm          #+#    #+#             */
/*   Updated: 2024/10/20 21:40:50 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>  // For std::out_of_range
#include <iostream>

template<typename T>
class Array {
    private:
        T* _array;
        unsigned int _size;
    public:
        // Default constructor
        Array() : _array(0), _size(0) {}
        
        // Constructor with size parameter
        Array(unsigned int n) : _array(new T[n]()), _size(n) {} // Tip: Try to compile int * a = new int(); then display *a
        
        // Copy constructor
        Array(const Array& other) : _array(0), _size(0) {
            *this = other;
        }
        
        // Assignment operator
        Array& operator=(const Array& other) {
            if (this != &other) {
                if (_array) {
                    delete[] _array;
                }
                _size = other._size;
                _array = new T[_size];
                for (unsigned int i = 0; i < _size; i++) {
                    _array[i] = other._array[i];
                }
            }
            return *this;
        }

        // Destructor
        ~Array() {
            delete[] _array;
        }

        // Bounds Checking

        // Overloading the subscript operator
        T& operator[](unsigned int index) { // This overload is used to allow element access by reference (i.e: it allows modification of elements)
            if (index >= _size) {
                throw std::out_of_range("Index out of bounds");
            }
         return _array[index];
        }

        // Const version of the subscript operator for read-only access
        const T& operator[](unsigned int index) const { // This is the const version, used when the object is read-only, ensuring elements cannot be modified.
            if (index >= _size) {
                throw std::out_of_range("Index out of bounds");
            }
            return _array[index];
        }

        // size() function
        unsigned int size() const {
            return _size;
        }
};

#endif

/* Checklist: 
 [ ] handle if negative or =0 as well
*/
