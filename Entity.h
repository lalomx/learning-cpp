#pragma once
#include <iostream>
using String = std::string;

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
	String GetClassName() override
	{
		return "Entity";
	}
};