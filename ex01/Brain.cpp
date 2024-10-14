/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:57:46 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/13 18:50:42 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default Constructor" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = "idea";
        //  + std::to_string(i + 1); // not allowed
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