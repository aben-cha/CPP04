/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:14:00 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/07 16:20:19 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"


int main() {
    Cure c;
    Ice i;
    std::cout << std::endl;
    std::cout << "cure : " << c.getType() << std::endl;
    std::cout << "ice : " << i.getType() << std::endl;
    std::cout << std::endl;
    return 0;
}