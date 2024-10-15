/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:52:52 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/15 18:54:37 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

IMateriaSource::IMateriaSource(){
} 

// IMateriaSource::IMateriaSource(const IMateriaSource& copy) {
    
// } 

// IMateriaSource& IMateriaSource::operator=(const IMateriaSource& rhs) {
    
// }

MateriaSource::MateriaSource(){
} 

MateriaSource::MateriaSource(const MateriaSource& copy){
    for (int i = 0; i < 4; i++)
        materias[i] = copy.materias[i];
} 

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
    if (this != &rhs)
    {
        for (int i = 0; i< 4; i++) {
            delete materias[i];
            materias[i] = rhs.materias[i];
        }
    }
    return *this;
} 
MateriaSource::~MateriaSource() {
    
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!materias[i]) {
            materias[i] = m;
            // std::cout << i << std::endl;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++) {
        if (materias[i] && (materias[i]->getType() == type))
            return materias[i];
    }
    return 0;
}