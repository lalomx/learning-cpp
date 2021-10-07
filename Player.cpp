#include <iostream>
#include "Player.h"

Player::Player()
{
}

Player::Player(const char* name)
{
	name = name;
}

void Player::PrintName()
{
		std::cout << name << std::endl;
}

void Player::PrintAge() {
	std::cout << m_age << std::endl;
}

void Player::SetAge(int age) {
	m_age = age;
}