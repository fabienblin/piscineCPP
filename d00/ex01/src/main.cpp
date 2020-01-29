/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:01:12 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 13:16:37 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main_header.hpp"

int main (){
  std::string cmd;
  Phonebook book;
  
  while (true) {
    // get command
    std::cout << "\n$> ";
    std::cin >> cmd;
    std::transform(cmd.begin(), cmd.end(),cmd.begin(), ::toupper);
    
    // run command
    if (cmd == ADD)
    {
      Contact c;
      c.input();
      book.add(c);
      std::cout << "Contact has been added." << std::endl;
    }
    else if (cmd == SEARCH)
    {
      book.search();
    }
    else if (cmd == EXIT)
    {
      std::cout << "EX00 termine !" << std::endl;
      exit(1);
    }
    else
    {
      std::cout << "Unknown command !\nPlease use ADD, SEARCH or EXIT" << std::endl;
    }
  }
  return 0;
}