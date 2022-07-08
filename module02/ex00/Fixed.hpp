/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <lucas.lethuillier@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:54:44 by llethuil          #+#    #+#             */
/*   Updated: 2022/07/08 09:51:55 by llethuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

/* ************************************************************************** */
/*                                                                            */
/*                               ~~~ INCLUDES ~~~                             */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                                                            */
/*                              ~~~ CLASSES ~~~                               */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
    public:
    
        Fixed(void);
        Fixed(Fixed const &src);
        Fixed   &operator=(Fixed const &src);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        ~Fixed();
    
    private:
        int _value;
        static int const _n_bits_frac_part = 8;
};
