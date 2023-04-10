#pragma once
#include <GameEngineConsole/ConsoleGameObject.h>

class ConsoleGameScreen;
class Player : public ConsoleGameObject
{
public:
	static bool IsGameUpdate;
	// constructer destructer

	Player();
	void Update() override;

protected:

private:

};

