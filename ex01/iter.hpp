/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:44:04 by nuno              #+#    #+#             */
/*   Updated: 2024/03/16 18:52:11 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

template <typename T>
void print(T element) {
	std::cout << element << "   ";
}

template <typename T>
void iter (T *str, size_t len, void f(T element)) {
	size_t i = 0;
	while (str && i < len)
		f(str[i++]);
}