#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main ()
{
    srand(time(0));
    ScavTrap * rd2d2 = new ScavTrap(20, 20, 100, 10, 10, "R2D2", 10, 10, 10);
    FragTrap * c3po = new FragTrap("C3PO");
    NinjaTrap * nin = new NinjaTrap("Gaara");

    rd2d2->show();
    c3po->show();
    nin->show();

    rd2d2->challengeNewcomer("C3PO");
    rd2d2->takeDamage(c3po->vaulthunter_dot_exe("R2D2"));
    nin->ninjaShoebox(*rd2d2);
    nin->ninjaShoebox(*c3po);
    nin->ninjaShoebox(*nin);
    nin->ninjaShoebox(*new ClapTrap("Bruce Lee"));

    rd2d2->show();
    c3po->show();

    delete(rd2d2);
    delete(c3po);
    return 0;
}