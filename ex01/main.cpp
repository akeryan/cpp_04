/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:53:35 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/22 17:37:12 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main (void)
{
	const Cat *i = new Cat();
	const Cat *j = new Cat();
	delete i;
	delete j;

	Cat a;

	a.getBrain()->addIdea("Mouuusee");
	a.getBrain()->addIdea("Fiiiish");
	Cat b(a);
	a.getBrain()->addIdea("Whiskaaaas");
	
	std::cout << "A Idea: " << a.getBrain()->getIdea() << std::endl;
	std::cout << "A index: " << a.getBrain()->getLastIdeaIndex() << std::endl;
	std::cout << "A Idea: " << b.getBrain()->getIdea() << std::endl;




	//Brain a, b;
	//a.addIdea("Mmmmmmm");
	//b = a;
	//Brain c(a);
	//a.addIdea("UUUuuuuuu");
	//std::cout << "A idea: " << a.getIdea() << std::endl;
	//std::cout << "B idea: " << b.getIdea() << std::endl;
	//std::cout << "C idea: " << c.getIdea() << std::endl;
}