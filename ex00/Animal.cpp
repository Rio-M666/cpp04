#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(std::string type)
{
	_type = type;
	std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal copy constructor called" << std::endl;
}
Animal &Animal::operator=(const Animal &other)
{
	_type = other._type;
	std::cout << "Animal asignment copy constructor called" << std::endl;
	return (*this);
}
Animal::~Animal()
{
	std::cout << "Animal deconstructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal" << std::endl;
}
std::string Animal::getType() const
{
	return (_type);
}
