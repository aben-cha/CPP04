/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:57:46 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/06 11:26:37 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain(const std::string* _ideas){
    std::cout << "Brain Parametric Constructor" << std::endl;
    for (int i = 0;i < 100; i++){
        ideas[i] = _ideas[i];
    }
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