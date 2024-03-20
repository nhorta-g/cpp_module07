/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 11:29:06 by nuno              #+#    #+#             */
/*   Updated: 2024/03/20 15:42:26 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main(void)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(0));

	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)/**/
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	std::cout << "Success: mirror and numbers are equal" << std::endl << std::endl;
	std::cout << "Index 42:\nnumbers: " << numbers[42] << "\nmirror: " << mirror[42] << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}

	std::cout << "After changing numbers:\nIndex 42:\nnumbers: " << numbers[42] << "\nmirror: " << mirror[42] << std::endl;

	delete [] mirror;
	return 0;
}