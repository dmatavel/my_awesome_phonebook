/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:15:49 by dmatavel          #+#    #+#             */
/*   Updated: 2023/08/22 15:49:46 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

class	Contact
{
	private:

	int			_index;
	std::string _firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	
	public:

	Contact(void);
	~Contact(void);

	int			getContactIndex(void);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);
	
	void	setIndex(int index);
	void	setFirstName(void);
	void	setLastName(void);
	void	setNickname(void);
	void	setPhoneNumber(void);
	void	setDarkestSecret(void);
};

#endif
