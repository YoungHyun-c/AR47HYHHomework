// 090_ifdef.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#define Test int A;

// 복붙 말고도
// CCCC를 디파인 했다.
// #define CCCC

// CCCC 가 정의 되었다면
#ifdef CCCC
// 내부의 코드를 컴파일해라
// => CCCC가 존재하지 않는다면 이 내부의 코드는 존재하지 않는 코드가 된다.
int Value = 20;
#else
int Value = 30;
#endif

#ifdef _DEBUG
// 디버그 모드로 빌드할때
#else
// 다른모드로 빌드할때
#endif


int main()
{
	Value = 20;
}

