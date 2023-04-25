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
// 1.
//struct Player
//{
//    int a;
//    int b;
//};

// 2.
//struct __tagPlayer
//{
//    int Hp;
//    int Att;
//};
//typedef struct __tagPlayer Player;

// 3. 선언과 동시에 typedef를 할 수 가 있다.
typedef struct __tagPlayer
{
    int Hp;
    int ATT;
} Player, Test, *PPlayer;

int main()
{
    // 1.
    //{
    //    // c에서는 앞에 struct까지 붙여야된다. 안그러면 컴파일 에러난다.
    //    struct Player NewPlayer;
    //}

    // 2. Player 클래스를 쓰기 위해 typedef로 __tagPlayer 클래스 이름을 Player로 바꿔서 사용.
    /*{
        Player NewPlayer;
    }*/

    // 3.
    {
        Player NewPlayer;
        Test NewPlayer;
    }

    // c 에서는 인자는 무조건 맨 위에서 선언 해야됨.
    int* Ptr0 = nullptr;
    MYTEST Ptr1 = nullptr;
    
    // wchar_t* LPWSTR;
}
