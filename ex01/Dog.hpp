#ifndef Dog_HPP
# define Dog_HPP
# include "Animal.hpp"
# include "Brain.hpp"
class Dog : public Animal
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
	void setBrainIdea(int index, const std::string &idea);
	std::string getBrainIdea(int index) const;
};
#endif
