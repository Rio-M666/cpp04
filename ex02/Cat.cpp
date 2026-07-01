#include "Cat.hpp"
Cat::Cat() : AAnimal(), _brain(new Brain())
{
	_type = "Cat";
	std::cout << "Cat default constructor called\n" << std::endl;
}
Cat::Cat(std::string type) : AAnimal(type), _brain(new Brain())
{
	std::cout << "Cat constructor called\n" << std::endl;
}
Cat::Cat(const Cat &other) : AAnimal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Cat copy constructor called\n" << std::endl;
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
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
