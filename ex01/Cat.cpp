/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:12:05 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/06 17:44:02 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat Default Constructor" << std::endl;
    type = "Cat";
    brain = new Brain();
    for(int i = 0; i < 100; i++)
        brain->setIdea(i, "idea" + std::to_string(i + 1));
}

Cat::Cat(const std::string& _type) : Animal(_type){
    std::cout << "Cat " << _type << " Constructor" << std::endl;
    type = _type;
    brain = new Brain();
    for(int i = 0; i < 100; i++)
        brain->setIdea(i, "idea" + std::to_string(i + 1));
}

Cat::Cat(Brain* _brain) {
    type = "Cat";
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdea(i, _brain->getIdea(i));
}

Cat::Cat(const Cat& copy) {
    std::cout << "Cat Copy Constructor" << std::endl;
    (void)copy;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdea(i, copy.brain->getIdea(i));
}

Cat& Cat::operator=(const Cat& rhs) {
    std::cout << "Cat Copy Assignement Constructor" << std::endl;
    if (this == &rhs)
        return *this;
    delete brain;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdea(i, rhs.brain->getIdea(i));
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat Default Destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "The cat says: meow" << std::endl;
}

std::string Cat::getBrainIdea(int index) {
    return brain->getIdea(index);
}

void Cat::setBrainIdea(int index, std::string str) {
    brain->setIdea(index, str);
}