/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:44:04 by nuno              #+#    #+#             */
/*   Updated: 2024/03/30 19:33:05 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void print(T element) {
	std::cout << element << "   ";
}

template <typename T>
void iter (T *str, size_t len, void f(T element)) {
	for (size_t i = 0; i < len; ++i) {
		f(str[i]);
	}
}
#endif