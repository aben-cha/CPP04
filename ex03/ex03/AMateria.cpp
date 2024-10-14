/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:29:59 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/14 17:58:45 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const & type): type(type) {
    std::cout << "AMateria Default Constructor." << std::endl;
}

AMateria::AMateria() {
    std::cout << "AMateria Default Constructor." << std::endl;
}

AMateria::AMateria(const AMateria& copy): type(copy.type) {
    std::cout << "AMateria Copy Constructor." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& rhs) {
    std::cout << "AMateria Copy Assignement Constructor." << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return *this;
}

AMateria::~AMateria() { 
    std::cout << "AMateria Default Destructor." << std::endl;
}

std::string const & AMateria::getType() const {
    return type;
}