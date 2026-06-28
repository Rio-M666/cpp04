#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(std::string type) : Animal(type)
{
	_type = type;
	std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
	std::cout << "Dog copy constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &other)
{
	_type = other._type;
	std::cout << "Dog assignment copy constructor called" << std::endl;
	return (*this);
}
Dog::~Dog()
{
	std::cout << "Dog deconstructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wan Wan Wan\n" << std::endl;
}