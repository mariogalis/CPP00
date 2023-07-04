/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:30:49 by mario             #+#    #+#             */
/*   Updated: 2023/07/04 18:07:05 by magonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#define YELLOW "\x1b[33m"
#define RESET "\x1b[0m"

void printmenu()
{
	std::cout << YELLOW << "  _____        _     ___           _\n |_   _|____ _| |_  | _ ) ___  ___| |__\n   | |/ -_) \\ /  _| | _ \\/ _ \\/ _ \\ / /\n   |_|\\___/_\\_\\__|  |___/\\___/\\___/_\\_\\ \n\n\n" << RESET;
	std::cout << "\t     ----- MENU -----\n\n";
	std::cout << "\t    1.- 📥    ADD   📥\n";
	std::cout << "\t    2.- 🔍  SEARCH  🔍\n";
	std::cout << "\t    3.- ❌   EXIT   ❌\n\n";
}

int main()
{
	std::string	opt;
	PhoneBook book;
	printmenu();
	while (1)
	{
		std::cout << YELLOW << ">" << RESET;
		if (!std::cin)
			break ;
		std::cin >> opt;
		if(opt == "ADD")
			book.add();
		else if(opt == "SEARCH")
			book.search();
		else if(opt == "EXIT")
		{
			std::cout << YELLOW << "\t ___          _ _\n\t| _ )_  _ ___| | |\n\t| _ \\ || / -_)_|_|\n\t|___/\\_, \\___(_|_)\n\t      |__/ " << RESET;
			break;
		}
		else
			std::cout << "Command not Foun\n";
		printmenu();
	}
	return (0);
}

