/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Phonebook.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 15:19:44 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 13:14:10 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main_header.hpp"

void Phonebook::add(Contact contact){
    if (nbContact < CONTACT_LIMIT){
        this->contacts[this->nbContact] = contact;
        this->nbContact++;
    }
    else
    {
        std::cout << "Can't add more than " << CONTACT_LIMIT << " contacts." << std::endl;
    }
    
}

void Phonebook::search(){
    // show contact table
    std::cout << std::setw(10) << "index";
    std::cout << "|";
    std::cout << std::setw(10) << "first name";
    std::cout << "|";
    std::cout << std::setw(10) << "last name";
    std::cout << "|";
    std::cout << std::setw(10) << "nickname";
    std::cout << std::endl;
    for (int i = 0; i < CONTACT_LIMIT; i++)
    {
        std::cout << std::setw(10) << i;
        std::cout << "|";
        contacts[i].show();
    }
    
    // show choosed contact
    std::cout << "Please choose a contact to show." << std::endl;
    int choice;
    Contact c;
    std::cin >> choice;
    if (choice >= 0 && choice < this->nbContact){
        c = this->contacts[choice];
        c.showAll();
    }
    else
    {
        std::cout << "Wrong choice. search again." << std::endl;
    }

}