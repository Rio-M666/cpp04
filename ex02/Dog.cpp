#include "Dog.hpp"

Dog::Dog() : AAnimal(), _brain(new Brain())
{
	_type = "Dog";
	std::cout << "Dog default constructor called\n" << std::endl;
}
Dog::Dog(std::string type) : AAnimal(type), _brain(new Brain())
{
	std::cout << "Dog constructor called\n" << std::endl;
}
Dog::Dog(const Dog &other) : AAnimal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Dog copy constructor called\n" << std::endl;
}
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		*_brain = *other._brain;
	}
	std::cout << "Dog assignment copy constructor called\n" << std::endl;
	return (*this);
}
Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog deconstructor called\n" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wan Wan Wan\n" << std::endl;
}
