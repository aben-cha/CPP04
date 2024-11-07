/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:51:46 by aben-cha          #+#    #+#             */
/*   Updated: 2024/11/07 15:59:50 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(const std::string& _type) : type(_type) {
    if (_type.empty())
        return ;
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

std::string Animal::getType() const {
     return type;       
}

