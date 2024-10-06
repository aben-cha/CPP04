/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:02:18 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/06 15:02:47 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat Default Constructor" << std::endl;
}

WrongCat::WrongCat(const std::string& _type) : WrongAnimal(_type){
    type = _type;
    std::cout << "WrongCat " << _type << " Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy) {
}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
    WrongAnimal::operator=(rhs);
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Default Destructor" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "The Cat says: meow" << std::endl;
}