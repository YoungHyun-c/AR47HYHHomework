#include "Monster.h"
#include "ConsoleGameScreen.h"
#include "ShootingGame.h"

Monster::Monster()
{
	RenderChar = 'M';
}

// �����ؾ� �մϴ�. ����� ������ �и��ߴٸ�
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

	//// Y ��ǥ�� ���� ������ �ٲ۴�.
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