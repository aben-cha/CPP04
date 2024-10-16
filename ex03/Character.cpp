/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:26:09 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/16 18:36:25 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character() {
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const std::string& name) : name(name){
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const Character& copy) : name(copy.name) {
    for (int i = 0; i < 4; i++){
        if (inventory[i])
            inventory[i] = copy.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character& rhs) {
    if (this != &rhs)
    {
        name = rhs.name;
        for (int i = 0; i < 4; i++) {
            delete inventory[i];
            inventory[i] = NULL;
            if (inventory[i])
                inventory[i] = rhs.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (inventory[i]) {
            delete inventory[i];
            inventory[i] = NULL;
        }
    }
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria* m) {
    if (!m)
        return ;
    for (int i = 0; i < 4; i++){
        if (!inventory[i]) {
            this->inventory[i] = m; 
            return ;
        }
    } 
}

void Character::unequip(int idx) {
    if ((idx >= 0 && idx < 4) && inventory[idx])
            inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && inventory[idx])
            inventory[idx]->use(target);
} 
