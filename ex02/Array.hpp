/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 11:29:01 by nuno              #+#    #+#             */
/*   Updated: 2024/03/20 15:10:51 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <exception>

template <typename T>
class Array {
	private:
		T *_array;
		unsigned int _size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &src);
		Array& operator = (const Array &src);
		~Array(void);

		//Operator
		T& operator [] (unsigned int index);

		//Getters
		unsigned int size(void) const;

		//Exepcion class
		class OutOfBound : public std::exception {
			public:
				const char* what() const throw() {
					return ("Index is out of bounds");
				}
		};
};

# include "Array.tpp"
#endif