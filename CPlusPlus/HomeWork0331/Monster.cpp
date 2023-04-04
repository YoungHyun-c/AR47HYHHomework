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


	//// Y 좌표에 따라서 방향을 바꾼다.
	//if (Pos.Y % 2 == 1)
	//{
	//	Pos.X -= Dir;
	//	ShootingGame::MonsterEndCheck();
	//}
	//if(Pos.Y % 2 == 0)
	//{
	//	Pos.X += Dir;
	//	ShootingGame::MonsterEndCheck();
	//}
	//

	if (true == DownCheck)
	{
		DownCheck = false;
		return;
	}
	
	Pos.X += Dir;
	
}