#include "Body.h"
#include <GameEngineBase/GameEngineRandom.h>
#include <GameEngineConsole/ConsoleGameScreen.h>
#include <list>
#include <GameEngineConsole/ConsoleObjectManager.h>
#include <conio.h>

Body::Body()
{
	RenderChar = 'i';

	int X = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().X - 1);
	int Y = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().Y - 1);
	SetPos({ X, Y });
}

Body::~Body()
{
}


void Body::Update()
{
	std::list<ConsoleGameObject*>& HeadGroup = ConsoleObjectManager::GetGroup(0);
	ConsoleGameObject* Player = HeadGroup.front();
	if (true == PlayerEat && nullptr == Prev)
	{
		BeforePos = GetPos();
		SetPos(Player->GetPos());
	}
	else if (true == PlayerEat && nullptr != Prev)
	{
		BeforePos = GetPos();
		SetPos(Prev->GetBeforePos());
	}
	else if (nullptr == Prev)
	{
		return;
	}
}


bool Body::IsPlayerEat()
{
	return PlayerEat;
}
