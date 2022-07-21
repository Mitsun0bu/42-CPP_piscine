/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:35:31 by llethuil          #+#    #+#             */
/*   Updated: 2022/07/21 11:24:37 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# pragma once

/* ************************************************************************** */
/*                                                                            */
/*                            ~~~ INCLUDES ~~~                                */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                             ~~~ CLASSES ~~~                                */
/*                                                                            */
/* ************************************************************************** */

class Bureaucrat;

class Form
{
	public :
		/* constructors 		*/
							Form(void);
							Form(const std::string name, const int sign_grade, const int exec_grade);
		/* member functions */
		const std::string	getName(void) const;
		bool				getSignState(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		void				beSigned(const Bureaucrat &bureaucrat);
		/* exceptions 			*/
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
		/* destructor 			*/
		virtual 			~Form(void);

	private :

		/* copy constructor 	*/
							Form(const Form& src); // private because const member attributes are not accessible
		/* operator overload	*/
		Form				&operator=(const Form& src); // private because const member attributes are not accessible
		/* attributes */
		const std::string	_name;
		bool				_sign_state;
		const int			_sign_grade;
		const int			_exec_grade;
};

std::ostream	&operator<<(std::ostream& stream, const Form& Form);