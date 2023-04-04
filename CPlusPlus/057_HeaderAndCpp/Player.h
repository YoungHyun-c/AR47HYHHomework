#pragma once

// Ό³Έν :
class Player
{
public:

	Player();
	void Damage(int _Damamge);

	void Test();
	// constructer destructer
	Player();
	~Player();

	// delete Function
	Player(const Player& _Other) = delete;
	Player(Player&& _Other) noexcept = delete;
	Player& operator = (const Player& _Other) = delete;
	Player& operator = (Player&& _Other) noexcept = delete;

protected:

private:
	int Hp = 100;
	int Att = 10;

};

