#pragma once

// 헤더중복을 제거하는것도 일이기 때문에
// 컴파일 시간이 늘어지게 된다.
// 그러므로 최대한 최대한 헤더는 정말 필요한 녀석만 include 하는게 좋다.
//#include "Player.h"

class Monster
{
public:

	static int MonsterCount;

	Monster();

	// constructer destructer
	Monster();
	~Monster();

	// delete Function
	Monster(const Monster& _Other) = delete;
	Monster(Monster&& _Other) noexcept = delete;
	Monster& operator = (const Monster& _Other) = delete;
	Monster& operator = (Monster&& _Other) noexcept = delete;

protected:

private:

};

