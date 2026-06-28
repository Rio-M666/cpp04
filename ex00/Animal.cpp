#include "Animal.hpp"

Animal::Animal():_type("Default")
{
	std::cout << "Animal default constructor called\n" << std::endl;
}
Animal::Animal(std::string type):_type(type)
{
	std::cout << "Animal constructor called\n" << std::endl;
}
Animal::Animal(const Animal &other):_type(other._type)
{
	std::cout << "Animal copy constructor called\n" << std::endl;
}
Animal &Animal::operator=(const Animal &other)
{
	_type = other._type;
	std::cout << "Animal asignment copy constructor called\n" << std::endl;
	return (*this);
}
Animal::~Animal()
{
	std::cout << "Animal deconstructor called\n" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal\n" << std::endl;
}
std::string Animal::getType() const
{
	return (_type);
}
