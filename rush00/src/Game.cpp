
#include "Game.hpp"

Game::Game(Player *player) : _player(player)
{
    _indice = 0;
    _compteurBullet = 0;
    return;
}

Game::Game()
{
}

Game::Game(Game const &src)
{
    *this = src;
}

Game::~Game()
{
}

Game &Game::operator=(Game const &src)
{
    _player = src._player;
    _indice = src._indice;

    return *this;
}

void Game::setEnemy(Enemy *enemy)
{
    _enemy[_indice] = *enemy;

    _indice++;

    (void)_player;
}

Bullet *Game::getBullets(int i)
{
    return bullets[i];
}

void Game::setBullets(Bullet *b)
{
    this->bullets[_compteurBullet] = b;
    _compteurBullet += 1;
}

int Game::getCompteurBullet() const
{
    return _compteurBullet;
}

void Game::setWave(Wave &w)
{
    bool deadWave = false;
    for (int i = 0; i < 30; i++)
    {
        deadWave = this->wave.getEnemy(i) != 0;
    }
    if (deadWave)
    {
        this->wave = w;
    }
}

// true if no collision
bool Game::check(int x, int y)
{
    Enemy *e;
    for (int i = 0; i < 50; i++)
    {
        e = this->wave.getEnemy(i);
        if (e->getX() == x && e->getY() == y)
        {
            return false;
        }
    }
    if (_player->getX() == x && _player->getY() == y)
    {
        return false;
    }

    return true;
}

void Game::move(Wave &w)
{
    for (int i = 0; i < w.getNbEnemies(); i++)
    {
        move(*w.getEnemy(i), KEY_LEFT);
    }
}

void Game::move() // bullets
{
    for (int i = 0; i < _compteurBullet; i++)
    {
        Bullet *b = bullets[i];
        bool right(b->getX() + 2 > COLS);
        bool left(b->getX() - 1 < 0);

        bool hit = check(b->getX() + b->getDirection(), b->getY());
        mvprintw(0,0,"%d %d %d", right, left, hit);

        if (!left && hit)
        {
            b->move();
        }
        else if (!right && hit)
        {
            b->move();
        }
        else if (!hit || right || left)
        {
            exit(0);
            delete b;
        }
        
        mvprintw(b->getY(), b->getX(), "%c", b->getCursor());
    }
}

void Game::move(Personnage &p, int move)
{
    // game borders
    bool up(p.getY() - 1 < 0);
    bool down(p.getY() >= LINES - 1);
    bool right(p.getX() + 2 > COLS);
    bool left(p.getX() - 1 < 0);

    if (move == KEY_RIGHT && !right && check(p.getX() + 1, p.getY()))
    {
        p.setX(p.getX() + 1);
    }
    else if (move == KEY_LEFT && !left && check(p.getX() - 1, p.getY()))
    {
        p.setX(p.getX() - 1);
    }
    else if (move == KEY_UP && !up && check(p.getX(), p.getY() - 1))
    {
        p.setY(p.getY() - 1);
    }
    else if (move == KEY_DOWN && !down && check(p.getX(), p.getY() + 1))
    {
        p.setY(p.getY() + 1);
    }

    mvprintw(p.getY(), p.getX(), "%c", p.getCursor());
}