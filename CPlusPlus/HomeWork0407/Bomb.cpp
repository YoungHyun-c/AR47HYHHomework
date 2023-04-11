#include "Bomb.h"
#include <GameEngineConsole/ConsoleGameScreen.h>
#include "ConsoleObjectManager.h"

Bomb::Bomb()
{

}

Bomb::~Bomb()
{

}

void Bomb::Init()
{
	RenderChar = '@';
}

void Bomb::Update()
{
	ConsoleGameObject::Update();
	if (BombMax >= 10)
	{
		Off();
	}
}

void Bomb::Render()
{
	ConsoleGameObject::Render();
	if (0 >= --BombCount)
	{
		for (int BombMove = 0; BombMove < BombMax; BombMove++)
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(Pos.E(BombMove), RenderChar);
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter({ Pos.X, Pos.Y - BombMove }, RenderChar);
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter({ Pos.X, Pos.Y + BombMove }, RenderChar);
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter({ Pos.X - BombMove, Pos.Y }, RenderChar);
		}
		BombMax++;
	}
}