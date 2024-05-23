/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:15:06 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/23 09:47:22 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor is called" << std::endl;
	this->setType("Wrong_Default_animal");
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor is called" << std::endl;
}

const WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy assignment operator is called" << std::endl;
	if (this != &obj) {
		this->setType(obj.getType());
	}
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy constructor is called" << std::endl;
	*this = obj;
}

std::string WrongAnimal::getType(void) const
{
	std::cout << "WrongAnimal getType() function was called" << std::endl;
	return this->_type;
}

void WrongAnimal::setType(const std::string type)
{
	std::cout << "WrongAnimal setType() function was called" << std::endl;
	if (!type.empty()) {
		this->_type = type;
	}
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal WRONG_SOUND" << std::endl;
}

