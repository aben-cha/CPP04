/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:06:17 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/06 17:38:41 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const std::string& _type);
        Dog(Brain* _brain);
        Dog(const Dog& copy);
        Dog& operator=(const Dog& rhs);
        ~Dog();
        void makeSound() const ;
        std::string getBrainIdea(int index);
        void setBrainIdea(int index, std::string str);
        
};

void creatAnimals(Animal* animals[], int n);
void testCopies(const Dog& dog);

#endif