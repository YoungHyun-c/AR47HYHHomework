#pragma once
#include "ConsoleGameObject.h"

class Monster : public ConsoleGameObject
{
public:
	Monster();
	void Update();

	int2 GetNextPos()
	{
		return { Pos.X + Dir, Pos.Y };
	}

	void Down()
	{
		Pos.Y += 1;
		Dir *= -1;
		DownCheck = true;
	}

	// 이것을 사용해서 몬스터가 움직이게
private:
	int Dir = 1;
	bool DownCheck = false;

};