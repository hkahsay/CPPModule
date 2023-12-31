#include"Point.hpp"
#include"Fixed.hpp"

Point:: Point(void): _x(0), _y(0) {
	// std:: cout << "Default constructor called" << std:: endl;
	return ;
}

Point:: ~Point(void) {
	std:: cout << "Default Destructor called" << std:: endl;
	return ;

}

Point :: Point(float const& a, float const& b): _x(a), _y(b){
	// std:: cout << "Int constructor called" << std:: endl;
	return;

}

Point :: Point(Point const & src) {
	// std:: cout << "copy constructor called"<< std:: endl;
	*this = src;
	return;
}

int Point::getx() const {
    return _x.getRawBits();
}

int Point::gety() const {
    return _y.getRawBits();
}

// const Fixed& Point::getx()const {
// 	return _x; //.getRawBits();
// }

// const Fixed& Point::gety()const {
// 	return _y; //.getRawBits();
// }


Point & Point:: operator = (const Point& rhs){
	if (this != &rhs)
	{
		_x.getx() = rhs._x;
		_y.gety() = rhs._y;
	}
	return *this;	
}
