/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:40:43 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/23 09:16:36 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat default constructor is called" << std::endl;
	this->setType("WrongCat");	
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

const WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &obj)
		WrongAnimal::operator=(obj);
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
