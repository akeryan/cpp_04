/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:03:08 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/21 19:19:55 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal 
{
	public:
		Animal();
		Animal(const Animal &obj);
		virtual ~Animal();
		const Animal &operator=(const Animal &obj);
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;
	protected:
		void setType(const std::string);
		std::string _type;
};

#endif
