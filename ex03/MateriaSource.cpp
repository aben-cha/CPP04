/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:52:52 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/16 20:09:47 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

IMateriaSource::IMateriaSource(){
} 

IMateriaSource::IMateriaSource(const IMateriaSource& copy) {
    (void)copy;
} 

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& rhs) {
    (void)rhs;
    return *this;
}

MateriaSource::MateriaSource() : index(0) {
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
} 

MateriaSource::MateriaSource(const MateriaSource& copy) {
    for (int i = 0; i < 4; i++) {
        if (materias[i])
            materias[i] = copy.materias[i]->clone();
        else
            materias[i] = NULL;
    }
} 

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 4; i++) {
            delete materias[i];
            materias[i] = NULL;
            if (materias[i]) {
                materias[i] = rhs.materias[i]->clone();
            }
            else
                materias[i] = NULL;
        }
    }
    return *this;
} 

MateriaSource::~MateriaSource() {
    for (int i = 0; i < index; ++i) {
        if (materias[i]) {
            delete materias[i];
            materias[i] = NULL;
        }
    }
    index = 0;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (m && index < 4) {
        materias[index] = m->clone();
        ++index;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < index; i++) {
        if (materias[i] && (materias[i]->getType() == type))
            return materias[i];
    }
    return 0;
}
