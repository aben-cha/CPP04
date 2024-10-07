/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:20:46 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/07 16:26:57 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"

Character::Character() {
    std::cout << "Character Default Contructor" << std::endl;
}

Character::Character(const Character& copy)  {
    std::cout << "Character Copy Contructor" << std::endl;   
}

Character& Character::operator=(const Character& rhs) {
    std::cout << "Character Copy Assignement Contructor" << std::endl;   
    if (this == &rhs)
        return *this;
    return *this;
}

Character::~Character() {
    std::cout << "Character Default Desructor" << std::endl;   
}

std::string const & Character::getName() const {
    return name;
}
void Character::equip(AMateria* m) {
    // 
}
// void unequip(int idx);
// void use(int idx, ICharacter& target); 

