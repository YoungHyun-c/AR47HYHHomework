#include "Bomb.h"

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
	//SetPos({ Pos.X, Pos.Y + 1 });
	//SetPos({ Pos.X, Pos.Y - 1 });
	if (0 >= --BombCount)
	{
		Off();
	}
}

void Bomb::Render()
{
	ConsoleGameObject::Render();

}