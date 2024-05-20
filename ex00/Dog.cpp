/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:24:50 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/20 17:45:30 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal()
{
	this->setType("Dog");	
	std::cout << "Dog default constructor is called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

const Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
		Animal::operator=(obj);
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;	
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
}
