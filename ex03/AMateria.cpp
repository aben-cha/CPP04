/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:35:57 by aben-cha          #+#    #+#             */
/*   Updated: 2024/11/07 15:23:27 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) :type(type){
    
}

AMateria::AMateria() {
}

AMateria::AMateria(const AMateria& copy) : type(copy.type) {
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

void AMateria::use(ICharacter& target) {
    (void)target;
}
