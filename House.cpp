//
// Created by olli on 10/3/21.
//
#include "include/House.h"

bool House::isHitting() const
{
    return (GetTotal() <= 16);
}

void House::FlipFirstCard()
{
    if (!(m_Cards.empty()))
    {
        m_Cards[0]->Flip();
    }
    else
    {
        std::cout << "No card to flip!\n";
    }
}
