#include "Monster.h"
#include "ConsoleGameScreen.h"
#include "ShootingGame.h"

Monster::Monster()
{
	RenderChar = 'M';
}

// 생략해야 합니다. 선언과 구현을 분리했다면
void Monster::Render() /*override*/
{
	if (true == IsUpdate())
	{
		ConsoleGameObject::Render();
	}
	else if (0 < DeathTime)
	{
		if (DeathTime % 2)
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos, '@');
		}
		else
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos, '+');
		}

		--DeathTime;
	}
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
	
	//Pos.X += Dir;
	
}