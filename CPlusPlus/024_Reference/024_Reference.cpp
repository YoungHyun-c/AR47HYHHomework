// 024_Reference.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void EquipPtr(int* _Ptr)
{
    *_Ptr = 300;
}

void EquipRef(int& _Ref)
{
    _Ref = 200;
}

void TestFunction(const int& _Ref)
{

}


int main()
{
    // 이 레퍼런스라는 의미가

    int Value0 = 10;
    int Value1 = 20;

    // 대부분의 언어에서 참조라는 의미는
    // => 특정 메모리영역의 위치를 가리킨다.

    // 포인터형이라고 합니다.
    // 포인터는 언제든지 자신이 참조(가리킨다) 대상을 바꿀 수 있다.
    int* Ptr = &Value0;
    Ptr = &Value1;
    Ptr = &Value0;

    int* Ptr = &Value0;
    *Ptr = 100;
    *Ptr = Value1;
    // 위와 하는 동작은 같음.
    int& Ref = Value0;
    Ref = 100; // =< Value0 도 100
    Ref = Value1;

    int Value = sizeof(Ref);

    // 참조형이라고 합니다.
    // 무조건 누군가를 가리켜야 합니다.
    // int& Ref; -> 오답
    int& Ref = Value0;
    // *Ptr; <= 항상 왼쪽처럼 값을 끌어내서 사용하는 포인터이다.
    // 특정이름의 변수가 있다고 쳤을 때
    // 이제부터 Value0이라는 애를 이제부터 Ref라고도 부를께.
    // 한번 초기화시 참조한 메모리 영역을 바꿀수가 없어요.

    Ref = 100; // =< Value0 도 100
    Ref = Value1;

    // 레퍼런스는 그게 패시브


    // 포인터는 비어있는 값을 넣어줄 수 있고, 레퍼런스는 비울 수 없음, 그리고 Const 상수임
    EquipPtr(nullptr);

    int ItemEquip = 0;
    EquipRef(10); // EquipRef(ItemEquip);

    TestFunction(2000);
}

