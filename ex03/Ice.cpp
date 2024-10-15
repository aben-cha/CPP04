/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:52:31 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/15 17:33:31 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(const Ice& copy): AMateria(copy) {
}

Ice& Ice::operator=(const Ice& rhs) {
    if (this != &rhs)
        AMateria::operator=(rhs);
    return *this;
}

Ice::~Ice() { 
}

AMateria* Ice::clone() const {
    AMateria* materia = new Ice();
    return materia;
}

// void Ice::use(ICharacter& target) {
//     std::cout << "* shoots an ice bolt at " 
//               << target.getName() << " *" 
//               << std::endl;      
// } 