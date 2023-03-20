// 023_nullptr.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int Value = 10;

    // nullptr == 0 이라고 부릅니다.
    // null
    // 주소를 가리키지 않는다 아직 아무도 가리키고 있지 않다.

    // 보통은 nullptr로 초기화 합니다.
    int* Ptr = nullptr;

    Ptr = &Value;

    *Ptr = 200;

    // c 스타일
    // int* Ptr = 0;
}

