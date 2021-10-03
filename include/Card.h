//
// Created by olli on 9/20/21.
//

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

#include <ostream>
#include "enums.h"

class Card {
    rank m_Rank;
    Suit m_Suit;
    bool m_IsFaceUp=true;  // рубашкой вверх = false.
public:
    Card(rank r = ACE, Suit s = SPADES, bool ifu = true) : m_Rank(r), m_Suit(s), m_IsFaceUp(ifu) {}
    void Flip() { m_IsFaceUp = ! m_IsFaceUp; }
    int getValue() const {
        if (m_IsFaceUp) {
            if (m_Rank > 10)
                return 10;
            else
                return m_Rank;
        }
        return 0;
    }
    void setValue(int val) { m_Rank=static_cast<::rank>(val); }
    void setValue(rank val) { m_Rank=val; }
    void setSuit(Suit s) { m_Suit=s; }
    Suit getSuit() const { return m_Suit; }
//       Card & operator=(const Card & other) {
//           cardValue=other.cardValue;
//           picture=other.picture;
//	  .setName(other.cardName);
//	  .setSuit(other.suit);
//	   return *this;
//       } // commented out - this is done by one line code:
    Card& operator=(const Card&) = default;
    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);
};
#endif //BLACKJACK_CARD_H
