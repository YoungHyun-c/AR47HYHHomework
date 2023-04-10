// 073_Enum.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 0 전사
// 1 마법사
// 2 궁수
// 3 성기사

// 컴파일 되면 이녀석은 int로 변형되게 됩니다.
//enum GameJobType
//{
//    Fighter,    // = 0
//    Mage,       // = 1
//    Archer,     // = 2
//    paladin     // = 3
//};

// 좀더 형을 따진다.
enum class GameJobType
{
    Fighter = 5,   // = 5
    Mage,       // = 6
    Archer,     // = 7
    paladin     // = 8

    // test1 = 5 지정할 수 도 있고,
    // test2   그 다음에 있는 것은 6이 됨.
};

class FightUnit
{
    // 직업이 어떤건지 알고 싶어서
    GameJobType JobType;

public:
    void SetJobType(GameJobType _Type)
    {
        JobType = _Type;
    }

};

int main()
{
    // 직업이라는게 있다고 쳤을 때.
    FightUnit NewUnit;

    // 명시적인것을 더 좋아해서 그렇다.
    NewUnit.SetJobType(GameJobType::Archer);

    int value = (int)GameJobType::Archer;

    int a = 0;
}

