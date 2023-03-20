#include<iostream>

//중단점 F9 눌러서 중단점 만들기
int Plus(int _left, int _right)
{
	return _left + _right;
}

int main()
{
	int Left = 7;
	int Right = 3;
	int Result = 0;

	// 연산자에는 보통
	// 단항 연산자 <= 메모리영역이 1개만 필요하면 단항
	// 이항 연산자 <= 메모리영역이 2개만 필요하면 이항
	// 삼항 연산자 <= 메모리영역이 3개만 필요하면 삼항

	// ex) = 연산자는 이항 연산자 입니다.
	// Left 3을 사용해서 2개의 메모리 영역이 있어야만 동작하기 때문에
	// 이항 연산자라고 합니다.


	// 산술연산자는 보통 이항이 많습니다.
	//		  7       3
	Result = Left + Right;
	Result = Left - Right;
	Result = Left * Right;
	// C++ 에서 정수의 나눗샘은 몫만 나옴
	Result = Left / Right;
	Result = Left % Right; // 나머지
	//단항
	Result = -Left;
	Result = +Left;

	//나중에 다시 설명
	//전치, 전위
	Result = ++Left;
	//후치, 후위
	Result = Left++;
	Result = --Left;
	Result = Left--;

	// 연산자 순서
	Result = 1 + 2 * 3;
	// () 가로 연산자
	// 연산순서를 프로그래머가 지정하게 해줄 수 있는 연산자.
	Result = (1 + 2) * 3;

	// bool 이라는 자료형은 논리형이라고 부른다.
	// 논리형은 true와 false로
	// 참과 거짓이라는 2가지만 표현할 수 있는 자료형을 논리형이라고 합니다.
	// true 논리형 상수 참
	// flase 논리형 상수 거짓

	bool bResult = true;
	bResult = false;

	bResult = Left == Right; //같다
	bResult = Left != Right; //같지 않다. True
	bResult = Left < Right;  //작다
	bResult = Left > Right;  //크다
	bResult = Left <= Right; //작거나 같다
	bResult = Left >= Right; //크거나 같다

	// 논리 연산자
	//and
	bResult = true && true; // 둘다 참이라면 참 하나라도 거짓이라면 거짓
	bResult = true && false;
	bResult = false && false;
				   
	//or
	bResult = true || true; // 둘중 하나라도 참이라면 참, 모두 거짓이라면 거짓
	bResult = true || false;
	bResult = false || false;

	Left = Plus(Left, 3);

	Left = Left + 3;
}