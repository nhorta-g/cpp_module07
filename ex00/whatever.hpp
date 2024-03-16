/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:43:40 by nuno              #+#    #+#             */
/*   Updated: 2024/03/14 22:43:43 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include<iostream>

template <typename T> void swap(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

template <typename T> T min(T x, T y)
{
	if (x < y)
		return (x);
	else
		return(y);
}

template <typename T> T max(T x, T y)
{
	if (x > y)
		return (x);
	else
		return(y);
}

#endif