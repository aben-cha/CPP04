/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:05:17 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/07 10:51:04 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Animal {
    private:
        std::string type;
    public:
        Animal(std::string _type) : type(_type) {}
        const std::string& getName() {return type;}
        virtual void makeSound() const = 0;
        virtual ~Animal() = 0;
};

Animal::~Animal(){
            std::cout << "Animal destructor" << std::endl;
         }

class Cat : public Animal{
    public:
        Cat(std::string name) : Animal(name){}
        void makeSound() const {
            std::cout <<"the cat says meyow" << std::endl;
        }
        ~Cat() { std::cout <<"cat Destructor" << std::endl;}
};

int main() {
    Cat c("test");
    std::cout << c.getName() << std::endl;
    c.makeSound();
    return (0);
}