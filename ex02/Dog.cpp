/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:07:26 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/07 14:21:03 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

Dog::Dog() : brain(new Brain()) {
    std::cout << "Dog Default Constructor" << std::endl;
    type = "Dog";
}

Dog::Dog(const std::string& _type) : Animal(_type), brain(new Brain()) {
    std::cout << "Dog " << _type << " Constructor" << std::endl;
    type = _type;
}

Dog::Dog(const Dog& copy) : Animal(copy), brain(new Brain(*copy.brain)) {
    std::cout << "Dog Copy Constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
    std::cout << "Dog Copy Assignement Constructor" << std::endl;
    if (this == &rhs)
        return *this;
    Animal::operator=(rhs);
    delete brain;
    brain = new Brain(*rhs.brain);
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog Default Destructor" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "The dog says: bow wow" << std::endl;
}

std::string Dog::getBrainIdea(int index) {
    return brain->getIdea(index);
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
    for (int i = 0; i < n; i++){
        std::cout << "animal" << i + 1 << " :" << std::endl;
        delete animals[i];
    }
    std::cout << std::endl;
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