/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 08:44:37 by nuno              #+#    #+#             */
/*   Updated: 2024/03/20 14:50:04 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) {
	std::cout << "Constructor with no parameter created empty array."  << std::endl;
	_array = new T[0];
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	std::cout << "User defined constructor created array of " << n << " elements." << std::endl;
	_array = new T[n];
	_size = n;
}

template <typename T>
Array<T>::~Array(void) {
	std::cout << "Destructor called." << std::endl;
	delete[] _array;
}

template <typename T>
Array<T>::Array(const Array &src) {
	std::cout << "Copy constructor called." << std::endl;
	_size = src._size;
	_array = new T[src._size];
	for (unsigned int i = 0; i < src._size; i++) {
		_array[i] = src._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator = (const Array &src) {
	std::cout << "Assignement operator constructor called." << std::endl;
	if (&src != this) {
		delete[] _array;
		_size = src._size;
		_array = new T[src._size];
		for (unsigned int i = 0; i < src._size; i++) {
			_array[i] = src._array[i];
		}
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[] (unsigned int index) {
	if (index >= _size)
		throw (OutOfBound());
	return(_array[index]);
}

//Getters
template <typename T>
unsigned int Array<T>::size(void) const {
	return (_size);
}
