#pragma once

// 헤더에만 다 만든다.
class int2
{
public:
	static const int2 Left;
	static const int2 Right;
	static const int2 Down;
	static const int2 Up;
	static const int2 Zero;


	int X = 0;
	int Y = 0;

public:
	inline int2 Half()
	{
		return { X / 2, Y / 2 };
	}
	
	//inline int2 E(int _Value)
	//{
	//	return { X + _Value, Y };
	//}
	//inline int2 W(int _Value)
	//{
	//	return { X - _Value, Y };
	//}
	//inline int2 S(int _Value)
	//{
	//	return { X , Y + _Value };
	//}
	//inline int2 N(int _Value)
	//{
	//	return { X , Y - _Value };
	//}

	bool Check(const int2& _Other) const
	{
		return X == _Other.X && Y == _Other.Y;
	}

	bool operator==(const int2& _Other) const
	{
		return X == _Other.X && Y == _Other.Y;
	}

	int2 operator+(const int2& _Other) const
	{
		int2 ReturnValue = *this;
		ReturnValue.X += _Other.X;
		ReturnValue.Y += _Other.Y;
		return ReturnValue;
	}

	int2 operator*(const int _Value) const
	{
		int2 ReturnValue = *this;
		ReturnValue.X *= _Value;
		ReturnValue.Y *= _Value;
		return ReturnValue;
	}

public:
	inline int2()
	{

	}

	// 생성자에
	inline int2(int _X, int _Y) : X(_X), Y(_Y)
	{

	}
};