/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:07:26 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/06 20:20:09 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

Dog::Dog() {
    std::cout << "Dog Default Constructor" << std::endl;
    type = "Dog";
    brain = new Brain();
    for(int i = 0; i < 100; i++)
        brain->setIdea(i, "idea" + std::to_string(i + 1));
}

Dog::Dog(const std::string& _type) : Animal(_type){
    std::cout << "Dog " << _type << " Constructor" << std::endl;
    type = _type;
    brain = new Brain();
    for(int i = 0; i < 100; i++)
        brain->setIdea(i, "idea" + std::to_string(i + 1));
}

Dog::Dog(Brain* _brain) {
    type = "Dog";
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdea(i, _brain->getIdea(i));
}

Dog::Dog(const Dog& copy)  {
    std::cout << "Dog Copy Constructor" << std::endl;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdea(i, copy.brain->getIdea(i));
}

Dog& Dog::operator=(const Dog& rhs) {
    std::cout << "Dog Copy Assignement Constructor" << std::endl;
    if (this == &rhs)
        return *this;
    delete brain;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdea(i, rhs.brain->getIdea(i));
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog Default Destructor" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "The dog says: bow wow" << std::endl;
}

std::string Dog::getType() const {
    return type;
}

std::string Dog::getBrainIdea(int index) {
    return brain->getIdea(index);
}

void Dog::setBrainIdea(int index, std::string str) {
    brain->setIdea(index, str);
}

void creatAnimals(Animal* animals[], int n) {
    std::cout << std::endl
              << "          Creating Animals : " << std::endl;
    for (int i = 0; i < n / 2; i++)
        animals[i] = new Dog();
    for (int i = n / 2; i < n; i++)
        animals[i] = new Cat();
    std::cout << std::endl
              << "          type of each Animal :\n";
    for (int i = 0; i < n; i++)
        std::cout << "animal" << i + 1 << " " << animals[i]->getType()<< std::endl;
    std::cout << std::endl
              << "          Deleting each Animal : " << std::endl;
    for (int i = n - 1; i >= 0; i--){
        std::cout << "animal" << i + 1 << " :" << std::endl;
        delete animals[i];
    }
}

void testCopies(const Dog& dog) {
    std::cout << std::endl
              << "          Test of Copy Constructor:" << std::endl;
    
    Dog tmp = dog;
    for (int i = 0;i < 10; i++)
        std::cout << tmp.getBrainIdea(i) << std::endl;

    std::cout << std::endl
              << "          Test of Assignement Copy Constructor:" << std::endl;
    Dog dog2;

    dog2 = dog;
    for (int i = 0;i < 10; i++)
        std::cout << dog2.getBrainIdea(i) << std::endl;
}