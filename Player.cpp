//
// Created by olli on 10/2/21.
//
#include "include/Player.h"

bool Player::isHitting() const
{
    std::cout << m_Name << ", хотите ещё карту? (Y/N): ";
    char response;
    std::cin >> response;
    return (response == 'y' || response == 'Y');
}

void Player::Win() const
{
    std::cout << m_Name << " выиграл.\n";
}

void Player::Lose() const
{
    std::cout << m_Name << " проиграл.\n";
}

void Player::Push() const
{
    std::cout << m_Name << " сыграл в ничью.\n";
}
