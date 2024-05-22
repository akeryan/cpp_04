/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:46:38 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/22 19:31:22 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &obj);
		const Dog &operator=(const Dog &obj);
		void makeSound(void) const;

	// getters:
		std::string getType(void) const;
		Brain *getBrain(void) const;
	private:
		Brain *_brain;
};

#endif