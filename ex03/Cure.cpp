/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:48:03 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/07 15:10:04 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Cure Default Contructor" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy.type) {
    std::cout << "Cure Copy Contructor" << std::endl;   
}

Cure& Cure::operator=(const Cure& rhs) {
    std::cout << "Cure Copy Assignement Contructor" << std::endl;   
    if (this == &rhs)
        return *this;
    type = rhs.type;
    return *this;
}

Cure::~Cure() {
    std::cout << "Cure Default Desructor" << std::endl;   
}

AMateria* Cure::clone() const {
    AMateria* cureMateria = new Cure();
    return cureMateria;
}