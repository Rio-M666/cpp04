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

	basic.setBrainIdea(0, "original dog idea");
	Dog	copy(basic);
	Dog	assigned;

	assigned = basic;
	basic.setBrainIdea(0, "changed dog idea");
	std::cout << "Dog basic idea: " << basic.getBrainIdea(0) << std::endl;
	std::cout << "Dog copy idea: " << copy.getBrainIdea(0) << std::endl;
	std::cout << "Dog assigned idea: " << assigned.getBrainIdea(0) << std::endl;

	Cat	catBasic;

	catBasic.setBrainIdea(0, "original cat idea");
	Cat	catCopy(catBasic);
	Cat	catAssigned;

	catAssigned = catBasic;
	catBasic.setBrainIdea(0, "changed cat idea");
	std::cout << "Cat basic idea: " << catBasic.getBrainIdea(0) << std::endl;
	std::cout << "Cat copy idea: " << catCopy.getBrainIdea(0) << std::endl;
	std::cout << "Cat assigned idea: " << catAssigned.getBrainIdea(0) << std::endl;

	return (0);
}
