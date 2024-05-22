/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:45:07 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/22 10:54:10 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor is called" << std::endl;
	this->_lastIdeaIndex = 0;
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called" << std::endl;
}

const Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Brain copy assignment operator is called" << std::endl;
	if (this != &obj) {
		this->_lastIdeaIndex = obj._lastIdeaIndex;
		for (int i = 0; i < _lastIdeaIndex; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return *this;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor is called" << std::endl;
	*this = obj;
}

const std::string &Brain::getIdea(unsigned int index) const
{
	if (index < numOfIdeas) {
		return this->_ideas[index];
	}
}

void Brain::addIdea(const std::string &idea)
{
	if (this->_lastIdeaIndex < numOfIdeas - 1)	
		this->_ideas[++this->_lastIdeaIndex] = idea;
}

void Brain::changeIdea(const std::string &idea, const unsigned int index)
{
	if (index <= this->_lastIdeaIndex) {
		this->_ideas[index] = idea;	
	}
}