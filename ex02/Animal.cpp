/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:51:46 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/14 16:34:21 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(const std::string& _type) : type(_type){
    std::cout << "Animal " << _type << " Constructor" << std::endl;
}

Animal::Animal(const Animal& copy) : type(copy.type) {
}

Animal& Animal::operator=(const Animal& rhs) {
    if (this != &rhs)
        type = rhs.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal Default Destructor" << std::endl;
}

// void Animal::makeSound() const {
//     std::cout << "The animal makes a sound" << std::endl;
// }

std::string Animal::getType() const {
     return type;       
}

