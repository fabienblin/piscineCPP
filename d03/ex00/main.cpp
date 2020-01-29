#include "FragTrap.hpp"

int main ()
{
    srand(time(0));
    FragTrap * rd2d2 = new FragTrap(20, 20, 100, 10, 10, "R2D2", 10, 10, 10);
    FragTrap * c3po = new FragTrap("C3PO");

    rd2d2->show();
    c3po->show();

    c3po->takeDamage(rd2d2->vaulthunter_dot_exe("C3PO"));
    rd2d2->takeDamage(c3po->vaulthunter_dot_exe("R2D2"));
    c3po->takeDamage(rd2d2->vaulthunter_dot_exe("C3PO"));

    rd2d2->show();
    c3po->show();

    delete(rd2d2);
    delete(c3po);
    return 0;
}