#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Default")
{
	std::cout << "AAnimal default constructor called\n" << std::endl;
}
AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal constructor called\n" << std::endl;
}
AAnimal::AAnimal(const AAnimal &other) : _type(other._type)
{
	std::cout << "AAnimal copy constructor called\n" << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal &other)
{
	_type = other._type;
	std::cout << "AAnimal asignment copy constructor called\n" << std::endl;
	return (*this);
}
AAnimal::~AAnimal()
{
	std::cout << "AAnimal deconstructor called\n" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal\n" << std::endl;
}
std::string AAnimal::getType() const
{
	return (_type);
}
