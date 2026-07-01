#include "Cat.hpp"
Cat::Cat() : Animal(), _brain(new Brain())
{
	_type = "Cat";
	std::cout << "Cat default constructor called\n" << std::endl;
}
Cat::Cat(std::string type) : Animal(type), _brain(new Brain())
{
	std::cout << "Cat constructor called\n" << std::endl;
}
Cat::Cat(const Cat &other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Cat copy constructor called\n" << std::endl;
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	std::cout << "Cat assignment copy constructor called\n" << std::endl;
	return (*this);
}
Cat::~Cat()
{
	delete	_brain;

	std::cout << "Cat deconstructor called\n" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Nyaaaaaaaaaa\n" << std::endl;
}
