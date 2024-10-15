/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:50:22 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/15 17:33:37 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice& rhs);
        Ice& operator=(const Ice& copy);
        ~Ice();
        AMateria* clone() const;
        // void use(ICharacter& target);
};

#endif