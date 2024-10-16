/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:49:23 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/16 20:06:28 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIALSOURCE_HPP
#define MATERIALSOURCE_HPP

#include "AMateria.hpp"
// class AMateria;

class IMateriaSource
{
    public:
        IMateriaSource();  
        IMateriaSource(const IMateriaSource& copy);  
        IMateriaSource& operator=(const IMateriaSource& rhs);  
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource{
    private:
        AMateria* materias[4];
        int index;
    public:
        MateriaSource();  
        MateriaSource(const MateriaSource& copy);  
        MateriaSource& operator=(const MateriaSource& rhs);  
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif