// 013_Function.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 함수의 선언방법
// 1. 함수는 다른 함수 내부에서는 선언하지 못하게 문법상 정의되어 있습니다.
// 2. 함수는 리턴값이라는 것이 무조건 존재합니다.

// 리턴값 이름		이 함수에 넘길 메모리가 있느냐.
	void  Function  (						)
	{// 그 함수의 시작

	}// 그 함수의 끝

// 리턴값의 의미
// 이 함수의 결과를 외부로 보내겠다.
// void는 아무것도 보내지 않겠다.
// 이름의 의미.
// 램 200만 바이트 번째
// 즉 변수와 똑같이 함수도 그에 대한 내용이 있고,
// 메모리를 써서 그것을 표현하고 있다.
// 메모리가 존재한다면 그에 대한 위치도 무조건 필요하다.

// 인자의 의미
// 무조건 적으로 그 실행흐름의 지역변수 입니다.

// 리턴의 의미 자신을 호출한 외부영역에 전달하는 메모리 값.
// int Plus 에서 int의 의미는 외부에, main에게 너는 최소한 나의 결과물을 받기 위한 4바이트를 만들어 놔야 한다고 알려주는 것.
int Plus(int _Left, int _Right)
{
	// return 반환한다.
	return _Left + _Right;
}

// 다른 함수에 있는 값을 받아 올 수 없다.
//void Test(int _Value)
//{
//	return _Left + Right;
//}

// 리턴의 의미 + 사용한 즉시 자신을 포함한 실행흐름을 끝낸다.
// 이름이 같은 변수는 선언할 수 없다.
// 함수를 실행하는데 필요한 메모리 비용은 언제나
// 인자 전체 크기 + a
void Test(int _Value)
{
	// Test _Value
	_Value = 10;
	return;
}

int main()
{
	// 가장 빠른코드 main에서만 2천만줄 치고 변수 50만개 씀
	int Result = Plus(20, 30);

	// 이것도 똑같이 4바이트를 사용한 것
	Plus(20, 30);

	bool bResult = Plus(20, 30);
	// bResult = 4바이트의 메모리 공간이 생겨있을 수 밖에 없다.
	// 그려면 main함수에서는 보이는 결과 bool 1바이트와, 보이지 않는 결과 Plus 4바이트를 사용하여 총 5바이트 + a를 사용.

	// main _Value
	int _Value = 20;
	Test(_Value);
	
	int ReturnSize = sizeof(Plus(20, 30));
	sizeof(Plus(20, 30));

	// void 는 sizeof 크기를 잴 수 없다.
	//sizeof(void);
	//sizeof(Test(_Value));
}
