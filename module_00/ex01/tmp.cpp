




void	PhoneBook::search(void)
{
	std::string input;
	int 		index;
	int 		maxIndex = this->_id > 7 ? 8 : this->_id;

	std::cout << CLEAR;
	std::cout << "**********************************" << std::endl;
	std::cout << "*         SEARCH CONTACTS        *" << std::endl;
	std::cout << "**********************************" << std::endl << std::endl;
	
	if (this->_id == 0)
	{
		std::cout << "No contacts added yet." << std::endl;
		std::cout << "Press ENTER to back." << std::endl;
		std::cin.ignore();
		return ;
	}
	this->_printTable();
	std::cout << "Avaliabe commands:" << std::endl;
	std::cout << "- [index number]" << std::endl;
	std::cout << "- BACK" << std::endl << std::endl;
	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		index = std::atoi(input.c_str());
		if (input == "BACK")
			break ;
		else if (index < 1 || index > maxIndex)
		{
			std::cout << "Invalid command. Please try again or type BACK to return." << std::endl;
			continue ;
		}
		else
		{
			this->_contacts[index - 1].displayContact();
			std::cout << "Press ENTER to continue." << std::endl;
			std::cin.ignore();
			break ;
		}
	}
}