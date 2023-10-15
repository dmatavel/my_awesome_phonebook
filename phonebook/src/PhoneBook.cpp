/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:11:53 by dmatavel          #+#    #+#             */
/*   Updated: 2023/10/15 07:39:18 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::promptMenu(void)
{
	std::cout << std::setw(30) << "| ****** My Awesome Phonebook ****** |\n";
	std::cout << std::setw(30) << "|                                    |\n";
	std::cout << std::setw(30) << "| Insert 'ADD' to add a new contact. |\n";
	std::cout << std::setw(30) << "| 'SEARCH' to find a stored contact. |\n";
	std::cout << std::setw(30) << "| 'EXIT' to quit PhoneBook.          |\n";
	std::cout << std::setw(30) << "|                                    |\n";
	std::cout << std::setw(30) << "| ****** My Awesome Phonebook ****** |\n"
	<< std::endl;
}

void	PhoneBook::addContact(int i)
{
	static int	j;
	
	j = 0;
	if (i > 7)
	{
		i = j;
		j++;
	}
	PhoneBook::contactsList[i].setIndex(i);
	PhoneBook::contactsList[i].setFirstName();
	PhoneBook::contactsList[i].setLastName();
	PhoneBook::contactsList[i].setNickname();
	PhoneBook::contactsList[i].setPhoneNumber();
	PhoneBook::contactsList[i].setDarkestSecret();
	system("clear");
	this->promptMenu();
	std::cout << "Contact saved.";
	std::cout << std::endl;
	return ;
}

void	PhoneBook::searchContact(int savedContacts)
{
	if (savedContacts == 0)
	{
		std::cout << "Your phonebook is empty." << std::endl;
		return ;
	}
	std::cout << "Table of contacts:" << std::endl;
	for (int i = 0; i <= savedContacts - 1; i++)
	{
		std::cout << std::setw(10) << std::right
			<< PhoneBook::contactsList[i].getContactIndex() + 1;
		std::cout << " | ";
		std::string	str = PhoneBook::contactsList[i].getFirstName();
		if (str.length() > 10)
		{
			str.resize(9);
			if (!isspace(str[8]))
				str.append(".");
			std::cout << std::setw(9) << std::right
				<< str;
		}
		else
		{
			std::cout << std::setw(10) << std::right
				<< PhoneBook::contactsList[i].getFirstName();
		}
		std::cout << " | ";
		std::string	str2 = PhoneBook::contactsList[i].getLastName();
		if (str2.length() > 10)
		{
			str2.resize(9);
			if (!isspace(str2[8]))
				str2.append(".");
			std::cout << std::setw(9) << std::right
				<< str2;
		}
		else
		{
			std::cout << std::setw(10) << std::right
				<< PhoneBook::contactsList[i].getLastName();
		}
		std::cout << " | ";
		std::string str3 = PhoneBook::contactsList[i].getNickname();
		if (str3.length() > 10)
		{
			str3.resize(9);
			if (!isspace(str3[8]))
				str3.append(".");
			std::cout << std::setw(9) << std::right
				<< str3;
		}
		else
		{
			std::cout << std::setw(10) << std::right
				<< PhoneBook::contactsList[i].getNickname();
		}
		std::cout << std::endl;
	}
}

void	PhoneBook::showMoreInfo(int index)
{
	std::cout << "First name: ";
	std::cout << PhoneBook::contactsList[index - 1].getFirstName();
	std::cout << std::endl;
	std::cout << "Last name: ";
	std::cout << PhoneBook::contactsList[index - 1].getLastName();
	std::cout << std::endl;
	std::cout << "Nickame: ";
	std::cout << PhoneBook::contactsList[index - 1].getNickname();
	std::cout << std::endl;
	std::cout << "Phone number: ";
	std::cout << PhoneBook::contactsList[index - 1].getPhoneNumber();
	std::cout << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << PhoneBook::contactsList[index - 1].getDarkestSecret();
	std::cout << std::endl;
}

int	PhoneBook::checkValidIndex(int savedContacts)
{
	size_t		i;
	std::string buffer;

	std::getline(std::cin, buffer);
	if (std::cin.eof())
		exit (EXIT_SUCCESS);
	else if (buffer.empty())
		return (-1);
	for (i = 0; i < buffer.length(); i++)
	{
		if (!isdigit(buffer[i]))
			return (-1);
	}
	for (i = 0; i < buffer.length(); i++)
	{
		if (atoi(&buffer[i]) < 1 || atoi(&buffer[i]) > savedContacts)
			return (-1);
	}
	return (atoi(&buffer[0]));
}
