// 022_PointerOperator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void ValueChangePtr(int* Ptr)
{
    *Ptr = 0;
}

void ValueChangeValue(int* Ptr)
{
    *Ptr = 0;
}

int main()
{
    // 100번지면
    int Value = 10;

    int* Ptr = &Value;

    // 그 위치의 메모리를 수정하겠다.
    // 포인터 변수의 앞에 *을 붙이는 연산자는
    // *Ptr 100번지의 값을 사용하겠다.
    *Ptr = 20;

    ValueChangePtr(&Value);
    ValueChangeValue(&Value);

    int a = 0;
}
