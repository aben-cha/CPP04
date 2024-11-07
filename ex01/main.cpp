/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:50:03 by aben-cha          #+#    #+#             */
/*   Updated: 2024/11/07 15:56:47 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    
    int nbrAnimals = 5;
    if (nbrAnimals <= 0)
        return 1;
    Animal* animals[nbrAnimals];
    creatAnimals(animals, nbrAnimals);

    Dog dog;
    testCopies(dog);
    return 0;
}