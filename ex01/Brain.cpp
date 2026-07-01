#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		_ideas[i] = other._ideas[i];
		i++;
	}
	std::cout << "Brain copy assigment constructor called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called" << std::endl;
}