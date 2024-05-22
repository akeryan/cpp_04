/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:41:39 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/22 19:41:42 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
	this->setType("Dog");	
	this->_brain = new Brain();
	std::cout << "Dog default constructor is called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

const Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj) {
		Animal::operator=(obj);
		*this->_brain = *obj._brain;
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;	
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	if (this != &obj) {
		std::cout << "Dog copy constructor called" << std::endl;
		this->_brain = new Brain();	
		*this->_brain = *obj._brain; 
	}
}

void Dog::makeSound(void) const
{
	std::cout << "Dog makeSound was called: Meow..." << std::endl;
}

std::string Dog::getType(void) const
{
	std::cout << "Dog getType() function was called" << std::endl;
	return this->_type;
}

Brain *Dog::getBrain(void) const 
{
	return this->_brain;
}