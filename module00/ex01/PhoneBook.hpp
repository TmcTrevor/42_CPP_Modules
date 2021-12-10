
#include "Contact.hpp"

class PhoneBook 
{
	private:
		Contact contacts[8];
		static int nb_contact;
		static int last;
		int get_total_count();
	public :
		void promt();
		Contact& get_contact(int index);
		void	add();
		void	search();
};