//
// Created by olli on 10/3/21.
//

#ifndef BLACKJACK_GAME_H
#define BLACKJACK_GAME_H

#include <vector>
#include "Player.h"
#include "Deck.h"
#include "House.h"

class Game {
    Deck m_Deck;    // колода карт
    House m_House;  // рука дилера
    std::vector<Player> m_Players; // группа игроков людей
public:
    Game(const std::vector<std::string> & n);
    ~Game() {}
    void Play();
};


#endif //BLACKJACK_GAME_H
