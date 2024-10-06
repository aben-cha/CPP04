/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:50:03 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/06 20:28:09 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


// delete it 
void s() {
    system("leaks abstract");
}

int main()
{
    
    // atexit(s);
    const Animal* a[2] = {
        new Dog(),
        new Cat()
    };
    std::cout << "\n\n";
    delete a[0];
    delete a[1];
    
    Animal* animals[5];
    creatAnimals(animals, 5);

    Dog dog;
    testCopies(dog);
    return 0;
}