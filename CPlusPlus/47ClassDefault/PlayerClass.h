#pragma once

// Ό³Έν :
class PlayerClass
{
public:
	// constructer destructer
	PlayerClass();
	~PlayerClass();

	// delete Function
	PlayerClass(const PlayerClass& _Other) = delete;
	PlayerClass(PlayerClass&& _Other) noexcept = delete;
	PlayerClass& operator = (const PlayerClass& _Other) = delete;
	PlayerClass& operator = (PlayerClass&& _Other) noexcept = delete;

protected:

private:

};

