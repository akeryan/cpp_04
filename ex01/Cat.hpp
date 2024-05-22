/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:46:38 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/22 12:55:56 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &obj);
		const Cat &operator=(const Cat &obj);
		void makeSound(void) const;

	// getters:
		std::string getType(void) const;
		Brain *getBrain(void) const;
	private:
		Brain *_brain;
};

#endif