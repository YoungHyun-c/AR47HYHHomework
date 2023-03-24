// 051_ClassParameter.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{

};

// 플레이어가 잠깐이라도 1마리라도 없을 가능성이 있다면
void StatusRenderPtr(const Player* _Player)
{
    // 방어코드라고 합니다.
    if (nullptr == _Player)
    {
        return;
    }
}

// 플레이어가 없어질 일이 없다면.
void StatusRenderRef(const Player& _Player)
{

}



int main()
{
    
}
