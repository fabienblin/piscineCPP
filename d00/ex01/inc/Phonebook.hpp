/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Phonebook.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 15:42:28 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 17:26:21 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "main_header.hpp"

class Phonebook
{
private:
    Contact contacts[CONTACT_LIMIT];
    int nbContact;
public:
    void add(Contact contact);
    void search();
};

#endif