/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:03:08 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/20 17:29:04 by akeryan          ###   ########.fr       */
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
		~Animal();
		const Animal &operator=(const Animal &obj);
		std::string getType(void) const;
		void setType(const std::string);
	protected:
		std::string _type;
};

#endif
