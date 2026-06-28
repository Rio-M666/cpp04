#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // 猫の鳴き声を出力する！
    j->makeSound();
    meta->makeSound();


    return 0;
}