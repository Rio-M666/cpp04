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

void Brain::setIdea(int index, const std::string &idea)
{
	if (index < 0 || index >= 100)
		return ;
	_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		return ("");
	return (_ideas[index]);
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called" << std::endl;
}
