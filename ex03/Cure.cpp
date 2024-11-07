/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:46:33 by aben-cha          #+#    #+#             */
/*   Updated: 2024/11/07 15:24:48 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(std::string type) : AMateria(type){
}

Cure::Cure() : AMateria("cure") {
}

Cure::~Cure(){
}

Cure::Cure(const Cure& copy) : AMateria(copy){
}

Cure& Cure::operator=(const Cure& rhs) {
    if (this != &rhs)
        AMateria::operator=(rhs);
    return *this;
}

AMateria* Cure::clone() const{
    AMateria* cure = new Cure();
    return cure;
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals "
              << target.getName()
              << "'s wounds *"
              << std::endl;
}