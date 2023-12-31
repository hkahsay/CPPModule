/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:11:18 by hkahsay           #+#    #+#             */
/*   Updated: 2023/11/27 12:29:23 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include<string>
#include<iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm {

	private:

	const std::string _name;
	bool _signed;
	const int _grade_sign;
	const int _grade_exec;

	public:

	AForm(void);// Default constructor
	virtual~AForm(void);
	AForm(std::string name, int gradeSign, int gradeExec);
	AForm(AForm const & src);
	AForm& operator = (const AForm& rhs);
	std::string getName(void) const;
	bool	getSigned(void) const;
	int getGrade_sign(void) const;
	int getGrade_exec(void) const;
	bool beSigned(Bureaucrat &bureaucrat);
	virtual bool execute(Bureaucrat const & executor) const = 0;
	class GradeTooHighException: public std::exception {
		public:

		virtual char const * what() const throw();
	};
	class GradeTooLowException: public std::exception {
		public:
		char const * what() const throw();
	};
	class NotSignedException: public std::exception {
		public:
		char const * what() const throw();
	};
};

std::ostream& operator<< (std:: ostream & o, AForm const & rhs);

#endif