#include "Item.h"
#include <GameEngineConsole/ConsoleGameScreen.h>
#include <GameEngineBase/GameEngineRandom.h>

Item::Item()
{
	RenderChar = '&';

	int X = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().X - 1);
	int Y = GameEngineRandom::MainRandom.RandomInt(0, ConsoleGameScreen::GetMainScreen().GetScreenSize().Y - 1);

	SetPos({ X , Y });
}

Item::~Item()
{

}

void Item::Update()
{
	/*int a = 0;
	for (size_t X = 0; X < ConsoleGameScreen::GetMainScreen().GetScreenSize().X; X++)
	{
		for (size_t Y = 0; Y < ConsoleGameScreen::GetMainScreen().GetScreenSize().Y; Y++)
		{
			if (X != Item::GetPos().X || Y != Item::GetPos().Y)
			{
				a = 0;
			}
			else
			{
				a = 1;
			}
		}
	}*/
	
	/*if ( a == 1 )
	{
		Death();
	}*/
}