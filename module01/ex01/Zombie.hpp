/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 09:26:41 by llethuil          #+#    #+#             */
/*   Updated: 2022/08/19 09:38:28 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

/* ************************************************************************** */
/*                                                                            */
/*                               ~~~ INCLUDES ~~~                             */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <time.h>

/* ************************************************************************** */
/*                                                                            */
/*                            ~~~ COLOR DEFINES ~~~                           */
/*                                                                            */
/* ************************************************************************** */

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define END "\033[0m"

/* ************************************************************************** */
/*                                                                            */
/*                              ~~~ CLASSES ~~~                               */
/*                                                                            */
/* ************************************************************************** */

class	Zombie
{
	public:

		/* constructor							*/
					Zombie(void);

		/* member functions						*/
		void		announce(void) const;
		void		set_name(std::string);

		/* destructor							*/
					~Zombie(void);

	private:

		/* private attributes					*/
		int			 _i;
		std::string	 _name;
};

/* ************************************************************************** */
/*                                                                            */
/*                        ~~~ NON-MEMBER FUNCTIONS ~~~                        */
/*                                                                            */
/* ************************************************************************** */

Zombie* zombieHorde(int N, std::string name);

# endif