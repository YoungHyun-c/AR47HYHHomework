// 054_FunctionOverloading.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Function()
{
    printf_s("void Function()");
}

// Functionint
void Function(int _Value)
{
    printf_s("void Function(int_Value)");
}

// 리턴값은 함수오버로딩에 영향을 주지 않는다.

// 오버로딩이란 함수의 이름이 같아보여도, 뒤에 있는 자료형이랑 병합하게 되면 함수의 이름이 다르게 된다.
// 함수라고 불리는 녀석들에게는 모두 적용된다.

class Player
{
public:
    Player()
    {
    }
    Player(int Value0)
    {
    }
};

int main()
{
    Function();
    Function(10);
}
