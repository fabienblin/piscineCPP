
#include "main.hpp"

int main(void)
{
    srand(time(nullptr));
    initscr();
    int c = 0;
    Player *player = new Player(0, 6);

    keypad(stdscr, TRUE);
    mvprintw(player->getY(), player->getX(), "%c", player->getCursor());

    curs_set(0);
    noecho();

    nodelay(stdscr, true);

    Game *game = new Game(player);
    // Wave *wave = new Wave(50);
    // game->setWave(*wave);

    while (true)
    {
        
        clear();
        if (c == 32)
        {
            game->setBullets(player->shoot());
        }

        game->move(*player, c);
        game->move();
        // game->move(*wave);

        usleep(100000);
        c = getch();
    }
    endwin();

    delete player;

    return 0;
}