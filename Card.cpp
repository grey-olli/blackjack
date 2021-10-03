//
// Created by olli on 9/20/21.
//
#include <ostream>

#include "include/Card.h"

// перегружает оператор <<, чтобы получить возможность отправить
// объект типа Card в поток cout
std::ostream& operator<<(std::ostream& os, const Card& aCard)
{
    const std::string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
    const std::string SUITS[] = { "h", "s", "c", "d" };

    if (aCard.m_IsFaceUp)
    {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        os << "XX";
    }

    return os;
}
