/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:49:38 by aben-cha          #+#    #+#             */
/*   Updated: 2024/11/07 21:17:14 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : name(name) {
    for (int i = 0; i < 4; i++) {
        slot[i] = NULL;
        saveaddress[i] = NULL;
    }
}

Character::Character() : name("default") {
    for (int i = 0; i < 4; i++) {
        slot[i] = NULL;
        saveaddress[i] = NULL;
    }
}

Character::Character(const Character& copy) : name(copy.name) {
    for (int i = 0; i < 4; i++) {
        if (slot[i]) {
            slot[i] = copy.slot[i]->clone();
            saveaddress[i] = slot[i];
        }
        else
            slot[i] = NULL;
    }
}

Character& Character::operator=(const Character& rhs) {
    if (this != &rhs) {
        name = rhs.name;
        for (int i = 0; i < 4; i++) {
            if (slot[i]) {
                delete slot[i];
                slot[i] = NULL;
                slot[i] = rhs.slot[i]->clone();
                saveaddress[i] = slot[i];
            }
            else
                slot[i] = NULL;
        }
    }
    return *this;
}

Character::~Character() {
    int flag = 0;
    for (int i = 0; i < 4; i++) {
        if (slot[i]) {
            flag = 1;
            delete slot[i];
            slot[i] = NULL;
        }
        if (!flag && saveaddress[i]) {
            delete saveaddress[i];
            saveaddress[i] = NULL;
        }
    }
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria* m) {
    if (!m)
        return ;
    for (int i = 0; i < 4; i++) {
        if (!slot[i]) {
            slot[i] = m;
            saveaddress[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx) {
    if ((idx >= 0 && idx < 4) && slot[idx])
        slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if ((idx >= 0 && idx < 4) && slot[idx]) {
        slot[idx]->use(target);
    }
}