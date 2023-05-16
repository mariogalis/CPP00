/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:08:21 by mario             #+#    #+#             */
/*   Updated: 2023/05/16 16:53:54 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#define YELLOW "\x1b[33m"
#define RESET "\x1b[0m"
#define RED "\x1b[31m"

Contact::Contact(void){}

Contact::~Contact(void){}

bool Contact::checkempty(void)
{
	if(_lastName.empty())
		return false;
	else if (_firstName.empty())
		return false;
	return true;
}

bool Contact::create(void)
{
	int	i = 0;
	
	std::cout << "\tType first name ...\n" << YELLOW << ">" << RESET;
	std::cin >> _firstName;
	std::cout << "\tType last name ...\n"<< YELLOW << ">" << RESET;
	std::cin >> _lastName;
	std::cout << "\tType nick name ...\n"<< YELLOW << ">" << RESET;
	std::cin >> _nickName;
	std::cout << "\tType phone number name ...\n"<< YELLOW << ">" << RESET;
	std::cin >> _phoneNumber;
	while (_phoneNumber[i])
	{
		if(!isdigit(_phoneNumber[i]))
		{
			std::cout << RED << "\n\n\t!!!!! ERROR ONLY NUMBERS !!!!!\n\n" << RESET;
			return false;
		}
	}
	
	std::cout << "\tType darckest secret ...\n"<< YELLOW << ">" << RESET;
	std::cin >> _darkestSecret;
	return 0;
}

void Contact::contactlist(void)
{
	if(_firstName.length() > 10)
		std::cout << _firstName.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << _firstName << "|";
	
	if(_firstName.length() > 10)
		std::cout << _firstName.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << _firstName << "|";
	
	std::cout << _lastName << "  " ;
	std::cout << _nickName<< "  \n" ;
}

void Contact::print(void)
{
	std::cout << "\tFirst Name     : " << _firstName << "\n";
	std::cout << "\tLast Name      : " << _lastName<< "\n";
	std::cout << "\tNickname       : " << _nickName<< "\n";
	std::cout << "\tPhone Number   : " << _phoneNumber << "\n";
	std::cout << "\tDarkest Secret : " << _darkestSecret<< "\n";
	
}