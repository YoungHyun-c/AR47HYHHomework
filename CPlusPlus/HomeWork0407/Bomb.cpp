#include "Bomb.h"
#include <GameEngineConsole/ConsoleGameScreen.h>
#include "ConsoleObjectManager.h"

Bomb::Bomb()
{

}

Bomb::~Bomb()
{

}

// 내풀이
//void Bomb::Init()
//{
//	RenderChar = '@';
//}
//
//void Bomb::Update()
//{
//	ConsoleGameObject::Update();
//	if (BombMax >= 10)
//	{
//		Off();
//	}
//}
//
//void Bomb::Render()
//{
//	ConsoleGameObject::Render();
//	if (0 >= --BombCount)
//	{
//		for (int BombMove = 0; BombMove < BombMax; BombMove++)
//		{
//			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos.E(BombMove), RenderChar);
//			ConsoleGameScreen::GetMainScreen().SetScreenCharacter({ Pos.X, Pos.Y - BombMove }, RenderChar);
//			ConsoleGameScreen::GetMainScreen().SetScreenCharacter({ Pos.X, Pos.Y + BombMove }, RenderChar);
//			ConsoleGameScreen::GetMainScreen().SetScreenCharacter({ Pos.X - BombMove, Pos.Y }, RenderChar);
//		}
//		BombMax++;
//	}
//}

// 선생님 풀이

void Bomb::Init(int _BombPower)
{
	MaxExpPower = _BombPower;
	CurExpPower = 0;
	RenderChar = '@';
}

void Bomb::Update()
{
	ConsoleGameObject::Update();

	if (CurExpPower == MaxExpPower)
	{
		Death();
		//Off();
	}

	if (0 >= --BoomCount)
	{
		CurExpPower++;
	}
}

void Bomb::Render()
{
	ConsoleGameObject::Render();

	for (int i = 0; i < CurExpPower; i++)
	{
		int2 Left = GetPos() + int2::Left * i;
		int2 Right = GetPos() + int2::Right * i;
		int2 Up = GetPos() + int2::Up * i;
		int2 Down = GetPos() + int2::Down * i;

		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Left, '#');
		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Right, '#');
		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Down, '#');
		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Up, '#');
	}
}