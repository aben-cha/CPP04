/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:03:01 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/15 17:33:06 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(const Cure& copy): AMateria(copy) {
}

Cure& Cure::operator=(const Cure& rhs) {
    if (this != &rhs)
        AMateria::operator=(rhs);
    return *this;
}

Cure::~Cure() { 
}


AMateria* Cure::clone() const {
    AMateria* materia = new Cure();
    return materia;
}

// void Cure::use(ICharacter& target) {
//     std::cout << "* heals "
//               << target.getName() 
//               << "’s wounds *" 
//               << std::endl;       
// }       

