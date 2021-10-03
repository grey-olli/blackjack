//
// Created by olli on 10/2/21.
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H

#include "GenericPlayer.h"

class Player : public GenericPlayer {
public:
    Player(const std::string & name=(std::string)"") : GenericPlayer(name) {};
    virtual ~Player() {}
    virtual bool isHitting() const; // показывает нужна ли игроку ещё карта
    void Win() const; // объявляет что игрок выиграл
    void Lose() const; // объявляет что игрок проиграл
    void Push() const; // объявляет что игрок сыграл вничью
};


#endif //BLACKJACK_PLAYER_H
