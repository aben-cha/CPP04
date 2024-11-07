/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:44:30 by aben-cha          #+#    #+#             */
/*   Updated: 2024/11/07 15:27:58 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
    public:
        Cure(std::string type);
        Cure();
        ~Cure();
        Cure(const Cure& copy);
        Cure& operator=(const Cure& rhs);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif