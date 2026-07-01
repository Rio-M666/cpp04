#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal	*animals[4];
	int		i;

	std::cout << "=== Animal array test ===" << std::endl;
	i = 0;
	while (i < 4)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < 4)
	{
		delete animals[i];
		i++;
	}

	std::cout << "\n=== Deep copy test ===" << std::endl;
	Dog	basic;
	Dog	copy(basic);
	Dog	assigned;

	assigned = basic;

	Cat	catBasic;
	Cat	catCopy(catBasic);
	Cat	catAssigned;

	catAssigned = catBasic;

	return (0);
}
