/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:12:05 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/14 16:22:06 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): brain(new Brain()){
    std::cout << "Cat Default Constructor" << std::endl;
    type = "Cat";
}

Cat::Cat(const std::string& _type) : Animal(_type), brain(new Brain()){
    std::cout << "Cat " << _type << " Constructor" << std::endl;
    type = _type;
}

Cat::Cat(const Cat& copy): Animal(copy), brain(new Brain(*copy.brain)){
    std::cout << "Cat Copy Constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
    std::cout << "Cat Copy Assignement Constructor" << std::endl;
    if (this == &rhs)
        return *this;
    delete brain;
    brain = new Brain(*rhs.brain);
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