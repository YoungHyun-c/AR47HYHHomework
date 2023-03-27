// 052_ClassConst.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{
public:
    
    // 멤버함수뒤에는 const를 붙일 수 있다.

    // 이 함수를 호출한다고 해도
    // 이 클래스를 통해서 만들어진 객체는 변화하지 않을거야.
    void PrintStatus(/*Player* const this*/) const // => const Player* const this
    {
        this;
        // 멤버변수 뒤에 const를 사용하면 멤버변수를 고칠 수 없다. 이렇게 이해하지말고,
        this->Att += 100;

        printf_s("플레이어의 능력치 ---------------------\n");

        printf_s("공격력 : %d ---------------------\n");

        printf_s("체  력 : %d ---------------------\n");

        printf_s("-------------------------------------\n");

    }
};


int main()
{
    
}

