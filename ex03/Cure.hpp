/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:01:01 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/15 17:33:15 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
    public:
        Cure();
        Cure(const Cure& rhs);
        Cure& operator=(const Cure& copy);
        ~Cure();
        AMateria* clone() const;
        // void use(ICharacter& target);
};

#endif 