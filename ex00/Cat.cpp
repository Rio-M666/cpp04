#include "Cat.hpp"

Cat::Cat():Animal()
{
    _type="Cat";
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(std::string type):Animal(type)
{
    _type=type;
	std::cout << "Cat constructor called" << std::endl;
}
Cat::Cat(const Cat &other):Animal(other)
{
    *this=other;
	std::cout << "Cat copy constructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &other)
{
    _type=other._type;
	std::cout << "Cat assignment copy constructor called" << std::endl;
    return(*this);
}
Cat::~Cat()
{
	std::cout << "Cat deconstructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Nyaaaaaaaaaa\n" << std::endl;
}