/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 11:29:01 by nuno              #+#    #+#             */
/*   Updated: 2024/03/18 19:02:47 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include "Array.tpp"

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
		//Getters
		unsigned int getSize(void) const;
};

#endif