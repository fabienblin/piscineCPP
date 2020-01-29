/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 15:19:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 13:08:34 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main_header.hpp"

void Contact::show(){
    std::string colA, colB, colC;
    colA = firstName;
    colB = lastName;
    colC = nickname;

    if (firstName.length() >= 10)
    {
        colA.resize(9);
        colA.resize(10, '.');
    }
    if (lastName.length() >= 10)
    {
        colB.resize(9);
        colB.resize(10, '.');
    }
    if (nickname.length() >= 10)
    {
        colC.resize(9);
        colC.resize(10, '.');
    }
    std::cout << std::setw(10) << colA << "|";
    std::cout << std::setw(10) << colB << "|";
    std::cout << std::setw(10) << colC; 
    std::cout << std::endl;
}

void Contact::input(){
    std::cout << "Adding new contact." << std::endl;

    std::cout << "Type in first name :" << std::endl;
    std::cin >> this->firstName;

    std::cout << "Type in last name :" << std::endl;
    std::cin >> this->lastName;

    std::cout << "Type in nickname :" << std::endl;
    std::cin >> this->nickname;

    std::cout << "Type in login :" << std::endl;
    std::cin >> this->login;

    std::cout << "Type in postal address :" << std::endl;
    std::cin >> this->postalAddress;

    std::cout << "Type in email :" << std::endl;
    std::cin >> this->email;

    std::cout << "Type in phone number :" << std::endl;
    std::cin >> this->phone;

    std::cout << "Type in birth date :" << std::endl;
    std::cin >> this->birthDate;

    std::cout << "Type in favorite meal :" << std::endl;
    std::cin >> this->favorMeal;

    std::cout << "Type in the darkest secret :" << std::endl;
    std::cin >> this->darkestSecret;
}

void Contact::showAll(){
    std::cout << "First name :" << this->firstName << std::endl;

    std::cout << "Last name :" << this->lastName << std::endl;

    std::cout << "Nickname :" << this->nickname << std::endl;

    std::cout << "Login :" << this->login << std::endl;

    std::cout << "Postal address :" << this->postalAddress << std::endl;

    std::cout << "Email :" << this->email << std::endl;

    std::cout << "Phone number :" << this->phone << std::endl;

    std::cout << "Birth date :" << this->birthDate << std::endl;

    std::cout << "Favorite meal :" << this->favorMeal << std::endl;

    std::cout << "Darkest secret :" << this->darkestSecret << std::endl;
}