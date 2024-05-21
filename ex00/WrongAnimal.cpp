/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:15:06 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/21 19:06:46 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	this->setType("Default_animal");
	std::cout << "WrongAnimal default constructor is called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor is called" << std::endl;
}

const WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj) {
		this->setType(obj.getType());
	}
	std::cout << "WrongAnimal copy assignment operator is called" << std::endl;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
	std::cout << "WrongAnimal copy constructor is called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	std::cout << "WrongAnimal getType() function was called" << std::endl;
	return this->_type;
}

void WrongAnimal::setType(const std::string type)
{
	if (!type.empty()) {
		this->setType(type);
	}
	std::cout << "WrongAnimal setType() function was called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Default WrongAnimal sound" << std::endl;
}

