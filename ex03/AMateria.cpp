/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:29:59 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/15 17:33:02 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const & type): type(type) {
}

AMateria::AMateria() {
}

AMateria::AMateria(const AMateria& copy): type(copy.type) {
}

AMateria& AMateria::operator=(const AMateria& rhs) {
    if (this != &rhs)
        type = rhs.type;
    return *this;
}

AMateria::~AMateria() { 
}

std::string const & AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter &target)
{
    if (type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;  
    else if (type == "cure")
        std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl; 
}
