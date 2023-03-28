// 055_Declaration.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 구현이라고 하는 문법은
// 선언과 함수체를 같이 놓은 문법을 구현된 함수라고 부릅니다.
// 함수 선언만 따로 놓을 수 가 있다.


// Tip 외부기호가 뜨면, 오타가 떴거나, 구현을 안했다고 볼 수 있다.
// 이러이러한 함수가 있을거야
// 일단 믿고 호출하고 컴파일해줘.
// 구현은 분명히 나중에 있을거야.
void Function0(/*int _Value*/);
void Function1();

// 전역함수의 경우에는 선언은 몇개를 해도 상관없다.
void Function2();
void Function2();
void Function2();
void Function2();
void Function2();

// 클래스는 문법상 선언과 구현이 내부에서 혼재되어 있을수도 있고
// 아닐수도 있는 특이한 놈이라서
// 클래스 자체는 2개를 선언할 수는 없습니다.
class Player
{
public:
    // 클래스 내부의 함수는 별개로 선언만 놔둘 수 있다.
    Player();

};

Player::Player()
{

}

// 멤버함수의 FullName은 무조건
// 클래스명:: 함수이름 으로 인식해야 합니다.


// 함수 선언
void Function()
// 함수체
{

}


int main()
{
    
}

