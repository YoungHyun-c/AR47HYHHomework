// 073_Enum.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 0 전사
// 1 마법사
// 2 궁수
// 3 성기사

// 좀더 형을 따진다.
// 암시적 형변환이 다 막혔어요.
// 이녀석은 그냥 int가 될 수 없어요.
enum GameJobType
{
    Fighter,    // = 0
    Mage,       // = 1
    Archer,     // = 2
    paladin     // = 3

    // test1 = 5 지정할 수 도 있고,
    // test2   그 다음에 있는 것은 6이 됨.
};

class FightUnit
{
    // 직업이 어떤건지 알고 싶어서
    int JobType;

    void SetJobType(GameJobType _Type)
    {
        JobType = _Type;
    }

};

int main()
{
    FightUnit NewUnit;

    NewUnit.SetJobType(GameJobType::Archer);
}

