// 045_NameSpace.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

namespace AProgramer
{
    class Item
    {

    };
}

namespace BProgramer
{
    class Item
    {

    };
    namespace UseEl
    {
    }
}

namespace BProgramer
{
    class Player
    {
    };
}

namespace std
{
    void TestFunction()
    {

    }
}

// 실제적으로 플레이어의 스펙이나 만들어질대의 내용들을 코드영역에 들어가 있게 된다.
// 플레이어가 만들어지면 내부에 int Att를 하나 가지고 있어햐 해...
class Player
{
public:
    int Att;
};

class Monster
{
public:
    int Att;
};

void Test()
{
    int Att;
};

// 절대로 사용하지 않습니다.
using namespace AProgramer;
// Namespace를 생략할 수 있따면 생략해라.
using namespace BProgramer;

int main()
{
    // Player::Att;
    // Monster::Att;

    // ::

    //BProgramer::Item NewItemB;
    //AProgramer::Item NewItemA;

    BProgramer::Item NewItemA;
    AProgramer::Item NewItemB;

    int Value = 20;

    // 사용금지
    if (true)
        printf_s("aaaa");

    // for (size_t i = 0; i <length; i++){
    //}

    // std c++ 의 스탠다드의 약어
    // c++ 공인이다.
    // c++ 만든 사람들이 품질 보증한 객체 혹은 클래스 혹은 모든 코드적 요소들

    // std::TestFuction();


    // 500 번지의 플레이어를 대표하는 NewPlayer
    Player NewPlayer;

    // 일반적으로 멤버변수일경우에는 아무런 의미도 없어요.
    // Player::Hp;

}
