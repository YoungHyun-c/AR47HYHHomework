#pragma once
#include "ConsoleGameObject.h"

class Monster : public ConsoleGameObject
{
public:
	Monster();
	void Update();

	// 이것을 사용해서 몬스터가 움직이게
private:
	int Dir = 1;

};