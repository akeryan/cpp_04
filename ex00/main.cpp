/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:53:35 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/23 09:55:13 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;
	delete meta;
	
	const WrongAnimal *teta = new WrongAnimal();
	const WrongAnimal *wA = new WrongCat();
	const WrongCat	*wC = new WrongCat(); 
	std::cout << teta->getType() << " " << std::endl;
	std::cout << wA->getType() << " " << std::endl;
	std::cout << wC->getType() << " " << std::endl;

	teta->makeSound();
	wA->makeSound();
	wC->makeSound();

	delete wA;
	delete wC;
	delete teta;

	return 0;
}