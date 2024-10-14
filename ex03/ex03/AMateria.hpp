/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:25:24 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/14 20:59:53 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
    protected:
        std::string type;
        ICharacter* icharacter;
    public:
        AMateria(std::string const & type);
        // Orthodox Canonical Form
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