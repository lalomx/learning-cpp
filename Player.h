// class vs struc
// basically is the same, the small diff is the visibility (private, public)
// maintain the compatability with C
// if everything is public, use struc
#pragma once
#include <iostream>
#include "Entity.h"

class Player : public Entity
{
	// By default everything is private
private:
	int m_age = 20;
	mutable int m_callCount = 0;
public:
	Player();
	Player(const String& name);
	String m_name;
	void PrintName() const;
	void SetAge(int age);
	void PrintAge() const;
	int GetAge() const;
	const std::string& GetName() const;
};

// polymorphism
// an object can have multiple types
// all the properties used in the derives class are accesible from a object
// we can use an instance wherever we can use the derived type
// we can change de behavior by overriding the functionality

// inheritance
// a class can have functionality from another (parent) class.
// the biggest benefit is to encapsulate duplicated code