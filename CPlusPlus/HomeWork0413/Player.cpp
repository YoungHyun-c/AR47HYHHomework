#include "Player.h"
#include <conio.h>
#include <Windows.h>
#include <GameEngineConsole/ConsoleGameScreen.h>
#include "ConsoleObjectManager.h"
#include "Bomb.h"
#include "GameEnum.h"

bool Player::IsGameUpdate = true;

Player::Player()
{
	RenderChar = '*';
	SetPos(ConsoleGameScreen::GetMainScreen().GetScreenSize().Half());
}

bool Player::IsBomb(int2 _NextPos)
{
	// 폭탄이 설치되었다면 못통과하게 만들어놓으세요.
	GameEngineArray<ConsoleGameObject*>& BombGroup
		= ConsoleObjectManager::GetGroup(ObjectOrder::Bomb);
	
	// 선생님 풀이
	for (size_t i = 0; i < BombGroup.Count(); i++)
	{
		ConsoleGameObject* Ptr = BombGroup[i];

		if (nullptr == Ptr)
		{
			continue;
		}

		int2 BombPos = BombGroup[i]->GetPos();
		if (_NextPos == BombPos)
		{
			return true;
		}
	}

	return false;

	// 내 풀이
	//for (int i = 0; i < BombGroup.Count(); i++)
	//{
	//	if (nullptr == BombGroup[i])
	//	{
	//		continue;
	//	}

	//	if (_NextPos.Check(BombGroup[i]->GetPos()))
	//	{
	//		return true;
	//	}
	//}
	//
	//return false;
}

void Player::Update()
{
	if (0 == _kbhit())
	{
		return;
	}

	char Ch = _getch();

	int2 NextPos = { 0, 0 };

	switch(Ch)
	{
	case 'a':
	case 'A':
		NextPos = Pos;
		NextPos.X -= 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos) && false == IsBomb(NextPos))
		{
			Pos.X -= 1;
		}
		break;
	case 'd':
	case 'D':
		NextPos = Pos;
		NextPos.X += 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos) && false == IsBomb(NextPos))
		{
			Pos.X += 1;
		}
		break;
	case 'w':
	case 'W':
		NextPos = Pos;
		NextPos.Y -= 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos) && false == IsBomb(NextPos))
		{
			Pos.Y -= 1;
		}
		break;
	case 's':
	case 'S':
		NextPos = Pos;
		NextPos.Y += 1;
		if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos) && false == IsBomb(NextPos))
		{
			Pos.Y += 1;
		}
		break;
	case 'f':
	case 'F':
	{
		// 여기 이상황에서 보면
		// ConsoleObjectManager 있고
		// Player
		// 폭탄설치
		Bomb* NewBomb = ConsoleObjectManager::CreateConsoleObject<Bomb>(ObjectOrder::Bomb);
		NewBomb->Init(BombPower);
		NewBomb->SetPos(GetPos());

		// delte NewBomb 진짜 하면 안되는짓. ObjectManager에서 관리(삭제)하는 것인데 플레이어에서 또 삭제하는짓
		break;
	}
	case 'q':
	case 'Q':
	{
		IsGameUpdate = false;
		break;
	}
	default:
		break;
	}
}