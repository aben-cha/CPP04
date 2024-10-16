/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:25:24 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/16 15:07:28 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "Character.hpp"

class ICharacter; // Forward declaration
// By using a forward declaration, we're telling the compiler, "Trust me,
// ICharacter is a class that exists. You'll see its full definition 
// later when you need it."

class AMateria {
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        AMateria();
        AMateria(const AMateria& rhs);
        AMateria& operator=(const AMateria& copy);
        virtual ~AMateria();
        //-------------------------
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif