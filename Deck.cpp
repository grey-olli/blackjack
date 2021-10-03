//
// Created by olli on 9/30/21.
//
#include "include/Hand.h"
#include "include/Deck.h"

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
{
    std::cout << std::endl;
    // продолжает раздавать карты до тех пор, пока у игрока не случается
    // перебор или пока он хочет взять еще одну карту
    while (!(aGenericPlayer.isBusted()) && aGenericPlayer.isHitting())
    {
        Deal(aGenericPlayer);
        std::cout << aGenericPlayer << std::endl;

        if (aGenericPlayer.isBusted())
        {
            aGenericPlayer.Bust();
        }
    }
}

void Deck::Shuffle()
{
    random_shuffle(m_Cards.begin(), m_Cards.end());
}

void Deck::Deal(Hand& aHand)
{
    if (!m_Cards.empty())
    {
        aHand.Add(m_Cards.back());
        m_Cards.pop_back();
    }
    else
    {
        std::cout << "Out of cards. Unable to deal.";
    }
}

void Deck::Populate()
{
    Clear();
    // создает стандартную колоду
    for (int s = HEARTS; s <= DIAMONDS; ++s)
    {
        for (int r = ACE; r <= KING; ++r)
        {
            Add(new Card(static_cast<::rank>(r),
                         static_cast<::Suit>(s)));
        }
    }
}
