/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:19:23 by aben-cha          #+#    #+#             */
/*   Updated: 2024/11/07 16:50:41 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource() : index(0) {
    for (int i = 0; i < 4; i++)
        templates[i] = NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (templates[i]) {
            delete templates[i];   
            templates[i] = NULL;
        } 
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
    for (int i = 0; i < 4; i++) {
        if (templates[i])
            templates[i] = copy.templates[i]->clone();
        else 
            templates[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 4; i++) {
            if (templates[i]) {
                delete templates[i];
                templates[i] = NULL;
                templates[i] = rhs.templates[i]->clone();
            }
            else 
                templates[i] = NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m)
        return ;
    if (index < 4) {
        templates[index] = m;
        index++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < index; i++) {
        if (templates[i] && (templates[i]->getType() == type))
            return templates[i]->clone();
    }
    return 0;
}