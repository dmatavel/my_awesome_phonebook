/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:00:55 by dmatavel          #+#    #+#             */
/*   Updated: 2023/09/16 04:08:13 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	str;
	int			savedContacts;
	static int	i;
	int			index;

	savedContacts = 0;
	i = 0;
	system("clear");
	PhoneBook.promptMenu();
	while (42)
	{
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (EXIT_SUCCESS);
		else if (str.compare("ADD") == 0
			|| str.compare("add") == 0)
		{
			PhoneBook.addContact(i);
			i++;
			if (savedContacts < 8)
				savedContacts++;
		}
		else if (str.compare("SEARCH") == 0
			|| str.compare("search") == 0)
		{
			PhoneBook.searchContact(savedContacts);
			if (savedContacts != 0)
			{
				std::cout << "Insert a valid contact index to see more information: ";
				index = PhoneBook.checkValidIndex(savedContacts);
				if (index != -1)
					PhoneBook.showMoreInfo(index);
				else
					std::cout << "Invalid index." << std::endl;
			}
		}
		else if (str.compare("EXIT") == 0
			|| str.compare("exit") == 0)
			exit(EXIT_SUCCESS);
		
	}
	return (0);
}

