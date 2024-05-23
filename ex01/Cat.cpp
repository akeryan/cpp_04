/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:47:49 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/23 10:07:53 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat default constructor is called" << std::endl;
	this->setType("Cat");	
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

const Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj) {
		Animal::operator=(obj);
		*this->_brain = *obj._brain;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;	
}

Cat::Cat(const Cat &obj): Animal(obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	if (this != &obj) {
		this->_brain = new Brain();	
		*this->_brain = *obj._brain; 
	}
}

void Cat::makeSound(void) const
{
	std::cout << "Cat makeSound was called: Meow..." << std::endl;
}

std::string Cat::getType(void) const
{
	std::cout << "Cat getType() function was called" << std::endl;
	return this->_type;
}

Brain *Cat::getBrain(void) const 
{
	return this->_brain;
}