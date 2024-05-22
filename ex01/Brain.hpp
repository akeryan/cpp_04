/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:40:03 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/22 10:52:13 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain 
{
	public:
		const static int numOfIdeas = 100;
		Brain();
		~Brain();
		Brain(const Brain &obj);
		const Brain &operator=(const Brain &obj);
		const std::string &getIdea(unsigned int index) const;
		void addIdea(const std::string &idea);
		void changeIdea(const std::string &idea, const unsigned int index);
	private:
		std::string _ideas[numOfIdeas];
		unsigned int _lastIdeaIndex;
};

#endif