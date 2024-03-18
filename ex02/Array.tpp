#include "Array.hpp"

template <typename T>
Array<T>::Array(void) {
	std::cout << "Constructor with no parameter created empty array."  << std::endl;
	_array = new T[0];
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	std::cout << "Constructor with n parameter created array of n elements." << std::endl;
	_array = new T[n];
	_size = n;
}

template <typename T>
Array<T>::Array(const Array &src) {
	std::cout << "Copy constructor called." << std::endl;
	_array = new T[src.getSize()];
	for (unsigned int i = 0; i < src.getSize(); i++) {
		_array[i] = src._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator = (const Array &src) {
	std::cout << "Assignement operator constructor called." << std::endl;
	if (&src != this) {
		delete[] _array;
		_array = new T[src.getSize()];
		for (unsigned int i = 0; i < src.getSize(); i++) {
			_array[i] = src._array[i];
		}
	}
	return (*this);
}

template <typename T>
Array<T>::~Array(void) {
	std::cout << "Assignement destructor called." << std::endl;
	delete[_array];
}

//Getters
template <typename T>
unsigned int Array<T>::getSize(void) const {
	return (_size);
}