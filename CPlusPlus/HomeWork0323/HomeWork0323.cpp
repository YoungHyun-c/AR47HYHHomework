// HomeWork0323.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//class Number
//{
//private:
//	int Value;
//public:
//	// 멤버 이니셜 라이저
//	Number(int _Value)
//		:Value(_Value)
//	{
//
//	}
//
//	int operator[](size_t _Value)
//	{
//		return Value;
//	}
//
//	bool operator == (int _Value)
//	{
//		return false;
//	}
//
//	// 클래스가 연산자를 사용할 수 있게 만들어주는 것.
//	int operator + (int _Value)
//	{
//		return Value + _Value;
//	}
//
//	int operator - (int _Value)
//	{
//		return Value - _Value;
//	}
//
//	int operator / (int _Value)
//	{
//		return Value / _Value;
//	}
//
//	int operator % (int _Value)
//	{
//		return Value / _Value;
//	}
//
//	int operator * (int _Value)
//	{
//		return Value / _Value;
//	}
//
//	int operator & (int _Value)
//	{
//		return false;
//	}
//
//	int operator | (int _Value)
//	{
//		return true;
//	}
//
//	int operator += (int _Value)
//	{
//		return Value += _Value;
//	}
//
//	int operator != (int _Value)
//	{
//		return true;
//	}
//};
//
//
//int main()
//{
//	{
//		int Value = 10;
//		Value + 10;
//	}
//	{
//		// 자신이 논리적으로 이 연산자를 이렇게 만들면 되겠다 할 수 있는 것을
//		// 만들어 보면 된다.
//		Number Value = 10;
//		Value + 10;
//		Value - 10;
//		Value / 10;
//		Value % 10;
//		Value * 10;
//		Value += 10;
//
//		Value & 10;
//		Value | 10;
//		
//		(Value != 10) ? 20 : 40;
//
//		if (Value == 10)
//		{
//			int a = 0;
//		}
//
//		int Test = Value[2000];
//	}
//}



//다시 정의할 수 없는 연산자
//연산자		이름
//.			멤버 선택
//.*		멤버 포인터 선택
//::		범위 확인
//? :		조건부
//#			문자열로 전처리기 변환
//##		전처리기 연결

// https://learn.microsoft.com/ko-kr/cpp/cpp/operator-overloading?view=msvc-170


class Number
{

};

int Test()
{
	return 10;
}

int main()
{
	// 문법적으로 정해졌다.
	// unamed memory에는 우리가 간섭하여 수정할 수 는 없고
	// 그걸 받아서 사용만 가능하다.
	// 보이지 않는 4바이트 = 10; <= c++ 문법적으로 허용되지 않았다.
	Test() = 10;

	int RealNumber = 10;
	RealNumber + 10;
	(RealNumber += 10) = 10;

	Number NewNumber = 10;
	// 보이지 않는 4바이트 메모리가 생겨야한다.
	// unamed Value는 우리가 거기에다가 값을 다시 집어넣을 수 없다.
	NewNumber + 10;
	(NewNumber += 10) = 10;
	// 자기자신을 리턴하지 않고 새로운 메모리를 만들어서 리턴하므로
	// 그 메모리에 접근할 수 없기 때문에 = 20이 불가능해진다.
	NewNumber++ = 20;
}

// a++, 후위 증가연산자
// 예외규칙입니다.
// 인자가 있는 것은 후위로 보고, 인자는 무시한다.
// 후위의 경우 인자를 넣어주지만 사용할 수 는 없다.
int operator++(int) {
	int nResult = 0;

	return nResult;
}