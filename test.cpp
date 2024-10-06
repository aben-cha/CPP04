/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:13:53 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/06 18:23:45 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//base-class -- abstract
// contain at least one >= pure virtual function
// only exist to be derived from
class Foo{
    public:
    // anything that is a Foo must override fumction print
        virtual void print() const = 0;
};

class Bar : public Foo {
    public:
       virtual void print() const {
            std::cout << "I'm a Bar Class!" << std :: endl;
       } 
};
class Spam : public Foo {
    public:
       virtual void print() const {
            std::cout << "I'm a Spam Class!" << std :: endl;
       } 
};

int main() {
    Bar bar;
    Spam s;
    bar.print();
    s.print();
    return 0;
}