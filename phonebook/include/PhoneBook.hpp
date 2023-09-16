/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:28:27 by dmatavel          #+#    #+#             */
/*   Updated: 2023/08/28 16:17:57 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public:
	
	Contact	contactsList[8];

	PhoneBook(void);
	~PhoneBook(void);
	
	void	promptMenu(void);
	void	addContact(int i);
	void	searchContact(int savedContacts);
	int		checkValidIndex(int savedContacts);
	void	showMoreInfo(int index);
};

#endif
