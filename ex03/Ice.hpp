/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:06:51 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/07 15:54:19 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
    public:
    //    Ice(std::string const & type); 
       Ice(); 
       Ice(const Ice& copy); 
       Ice& operator=(const Ice& rhs); 
       ~Ice();
       AMateria* clone() const;
};

#endif