// 056_ClassDeclaration.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 순환 참조라고 합니다.
// 주의) 조심해야됨
// 순환참조를 해결하는 방법은
// 선언과 구현의 철저한 분리 입니다.

// Monster라는 클래스가 있을거야 믿고 써
// 내용은 나중에 알려줄께.
// 클래스 전방선언이라고 부릅니다.
class Monster;
class Player
{
public:
    int Hp = 100;
    int Att = 10;
public:
    // 이건 몬스터 가 있을거야.. 라는 뜻이 아니고
    // 몬스터를 알아야 한다.
    // 
    void Att(Monster* _Monster);

    // 내부에서 Monster의 내용을 사용하게 되면
    // 전방선언으로도 해결이 안된다.
    // Monster가 Hp를 가지고 있는지 알아야겠다. <= 컴파일러가.
    
    
    // 전방선언을 해도 해결이 되는 경우가 존재한다.
    // 그냥 8바이트 주소값을 받아서 외부로 8바이트 주소값을 리턴하기만 하면 되는 함수다.
    // 즉 Monster 함수 내부의 멤버변수나 멤버함수를 사용하지 않았기 때문에 필요가 없다.
    Monster* Test(Monster* _NewMonster)
    {
        return _NewMonster;
    }

    // 함수의 실행메모리를 정리하려면? 함수의 인자의 크기를 알아야합니다.
    // Monster의 크기를 알아야 한다.
    // Monster의 크기는 뭐에 의해서 결정 되죠?
    // 멤버변수들의 개수와 종류로 결정된다. (가평으로 쓰니 함수가 얼마만큼의 값(주소)을 사용해야 될지 몰라서 실행이 안됨)
    //Monster Test2(Monster _NewMonster)
    //{
    //    return _NewMonster;
    //}
};

class Monster
{
public:
    int Att = 10;
    int Hp = 100;
public:
    void Damage(Player* _Player)
    {

    }
};

int main()
{
    std::cout << "Hello World!\n";
}

