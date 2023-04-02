#include "Monster.h"
#include "ConsoleGameScreen.h"
#include "ShootingGame.h"

Monster::Monster()
{
	RenderChar = 'M';
}

void Monster::Update()
{
	if (false == IsUpdate())
	{
		return;
	}


	if (Pos.Y % 2 == 1)
	{
		Pos.X -= Dir;
	}
	ShootingGame::MonsterEndCheck();
	if(Pos.Y % 2 == 0)
	{
		Pos.X += Dir;
	}
	ShootingGame::MonsterEndCheck();
	
	//ShootingGame::MonsterEndCheck();

	/*if (ConsoleGameScreen::GetMainScreen().IsScreenOver(Pos) > ConsoleGameScreen::ScreenXSize)
	{
		Pos.Y += 1;
	}*/

	/*if (Pos.X < 0)
	{
		Pos.Y = 2;
	}*/

	/*if (Pos.Y % 2 == 0)
	{
		Pos.X -= Dir;
	}*/
	/*int2 MonPos = { 0, 0 };
	MonPos = Pos;
	MonPos.X += Dir;*/

	//if (ConsoleGameScreen::GetMainScreen().IsScreenOver(MonPos) < 0)
	//{
	//	//ShootingGame::MonsterEndCheck();
	//	//Dir = +1;
	//	//Pos.Y += 1;
	//}
	//else if (ConsoleGameScreen::GetMainScreen().IsScreenOver(MonPos) > ConsoleGameScreen::ScreenXSize)
	//{
	//	//Dir = -1;
	//	//Pos.Y = 1;
	//}
	/*if (true == ConsoleGameScreen::GetMainScreen().IsScreenOver(MonPos))
	{
	}*/

	//Pos.X -= 1;


	//if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(MonPos))
	//{
	//	Pos.X += Dir;
	//}
	//if (true == ConsoleGameScreen::GetMainScreen().IsScreenOver(MonPos))
	//{
	//	Pos.Y += 1;
	//	Dir = -1;
	//}
	
}