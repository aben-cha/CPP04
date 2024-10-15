/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:24:20 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/15 18:59:45 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void l() {
    system("leaks interface");
}

int main()
{
    atexit(l);
    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    // std::cout <<tmp->getType() << std::endl;
    me->equip(tmp);
    tmp = src->createMateria("cure");
    // std::cout <<tmp->getType() << std::endl;

    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    //-----------------
    // Ice ice;
    // Cure cure;
    // AMateria *m[2]= {
    //     m[0] = ice.clone(),
    //     m[1] = cure.clone()
    // };
    // std::cout << "Ice  :" << m[0]->getType() << std::endl;
    // m[0]->use(*bob);
    // std::cout << "Cure :" << m[1]->getType() << std::endl;
    // m[1]->use(*bob);

    // delete m[0];
    // delete m[1];
    // delete bob;
    return 0;
}