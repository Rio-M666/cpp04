
#ifndef AAnimal_HPP
# define AAnimal_HPP
# include <iostream>
# include <string>
class AAnimal
{
  protected:
	std::string _type;

  public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	virtual ~AAnimal();

	virtual void makeSound() const;
	std::string getType() const;
};
#endif
