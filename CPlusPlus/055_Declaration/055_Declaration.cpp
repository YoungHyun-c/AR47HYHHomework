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
class Monster;
class Player
{
public:
    // static 멤버 변수의 경우에는 const가 붙으면 구현체를 따로 둘 수 없어요.
    // 리터럴 초기화가 가능하다.
    // 상수로 생각해서 코드영역에 위치시키기 때문이다.
    // 앞으로 player::GValue0 은 다 0으로 바꾼다.

    // 어차피 내가 지금 읽었을때 0 이라는걸 읽었으니 이건 앞으로 절대 안바뀔거잖아?
    // const고, 그러니까 앞으로 GValue0 이 보이면 그냥 0인거네
    // 그럼 컴파일러인 나는 다 exe 파일 만들 때 Gvalue0 이 보이면 다 0으로 만들어버려야지.
    static const int GValue0 = 0;

    // static 멤버 변수의 경우에는 const가 안붙으면 이녀석은 데이터영역에 위치하게 되고,
    // 선언으로만 치게 되고 리터럴 초기화가 불가능해진다.
    // player에 속한 static 전역변수인 GValue1가 있을꺼야..
    static int GValue1 /*=0*/;

private:
    // static함수의 경우 멤버함수와 동일한 규칙을 적용한다.
    static void GlobalFunction()
    {

    }
public:
    // 클래스 내부에서 구현을 해버리면
    // 이 함수는 구현까지 끝난 것으로 보고
    // 외부에서 구현해주면 똑같은 함수르 2개 구현한 것으로 봅니다.
    void StatucRender()
    {

    }


    // 클래스 내부의 함수는 별개로 선언만 놔둘 수 있다.
    void Damage();

public:
    // 클래스내부의 함수는 별개로 선언만 놔둘 수 있다.
    Player();

    Monster* NewMonster;

};

// 이게 실체라는 겁니다.
// const가 아닌 static 데이터영역에 마련되고 문법적으로 실체를 마련해줘야 한다는겁니다.
// 그놈이 여기에 있어
int Player::GValue1 = 10;

// const int Player::Value = 0;

//void Player::StatusRender()
//{
//
//}

// 멤버함수의 FullName은 무조건
// 클래스명:: 함수이름 으로 인식해야 합니다.
void Player::Damage()
{

}

Player::Player()
{

}


class Monster
{

};

int main()
{
    Player::GValue1 = 20;

    Function0();

    Player::GValue1 = 30;
    Function1();
    Function2();


}

void Function1()
{

}
void Function2()
{

}
void Function0()
{

}




// 함수 선언
void Function()
// 함수체
{

}


