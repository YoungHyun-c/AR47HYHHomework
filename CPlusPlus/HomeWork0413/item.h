#pragma once

// Ό³Έν :
class item
{
public:
	// constructer destructer
	item();
	~item();

	// delete Function
	item(const item& _Other) = delete;
	item(item&& _Other) noexcept = delete;
	item& operator = (const item& _Other) = delete;
	item& operator = (item&& _Other) noexcept = delete;

protected:

private:

};

