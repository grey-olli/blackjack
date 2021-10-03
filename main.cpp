
#include <iostream>
#include <string>
#include <vector>
//#include <algorithm>

// Правила Black Jack: https://add-hobby.ru/blackjack.html
// Уточнения под которые сделан код:
// игра одной колодой,
// ставок нет - только статус выигрыша,
// нет даблов и триплов,
// За дилера будет играть компьютер.

#include "include/Card.h"
#include "include/Game.h"

int main(int argc, char ** argv)
{
    std::cout << "\t\tДобро пожаловать в BlackJack!\n\n";

    int numPlayers = 0;
    while (numPlayers < 1 || numPlayers > 7)
    {
        std::cout << "Сколько игроков? (1 - 7): ";
        std::cin >> numPlayers;
    }

    std::vector<std::string> names;
    std::string name;
    for (int i = 0; i < numPlayers; ++i)
    {
        std::cout << "Введите имя игрока: ";
        std::cin >> name;
        names.push_back(name);
    }
    std::cout << std::endl;

    // игровой цикл
    Game aGame(names);
    char again = 'y';
    while (again != 'n' && again != 'N')
    {
        aGame.Play();
        std::cout << "\nБудете играть ещё? (Y/N): ";
        std::cin >> again;
    }

    return 0;
}
