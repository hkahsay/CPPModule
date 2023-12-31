#include"Fixed.hpp"
//_FixPointNbr(0) is the same us _FixPointNbr = 0
Fixed:: Fixed(void): _FixPointNbr(0) {
	std:: cout << "Default constructor called" << std:: endl;
	return ;
}

Fixed:: ~Fixed() {
	std:: cout <<" Destructor called" << std:: endl;
}

// Fixed :: Fixed(int const n): _FixPointNbr(n) {
// 	std:: cout << "Parametric constructor called" << std:: endl;
// 	return;
// }


Fixed :: Fixed(Fixed const& src) {
	std:: cout << "copy constructor called"<< std:: endl;
	*this = src;
}



int Fixed:: getRawBits()const {
	std:: cout<< "getRawBits member function called" << std:: endl;
	return _FixPointNbr;

}

void Fixed:: setRawBits(int const raw) {
	_FixPointNbr = raw;
	return;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
    // Copy assignment operator implementation
    if (this != &rhs) {
        _FixPointNbr = rhs.getRawBits();
		std::cout << "Copy assignment operator called"<< std::endl;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs) {
    // Overloaded insertion operator implementation
    o << rhs.getRawBits();
    return o;
}
