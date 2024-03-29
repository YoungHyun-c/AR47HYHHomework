﻿// 062_VirtualSize.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class FightUnit
{
public:
	int GetAtt()
	{
		return Att;
	}

private:
	int Att = 10;
	int Hp = 100;
};

class Monster : public FightUnit
{

};

class BossMonster : public Monster
{

};

class Player : public FightUnit
{
public:
	int GetPlayerAtt()
	{
		return GetAtt() + Lv + Equip;
	}

private:
	int Lv = 1;
	int Equip = 1; // 장비
};

// 다형성을 표현하는 문법인 virtual은 보통 상속과 함께 합니다.
// 다형성 == 상속 <= 쳐맞습니다.

// 내 게임에있는 존재들끼리 싸울 때 사용하는 함수
void FightScene(FightUnit* _Player, FightUnit* _Monster)
{

}

int main()
{
	Player NewPlayer;

	int A = NewPlayer.GetAtt();

}