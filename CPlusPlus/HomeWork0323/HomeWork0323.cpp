// HomeWork0323.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Number
{
private:
	int Value;
public:
	// 멤버 이니셜 라이저
	Number(int _Value)
		:Value(_Value)
	{

	}

	int operator[](size_t _Value)
	{
		return Value;
	}

	bool operator == (int _Value)
	{
		return false;
	}

	// 클래스가 연산자를 사용할 수 있게 만들어주는 것.
	int operator + (int _Value)
	{
		return Value + _Value;
	}

	int operator - (int _Value)
	{
		return Value - _Value;
	}

	int operator / (int _Value)
	{
		return Value / _Value;
	}

	int operator % (int _Value)
	{
		return Value / _Value;
	}

	int operator * (int _Value)
	{
		return Value / _Value;
	}

	int operator & (int _Value)
	{
		return false;
	}

	int operator | (int _Value)
	{
		return true;
	}

	int operator += (int _Value)
	{
		return Value += _Value;
	}

	int operator != (int _Value)
	{
		return true;
	}
};


int main()
{
	{
		int Value = 10;
		Value + 10;
	}
	{
		// 자신이 논리적으로 이 연산자를 이렇게 만들면 되겠다 할 수 있는 것을
		// 만들어 보면 된다.
		Number Value = 10;
		Value + 10;
		Value - 10;
		Value / 10;
		Value % 10;
		Value * 10;
		Value += 10;

		Value & 10;
		Value | 10;
		
		(Value != 10) ? 20 : 40;

		if (Value == 10)
		{
			int a = 0;
		}

		int Test = Value[2000];
	}
}

