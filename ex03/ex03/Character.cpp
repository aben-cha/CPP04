/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:26:09 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/14 18:52:38 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    std::cout << "Character Default Constructor." << std::endl;
}

Character::Character(const std::string& name) : name(name){
    std::cout << "Character Default Constructor." << std::endl;
}

Character::Character(const Character& copy) {
    std::cout << "Character Copy Constructor." << std::endl;
}

Character& Character::operator=(const Character& rhs) {
    std::cout << "Character Copy Assignement Constructor." << std::endl;
    if (this != &rhs)
        name = rhs.name;
    return *this;
}

Character::~Character() { 
    std::cout << "Character Default Destructor." << std::endl;
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria* m) {
    
}

void Character::unequip(int idx) {
    
}

void Character::use(int idx, ICharacter& target) {
    
} 
