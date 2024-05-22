/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:45:07 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/22 17:35:29 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain(): _lastIdeaIndex(-1)
{
	std::cout << "Brain default constructor is called" << std::endl;
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
		for (int i = 0; i <= _lastIdeaIndex; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return *this;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor is called" << std::endl;
	*this = obj;
}

/// @brief Returns the idea, which is under a specific index in the array of ideas
/// @return 
const std::string &Brain::getIdea(int index) const
{
	std::cout << "Brain getIdea(" << index << ") is called" << std:: endl;
	if (index >= 0 && index < numOfIdeas) {
		return this->_ideas[index];
	} else if (_lastIdeaIndex > 0)
		return this->_ideas[this->_lastIdeaIndex];
	return this->_ideas[0];
}

void Brain::addIdea(const std::string idea)
{
	std::cout << "Brain addIdea(" << idea << ") function is called" << std::endl;
	if (!idea.empty() && _lastIdeaIndex < numOfIdeas) {
		this->_ideas[++this->_lastIdeaIndex] = idea;
	}
}

void Brain::changeIdea(const std::string &idea, const int index)
{
	if (index >= 0 && index <= this->_lastIdeaIndex) {
		this->_ideas[index] = idea;	
	}
}

int Brain::getLastIdeaIndex(void) const
{
	return _lastIdeaIndex;
}