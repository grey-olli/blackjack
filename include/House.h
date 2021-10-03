//
// Created by olli on 10/3/21.
//

#ifndef BLACKJACK_HOUSE_H
#define BLACKJACK_HOUSE_H

#include "GenericPlayer.h"

class House :public GenericPlayer {
public:
    House(const std::string name=(std::string)"Дилер") : GenericPlayer(name) {}
    virtual ~House() {};
    virtual bool isHitting() const; // показывает нужна ли игроку ещё карта
    void FlipFirstCard(); // переворачивает первую карту
};


#endif //BLACKJACK_HOUSE_H
