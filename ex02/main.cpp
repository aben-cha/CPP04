/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:50:03 by aben-cha          #+#    #+#             */
/*   Updated: 2024/11/07 17:06:49 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* a[2] = {
        a[0] = new Dog(),
        a[1] = new Cat()
    };
    std::cout << "\n\n";
    for(int i = 0; i < 2; i++)
        delete a[i];
        
    int nbrAnimals = 5;
    if (nbrAnimals <= 0)
        return 1;
    Animal* animals[nbrAnimals];
    creatAnimals(animals, nbrAnimals);

    Dog dog;
    testCopies(dog);
    return 0;
}