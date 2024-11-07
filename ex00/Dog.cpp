/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:07:26 by aben-cha          #+#    #+#             */
/*   Updated: 2024/11/07 17:03:34 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(const std::string& _type) : Animal(_type){
    type = _type;
    std::cout << "Dog " << _type << " Constructor" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy) {
}

Dog& Dog::operator=(const Dog& rhs) {
    Animal::operator=(rhs);
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog Default Destructor" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "The dog says: bow wow" << std::endl;
}