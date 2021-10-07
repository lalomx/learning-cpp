#pragma once
#include <iostream>

class Printable 
{
public:
	virtual std::string GetClassName() = 0;
};

struct Position {
	// representation of a group of variables
	// does not contain complex functionality
	int x;
	int y;
};

class Entity: public Printable
{
protected:
	Position pos;
	void Move(int xa, int ya, int speed)
	{
		pos.x = xa * speed;
		pos.y = ya * speed;
	}

public:
	std::string GetClassName() override 
	{
		return "Entity";
	}
};