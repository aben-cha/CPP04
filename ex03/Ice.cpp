/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:41:54 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/19 12:36:30 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string type) : AMateria(type){
}

Ice::Ice(){
    type = "ice";
}


Ice::~Ice(){
}

Ice::Ice(const Ice& copy) : AMateria(copy){
}

Ice& Ice::operator=(const Ice& rhs) {
    if (this != &rhs)
        AMateria::operator=(rhs);
    return *this;
}

AMateria* Ice::clone() const{
    AMateria* ice = new Ice();
    return ice;
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at "
              << target.getName()
              << " *"
              << std::endl;
}