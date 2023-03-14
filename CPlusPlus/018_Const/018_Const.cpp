// 018_Const.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


// 함수의 스택에서의 메모리 크기는 컴파일시
// 고정되어야 하기 때문이다.
// ex) c++의 함수의 실행흐름을 만들기 위한 스택크기는
//      exe 파일에 이미 다 정의되어 있어야 한다.
int main()
{
    "TestChar";

    int ArrSize = 20;
    ArrSize = 30;
    // 왜 안되지? => 메모리 크기는 컴파일시 고정 되어야 돼서.
    //int Value[ArrSize] = {};

    int Value[30] = {};
    
    // 한번 더 보게 될 것
    const int ArrSize2 = 20;
    int Value2[ArrSize2] = {};
    // 특정 자료형앞에 const 키워드를 붙이면
    // 그 메모리의 비트적 상수화를 시킨다.
    // ArrSize2 = 30; -> 바꾸기 불가능

    // extern "C" inline printf_s(const char *const _Format, ...) 에 대해서
    printf_s();
}
