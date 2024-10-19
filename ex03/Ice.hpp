/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:38:43 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/19 12:36:02 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice(std::string type);
        Ice();
        Ice(const Ice& copy);
        Ice& operator=(const Ice& rhs);
        ~Ice();
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif
