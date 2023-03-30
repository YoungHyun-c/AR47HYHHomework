#pragma once
#include "ConsoleGameMath.h"


class Bullet
{
public:
	Bullet();

	void SetPos(const int2& _Pos)
	{
		Pos = _Pos;
	}

	int2 GetPos()
	{
		return Pos;
	}

	void Update()
	{
		Pos.Y -= 1;
	}
	
	bool fire()
	{
		return true;
	}

private:
	int2 Pos;
};

