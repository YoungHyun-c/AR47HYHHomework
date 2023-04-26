// 082_FunctionCallType.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 함수 호출 규약.

void __cdecl test()
{

}

void __stdcall test()
{

}

// 멤버함수는 stdcall

int main()
{
    
}

// 전역함수를 만들면 __cdecl
// stdcall 호출규칙
// cdecl 호출규칙
// 함수포인터를 넣을 때 stdcall로 명시한 함수를 호출해주어야한다.
// 전역함수로 만들면 일반적으로 __cdecl함수
// 윈도우에선 stdcall함수로 명시되어있어 stdcall 함수로 호출해주어야한다.