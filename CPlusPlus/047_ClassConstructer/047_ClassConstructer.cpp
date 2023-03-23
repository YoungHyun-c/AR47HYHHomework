// 047_ClassConstructer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Weapon
{
public:
    int Att = 200;

public:
    Weapon()
    {
        int a = 0;
    }
};

class Potion
{
public:
    int Heal = 100;

public:
    Potion()
    {
        int a = 0;
    }
};

class Player
{
public:
    // 리터럴 초기화라고 부르는 초기화 방식을 이용할 수 있다.
    // 11 이전에는 안됐던 방식이고 회사에서 사용하지 않을 수 도 있습니다.
    int Hp = 20;
    int MaxAtt = 20;
    int MinAtt = 20;
    int PDef = 20;
    int MDef = 20;
    int Crit = 20;
    Weapon PlayerWeapon = Weapon();
    Potion PlayerPotion = Potion();

    void TestFuction()
    {

    }

public:
    // 무조건 클래스 이름과 완전히 동일해야 합니다
    // 리턴값이 없다. => 리턴값이 그 클래스의 객체이기 때문
    // 객체없이 호출가능하다. => 일반적인 클래스의 함수는 무조건 객체가 필요한다.
    //                         객체를 만들어내야하는 함수가 객체를 필요로하면 모순

    // 멤버 이니셜라이저라는 문법을 사용할 수 있습니다.
    // 리터럴 초기화 1순위 와 멤버 이니셜 라이저가 2순위 이기 때문에 멤버이니셜라이저의 값이 최종 적용된다.
    // 생성과 대입의 차이는 프로그래머들이 정말 꼼꼼하게 신경쓰는 차이이기 때문에
    ///*Player*/Player(int Value, int Value1)
    //    : Hp(30)
    //    ,MaxAtt(30)
    //    ,MinAtt(30)
    //    ,PDef(30)
    //    ,MDef(30)
    //    ,Crit(30)
    //{
    //    // 이건 대입이라고 부릅니다
    //    Hp = 10;
    //}
};

void Test(const Player& _Player)
{

}


int main()
{
    // 생성자는 기본적으로 함수로 인식됩니다.
    
    // 클래스를 내가 만들었는데
    // 내가 정의하지 않는 행동을 할 수 있다면 그건 컴파일러가 그렇게 한거다.
    // 그리고 그건 내눈에 생략된거다.
    //Player NewPlayer = Player(20 , 30);

    // 이걸 리스트 이니셜라이저 문법이라고 합니다.
    Player NewPlayer = { 20, 30 };

    // int Value = int(20);

    // 아래와 같이 사용할 수 없다.
    // Player::TestFuction();
    
    // 전역함수처럼 그냥 함수쓰듯이 사용할 수 는 없어요.
    // 클래스의 멤버함수는 무조건 적으로 객체를 필요로 합니다.
    // 하지만 이 제약에서 벗어난 함수가 2종이 존재하는데
    // 그 중 1종이 생성자이다.
    // 생성자는 객체를 만들어내는 전역함수를 의미합니다.
    NewPlayer.TestFuction();

    // 닭이 먼저냐 달걀이 먼저냐 문제가 생긴다.

}

 