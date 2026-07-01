#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
	_type = "Dog";
	std::cout << "Dog default constructor called\n" << std::endl;
}
Dog::Dog(std::string type) : Animal(type), _brain(new Brain())
{
	std::cout << "Dog constructor called\n" << std::endl;
}
Dog::Dog(const Dog &other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Dog copy constructor called\n" << std::endl;
}
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
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

void Dog::setBrainIdea(int index, const std::string &idea)
{
	_brain->setIdea(index, idea);
}

std::string Dog::getBrainIdea(int index) const
{
	return (_brain->getIdea(index));
}
