/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:26:09 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/15 18:53:29 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// int Character::indexSlot = 0;

Character::Character(){
}

Character::Character(const std::string& name) : name(name){
}

Character::Character(const Character& copy) : name(copy.name) {
    for (int i = 0; i < 4; i++)
        slot[i] = copy.slot[i];
}

Character& Character::operator=(const Character& rhs) {
    if (this != &rhs)
    {
        name = rhs.name;
        for (int i = 0; i< 4; i++) {
            delete slot[i];
            slot[i] = rhs.slot[i];
        }
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        // if (slot[i])
            delete slot[i];
    }
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++){
        if (!slot[i]) {
            this->slot[i] = m; 
            // std::cout << i << " the first empty slot" << std::endl;
            return ;
        }
    }
    std::cout << "Full inventory" << std::endl;    
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        if (slot[idx]) {
            std::cout << "delete idx : " << idx<<std::endl;
            delete slot[idx];
            slot[idx] = NULL;
        }
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4) {
        // std::cout << idx <<" test use character" << std::endl;
        if (slot[idx])
            slot[idx]->use(target);
    }
} 
