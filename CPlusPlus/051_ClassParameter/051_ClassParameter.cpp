// 051_ClassParameter.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{
public:
    int Value0;
    int Value1;
    int Value2;
    int Value3;
    int Value4;
    int Value5;
    int Value6;
    int Value7;
};

// 플레이어가 잠깐이라도 1마리라도 없을 가능성이 있다면
void StatusRenderPtr(const Player* _Player)
{
    // 방어코드라고 합니다.
    if (nullptr == _Player)
    {
        return;
    }

    // _Player -> Value0 = 20;
}

// 플레이어가 없어질 일이 없다면.
void StatusRenderRef(const Player& _Player)
{

}

int Value;

Player NewPlayer;

int ReturnFunction()
{
    return 10;
}

int& ReturnFunctionRef()
{
    int Value = 20;

    return Value;
}

Player NewPlayer;

void FunctionTest(int* _Ptr)
{
    NewPlayer.Value0 = 20;

    return;
}

int main()
{
    int TestValue = 20;

    FunctionTest(&TestValue);

    ReturnFunctionRef() = 20;

    if (ReturnFunction())
    {

    }

    // 접근해서 수정할 수 없다.
    int Value = ReturnFunction();
    if (Value)
    {

    }
    int Value = sizeof(Player);

}
