/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 15:41:09 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 13:08:50 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "main_header.hpp"

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string login;
    std::string postalAddress;
    std::string email;
    std::string phone;
    std::string birthDate;
    std::string favorMeal;
    std::string uwColor;
    std::string darkestSecret;
    
public:
    void show();
    void input();
    void showAll();
};

#endif