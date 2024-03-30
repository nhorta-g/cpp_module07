/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <nhorta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:44:23 by nuno              #+#    #+#             */
/*   Updated: 2024/03/30 19:33:28 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	int array_int[] = {3, 5, 20};
	std::string names[] = {"Ana", "Nuno", "Jose", "Catia"};

	iter(array_int, 4, print);
	std::cout << std::endl << std::endl;
	iter(names, 4, print);

	return(0);
}