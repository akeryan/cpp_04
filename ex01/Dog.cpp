/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:41:39 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/23 10:08:26 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog default constructor is called" << std::endl;
	this->setType("Dog");	
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

const Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &obj) {
		Animal::operator=(obj);
		*this->_brain = *obj._brain;
	}
	return *this;	
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	if (this != &obj) {
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