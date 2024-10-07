/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:10:48 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/07 16:29:41 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
    std::cout << "Ice Default Contructor" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy.type) {
    std::cout << "Ice Copy Contructor" << std::endl;   
}

Ice& Ice::operator=(const Ice& rhs) {
    std::cout << "Ice Copy Assignement Contructor" << std::endl;   
    if (this == &rhs)
        return *this;
    type = rhs.type;
    return *this;
}

Ice::~Ice() {
    std::cout << "Ice Default Desructor" << std::endl;   
}

// AMateria* Ice::clone() const {
//     AMateria* iceMateria = new Ice();
//     return iceMateria;
// }

// void Ice::use(ICharacter& target) {
//     // target
//     std::cout << "* shoots an ice bolt at " << name << " *" << std::endl;
// }