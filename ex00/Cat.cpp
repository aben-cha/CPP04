/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:12:05 by aben-cha          #+#    #+#             */
/*   Updated: 2024/11/07 17:03:30 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat Default Constructor" << std::endl;
}

Cat::Cat(const std::string& _type) : Animal(_type){
    type = _type;
    std::cout << "Cat " << _type << " Constructor" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy) {
}

Cat& Cat::operator=(const Cat& rhs) {
    Animal::operator=(rhs);
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat Default Destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "The cat says: meow" << std::endl;
}
