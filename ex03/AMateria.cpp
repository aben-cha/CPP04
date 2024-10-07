/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:45:21 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/07 16:19:45 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {
    std::cout << "AMateria Parametric Contructor" << std::endl;
}

AMateria::AMateria() {
    std::cout << "AMateria Default Contructor" << std::endl;   
}

AMateria::AMateria(const AMateria& copy) : type(copy.type) {
    std::cout << "AMateria Copy Contructor" << std::endl;   
}

AMateria& AMateria::operator=(const AMateria& rhs) {
    std::cout << "AMateria Copy Assignement Contructor" << std::endl; 
    if (this == &rhs)
        return *this;
    type = rhs.type;
    return *this;  
}

AMateria::~AMateria() {
    std::cout << "AMateria Default Desructor" << std::endl;   
}

std::string const & AMateria::getType() const {
    return type;
}
