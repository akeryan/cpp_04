/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:53:35 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/23 10:17:21 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{
	const Cat *i = new Cat();
	const Cat *j = new Cat();
	delete j;
	i->getBrain()->addIdea("I am so hungry....");

	Cat a, c, e(*i);

	std::cout << "E_1 Idea: " << e.getBrain()->getIdea() << std::endl;
	delete i;
	std::cout << "E_2 Idea: " << e.getBrain()->getIdea() << std::endl;
	a.getBrain()->addIdea("Mouuusee");
	a.getBrain()->addIdea("Fiiiish");

	Cat b(a);
	const Cat *d = new Cat(a);
	c = a;

	a.getBrain()->addIdea("Whiskaaaas");

	std::cout << "A Idea: " << a.getBrain()->getIdea() << std::endl;
	std::cout << "B Idea: " << b.getBrain()->getIdea() << std::endl;
	std::cout << "C Idea: " << c.getBrain()->getIdea() << std::endl;
	std::cout << "D Idea: " << d->getBrain()->getIdea() << std::endl;

	delete d;

	std::cout << "-----------------------------------------------------" << std::endl;

	Animal *arr[10];
	for(int i = 0; i < 5; i++)
		arr[i] = new Cat();
	for(int i = 5; i < 10; i++)
		arr[i] = new Dog();
	for (int i = 0; i < 10; i++)
		delete arr[i];
}