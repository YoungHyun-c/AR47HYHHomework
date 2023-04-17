#pragma once
#include <GameEngineConsole/ConsoleGameObject.h>
#include "Player.h"

class ConsoleGameScreen;
class Item : public ConsoleGameObject
{
public:
	// constructer destructer
	Item();
	~Item();

	// delete Function
	Item(const Item& _Other) = delete;
	Item(Item&& _Other) noexcept = delete;
	Item& operator = (const Item& _Other) = delete;
	Item& operator = (Item&& _Other) noexcept = delete;


protected:
	void Update() override;
private:

};

