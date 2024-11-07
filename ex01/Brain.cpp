/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:57:46 by aben-cha          #+#    #+#             */
/*   Updated: 2024/11/07 15:52:41 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default Constructor" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = "idea";
}

Brain::Brain(const Brain& copy){
    for (int i = 0;i < 100; i++){
        ideas[i] = copy.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& rhs) {
    if (this != &rhs){
        for (int i = 0;i < 100; i++){
            ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain Default Destructor" << std::endl;
}

void Brain::setIdea(int index, std::string str) {
    if (index >=0 && index < 100)
        ideas[index] = str;
    else
        std::cout << "Invalid Index" << std::endl;
}

std::string Brain::getIdea(int index) {
    if (index >=0 && index < 100)
        return ideas[index];
    else
        return "Invalid Index";
}