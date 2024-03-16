/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:44:23 by nuno              #+#    #+#             */
/*   Updated: 2024/03/16 18:51:46 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	int array_int[] = {3, 5, 20};
	std::string names[] = {"Ana", "Nuno", "Jose", "Catia"};

	iter(array_int, 3, print);
	std::cout << std::endl << std::endl;
	iter(names, 4, print);

	return(0);
}