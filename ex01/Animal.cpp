/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:09:12 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/23 10:07:29 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	this->setType("Default_animal");
	std::cout << "Animal default constructor is called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor is called" << std::endl;
}

const Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal copy assignment operator is called" << std::endl;
	if (this != &obj) {
		this->setType(obj.getType());
	}
	return *this;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor is called" << std::endl;
	*this = obj;
}

std::string Animal::getType(void) const
{
	std::cout << "Animal getType() function was called" << std::endl;
	return this->_type;
}

void Animal::setType(const std::string type)
{
	std::cout << "Animal setType() function was called" << std::endl;
	if (!type.empty()) {
		this->_type = type;
	}
}

void Animal::makeSound(void) const
{
	std::cout << "Default Animal sound" << std::endl;
}

