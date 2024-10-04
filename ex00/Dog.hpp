/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:06:17 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/04 20:27:51 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(const std::string& _type);
        Dog(const Dog& copy);
        Dog& operator=(const Dog& rhs);
        ~Dog();
        void makeSound() const ;
};

#endif