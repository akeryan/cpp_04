/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:47:49 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/23 09:43:19 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal()
{
	std::cout << "Cat default constructor is called" << std::endl;
	this->setType("Cat");	
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

const Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	return *this;	
}

Cat::Cat(const Cat &obj): Animal(obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat makeSound was called: MEOOOOW ..." << std::endl;
}

std::string Cat::getType(void) const
{
	std::cout << "Cat getType() function was called" << std::endl;
	return this->_type;
}
