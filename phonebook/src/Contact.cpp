/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:50:54 by dmatavel          #+#    #+#             */
/*   Updated: 2023/09/16 04:08:32 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

int	Contact::getContactIndex(void)
{
	return (this->_index);
}

std::string	Contact::getFirstName(void)
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void)
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->_darkestSecret);
}

void	Contact::setIndex(int index)
{
	this->_index = index;
}

void	Contact::setFirstName(void)
{
	if (!this->_firstName.empty())
	{
		std::cout << "First name: ";
		std::getline(std::cin, this->_firstName);
	}
	while (this->_firstName.empty())
	{
		std::cout << "First name: ";
		std::getline(std::cin, this->_firstName);
	}
}

void	Contact::setLastName(void)
{
	if (!this->_lastName.empty())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, this->_lastName);
	}
	while (this->_lastName.empty())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, this->_lastName);
	}
}

void	Contact::setNickname(void)
{

	if (!this->_nickname.empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, this->_nickname);
	}
	while (this->_nickname.empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, this->_nickname);
	}	
}

void	Contact::setPhoneNumber(void)
{
	if (!this->_phoneNumber.empty())
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, this->_phoneNumber);
	}
	while (this->_phoneNumber.empty())
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, this->_phoneNumber);
	}
}

void	Contact::setDarkestSecret(void)
{
	if (!this->_darkestSecret.empty())
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, this->_darkestSecret);
	}
	while (this->_darkestSecret.empty())
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, this->_darkestSecret);
	}
}
