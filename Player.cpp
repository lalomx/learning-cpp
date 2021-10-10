#include <iostream>
#include "Player.h"

Player::Player() : m_name("No name")
{
}

Player::Player(const String& name) : m_name(name)
{
}

void Player::PrintName() const
{
	std::cout << m_name << std::endl;
}

const String& Player::GetName() const {
	m_callCount++;
	return m_name;
}

void Player::PrintAge() const {
	std::cout << m_age << std::endl;
}

void Player::SetAge(int age) {
	m_age = age;
}

int Player::GetAge() const {
	return m_age;
}