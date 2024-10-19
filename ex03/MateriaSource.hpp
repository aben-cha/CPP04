/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:15:21 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/19 12:23:58 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public  IMateriaSource{
    private:
        AMateria* templates[4];
        int index;
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& copy);
        MateriaSource& operator = (const MateriaSource& rhs);
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

#endif 