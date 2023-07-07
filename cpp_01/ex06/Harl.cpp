#include"Harl.hpp"
#include <string>
#include<iostream>

Harl::Harl()
{
	return;
}


Harl::~Harl()
{
	return;
}

void Harl:: complain (std:: string level) {

	int i = 0;
	
	std:: string levelArr[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};// arrayptr

	void (Harl::*funcPtrArr[])(void) = { &Harl:: debug, &Harl:: info, &Harl:: warning, \
	&Harl:: error}; // ptr to a function

	for ( i = 0; i < 4; i++)
	{
		if (level.compare(levelArr[i]) == 0)
			break;
	}
	switch(i) {
		case 0: (this->*funcPtrArr[0])();
		case 1: (this->*funcPtrArr[1])();
		case 2: (this->*funcPtrArr[2])();
		case 3: (this->*funcPtrArr[3])();
			break;
		default:
		std:: cout << "[ Probably complaining about insignificant problems]"<< std:: endl;
	}

	return ;
}

void Harl:: debug(void) {
	std:: cout << "[ DEBUG ] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std:: endl;
	return ;
}

void Harl:: info(void) {
	std:: cout << "[ INFO ] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std:: endl;
	return ;
}

void Harl:: warning (void) {
	std:: cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std:: endl;
	return ;
}
void Harl:: error(void) {
	std::cout << "[ ERROR ] This is unacceptable! I want to speak to the manager now." << std:: endl;
	return ;
}


