/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:40:43 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/21 19:10:40 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal()
{
	this->setType("WrongCat");	
	std::cout << "WrongCat default constructor is called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

const WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
		WrongAnimal::operator=(obj);
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return *this;	
}

WrongCat::WrongCat(const WrongCat &obj): WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat makes Wrong Meow..." << std::endl;
}

std::string WrongCat::getType(void) const
{
	std::cout << "WrongCat getType() function was called" << std::endl;
	return this->_type;
}
