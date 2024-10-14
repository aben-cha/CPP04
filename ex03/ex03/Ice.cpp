/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:52:31 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/14 18:40:13 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Ice Default Constructor." << std::endl;
}

Ice::Ice(const Ice& copy): AMateria(copy) {
    std::cout << "Ice Copy Constructor." << std::endl;
}

Ice& Ice::operator=(const Ice& rhs) {
    std::cout << "Ice Copy Assignement Constructor." << std::endl;
    if (this != &rhs)
        AMateria::operator=(rhs);
    return *this;
}

Ice::~Ice() { 
    std::cout << "Ice Default Destructor." << std::endl;
}

AMateria* Ice::clone() const {
    AMateria* materia = new Ice();
    return materia;
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " 
              << target.getName() << " *" 
              << std::endl;      
} 