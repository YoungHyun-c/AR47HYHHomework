#pragma once
#include "ConsoleGameObject.h"

class Monster : public ConsoleGameObject
{
public:
	Monster();
	void Update();

	// �̰��� ����ؼ� ���Ͱ� �����̰�
private:
	int Dir = 1;

};