/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 13:01:12 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 12:41:32 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.hpp"

int main (int argc, char *argv[]){
  if (argc == 4)
  {
    std::string line;
    std::string newLine;
    std::ifstream myfile(argv[1]);
    std::string target = argv[2];
    std::string fileName = argv[1];
    std::ofstream fileout(fileName + ".replace");
    char * split;
    if (myfile && fileout)
    {
      while (getline(myfile, line))
      {
        while ((split = std::strtok((char *)line.data(), " ")) != 0)
        {
          std::cout << "split = " + std::string(split) << std::endl;
          if (std::string(split) == target)
            std::string(split).replace(0, std::string(split).length(), argv[3]);
        }
        newLine = newLine + " " + split;
        // size_t f;
        // while((f = line.find(target)) != std::string::npos)
        // {
        //   line.replace(f, f + target.length(), argv[3]);
        // }
        fileout << newLine << std::endl;
      }
      myfile.close();
      fileout.close();
    }
    else
    {
      std::cout << "Error opening file." << std::endl;
    }
  }
  else
  {
    std::cout << "Usage : ./replace (filename) (target) (replacement)" << std::endl;
  }
  return 0;
}