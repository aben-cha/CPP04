/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:03:01 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/14 18:40:58 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Cure Default Constructor." << std::endl;
}

Cure::Cure(const Cure& copy): AMateria(copy) {
    std::cout << "Cure Copy Constructor." << std::endl;
}

Cure& Cure::operator=(const Cure& rhs) {
    std::cout << "Cure Copy Assignement Constructor." << std::endl;
    if (this != &rhs)
        AMateria::operator=(rhs);
    return *this;
}

Cure::~Cure() { 
    std::cout << "Cure Default Destructor." << std::endl;
}


AMateria* Cure::clone() const {
    AMateria* materia = new Cure();
    return materia;
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals "
              << target.getName() 
              << "’s wounds *" 
              << std::endl;       
}       

