// 065_Heap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <crtdbg.h>

class Monster
{

};

int main()
{
    // 힙은 자동으로 안지워진다.
    // 남아 있는 메모리 확인하는 방법
    // 외워야 되는 것.
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


    // new 한번이라도 쓰면 delete 하는 습관을 가져야 된다.
    Monster* PtrMonster = new Monster();

    while (true)
    {

    }

    // 강제 종료의 경우에는 어쩔수없이 릭이 남을 수 있음.
    delete PtrMonster;

    // 연산자    자료형  생성자
    // new      자료형    (); 

    // 힙은 가장 자유롭게 메모리를 할당할 수 있는 영역입니다.

    int Value = 20;

    // 받지 않으면 힙에 만들어진 메모리를 잃어버리므로
    // 무조건 받아야한다.
    // int* Ptr = new int();
    // new int(); // 이걸 잃어버린 힙. 사용할 방법이 없음. 이런건 사용하면 안된다.

    // 무조건 받아야한다.
    int* Ptr = new int(); // => int* Ptr = /*operator new()*/new int();

    *Ptr = 20;

    // 힙영역을 할당하고 지우지 않으면
    // Leck 혹은 메모리 누수라고 부르는데.
    // 그것때문에 프로그램을 종료해도 느려지는 경우는 없다.

    // 내 게임이 느려지지 않게 하기 위해선 무조건 지워줘야 합니다.
    delete Ptr;
    // 위의 주소값을 받지 않은 녀석은 절대로 지울 수 없다.
}
