#pragma once

// Ό³Έν :
class Temp
{
public:
	// constructer destructer
	Temp();
	~Temp();

	// delete Function
	Temp(const Temp& _Other) = delete;
	Temp(Temp&& _Other) noexcept = delete;
	Temp& operator = (const Temp& _Other) = delete;
	Temp& operator = (Temp&& _Other) noexcept = delete;

protected:

private:

};

