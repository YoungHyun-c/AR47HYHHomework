// 081_TypeDefEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

typedef int MYINT, *MYTEST;

// c의 문법을 거의다 그대로 c++에서 사용할 수 있다.
// c++은 C를 포함한다 <=는 개소리

// 문법적으로는 c의 스타일을 거의 다 사용할 수 있다.
// C99 표준안은 거의다 사용할 수 있다.(1999년도 개발)

// c와 c++의 구조체의 차이는
// c는 멤버함수를 넣을수가 없다.
struct Player
{
    int a;
    int b;
};

int main()
{
    {
        // c에서는 앞에 struct까지 붙여야된다. 안그러면 컴파일 에러난다.
        struct Player NewPlayer;
    }

    int* Ptr0 = nullptr;
    MYTEST Ptr1 = nullptr;
    
    // wchar_t* LPWSTR;
}
