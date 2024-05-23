/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:24:50 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/23 09:43:40 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal()
{
	std::cout << "Dog default constructor is called" << std::endl;
	this->setType("Dog");	
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

const Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	return *this;	
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog makeSound() was called: WOOOOF ..." << std::endl;
}

std::string Dog::getType(void) const
{
	std::cout << "Dog getType() function was called" << std::endl;
	return this->_type;
}