// 076_recursiveFunction.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 재귀함수
// 스택 오버 플로우란, 스택이 넘쳐서 힙을 침범하였다는 뜻.
// 그래서 스택의 양을 신경써야된다.
// 보통 스택메모리를 다 쓸일은 없어서 다 썼다는 것은 뭔가 잘 못 됐다는 것이다.

int Count = 0;

void Test()
{
    int ArrValue[100] = { Count };

    printf_s("%d %d\n", Count, ArrValue[0]);
    ++Count;

    // 스택 오버플로우를 주의해야한다.
    if (100000 <= Count) // 제한을 높게 잡아봤자 소용없다.
    {
        return;
    }

    // 꼬리재귀는 ?
    return Test();
}

int Test2()
{
    // 리턴에다가 재귀를 거는 경우에는
    // 꼬리재귀라는 것이 될 가능성이 생기고
    // 꼬리재귀를 할줄안다 모른다는 별로 중요한 내용은 아니다.
    
    if (true)
    {
        return 20;
    }

    // 리턴과 동시에
    return Test2();
}


int main()
{
    Test();
}

