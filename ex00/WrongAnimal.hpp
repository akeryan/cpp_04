/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:11:46 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/21 19:20:38 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP 
# define WRONG_ANIMAL_HPP

# include <string>

class WrongAnimal 
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		virtual ~WrongAnimal();
		const WrongAnimal &operator=(const WrongAnimal &obj);
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;
	protected:
		void setType(const std::string);
		std::string _type;
};

#endif
