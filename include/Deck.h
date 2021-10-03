//
// Created by olli on 9/30/21.
//

#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H

#include "Hand.h"
#include "GenericPlayer.h"

class Deck : public Hand {
public:
    Deck() {m_Cards.reserve(52); Populate();}
    ~Deck() {}
    void Populate(); // инициализация колоды
    void Shuffle();
    void Deal(Hand & aHand); // раздача одной карты в руку
    void AdditionalCards(GenericPlayer & aGenericPlayer); // раздаёт игроку дополнительные карты пока он может и хочет их получить
};

#endif //BLACKJACK_DECK_H
