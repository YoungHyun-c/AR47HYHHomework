#pragma once
#include "ConsoleGameMath.h"
class ConsoleGameScreen;
class Player
{
public:
	Player();
	inline void SetPos(const int2& _Value)
	{
		Pos = _Value;
	}
	inline int2 GetPos() const
	{
		return Pos;
	}
	void Input();
	// 이상적인 방법은 보통 이걸 추천한다.
	// 
	inline bool IsFire()
	{
		return Fire;
	}


protected:

private:
	static const int InterFrame = 200;
	bool Fire = false;
	int2 Pos = int2(0, 0);
	// 이런 구조를 Has a라고 한다. Player Has a Bullet
	// Bullet NewBullet; // 플레이어의 신체 내부에 총알 한발이 있다.
	// Bullet* NewBullet; // 바깥에 있는 총알을 조작할수 있다.
};
