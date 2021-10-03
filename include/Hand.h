//
// Created by olli on 9/20/21.
//

#ifndef BLACKJACK_HAND_H
#define BLACKJACK_HAND_H

#include <vector>
#include "Card.h"

class Hand {
protected:
    std::vector<Card*> m_Cards; // коллекция указателей карт
public:
    Hand() { m_Cards.reserve(9); }
    virtual ~Hand() {Clear();}
    void Add(Card * pCard); // добавляет указатель на карту в m_Cards
    void Clear();   // очищает руку от карт удаляя все указатели из m_Cards
    int GetTotal() const; // возвращает сумму очков карт в руке
};
#endif //BLACKJACK_HAND_H
