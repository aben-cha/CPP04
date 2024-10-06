/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:52:54 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/06 15:21:43 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const std::string* _idead);
        Brain(const Brain& copy);
        Brain& operator=(const Brain& rhs);
        ~Brain();
        // delete it 
        void setIdea(int index, std::string str) {
            if (index >=0 && index < 100)
                ideas[index] = str;
            else
                std::cout << "Invalid Index" << std::endl;
        }
        std::string getIdea(int index) {
            if (index >=0 && index < 100)
                return ideas[index];
            else
                return "Invalid Index";
        }
};


#endif