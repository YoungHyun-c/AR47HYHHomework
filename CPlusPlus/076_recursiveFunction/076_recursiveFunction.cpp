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
    // 꼬리재귀는 ?
    return Test();
}


int main()
{
    std::cout << "Hello World!\n";
}

