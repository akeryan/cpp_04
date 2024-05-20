/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:47:49 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/20 17:49:20 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal()
{
	this->setType("Cat");	
	std::cout << "Cat default constructor is called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

const Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj)
		Animal::operator=(obj);
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;	
}

Cat::Cat(const Cat &obj): Animal(obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
}
