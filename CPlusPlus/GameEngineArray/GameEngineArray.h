#pragma once

// Ό³Έν :
class GameEngineArray
{
public:
	// constructer destructer
	GameEngineArray();
	~GameEngineArray();

	// delete Function
	GameEngineArray(const GameEngineArray& _Other) = delete;
	GameEngineArray(GameEngineArray&& _Other) noexcept = delete;
	GameEngineArray& operator = (const GameEngineArray& _Other) = delete;
	GameEngineArray& operator = (GameEngineArray&& _Other) noexcept = delete;

protected:

private:

};

