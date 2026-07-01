#ifndef Dog_HPP
# define Dog_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"
class Dog : public AAnimal
{
  private:
	Brain *_brain;

  public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();

	void makeSound() const;
};
#endif