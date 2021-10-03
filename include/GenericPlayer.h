//
// Created by olli on 9/28/21.
//

#ifndef BLACKJACK_GENERICPLAYER_H
#define BLACKJACK_GENERICPLAYER_H

#include <string>
#include <iostream>

#include "Hand.h"

class GenericPlayer : public Hand {

protected:
    std::string m_Name; // имя игрока

public:
    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);
    GenericPlayer(const std::string & name=(std::string)"") : m_Name(name) {}
    virtual ~GenericPlayer() {}
    virtual bool isHitting() const = 0; // указывает нужна ли игроку ещё карта
    bool isBusted() const { return (Hand::GetTotal() > 21);}; // указывает что у игрока перебор
    void Bust() const { std::cout << m_Name << " получил больше 21.\n";} // объявляет что у игрока перебор
};

#endif //BLACKJACK_GENERICPLAYER_H
