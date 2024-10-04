/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:10:31 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/04 20:27:25 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        Cat(const std::string& _type);
        Cat(const Cat& copy);
        Cat& operator=(const Cat& rhs);
        ~Cat();
        void makeSound() const;
};

#endif