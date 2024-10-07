/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:50:03 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/07 14:23:22 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


// delete it 
void s() {
    system("leaks brain");
}

int main()
{
    // atexit(s);
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    
    const int size = 5;
    Animal* animals[size];
    creatAnimals(animals, 5);

    Dog dog;
    testCopies(dog);
    return 0;
}