#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook	{
private:
		Contact	_contacts[8];
		size_t	_count;
		size_t	_contactIndex;

		void	showHeader(void)	const;

public:
				PhoneBook(void);
		virtual	~PhoneBook(void);

		bool	addContact(void);
		bool	searchContact(void)	const;

};

#endif //PHONEBOOK_HPP
