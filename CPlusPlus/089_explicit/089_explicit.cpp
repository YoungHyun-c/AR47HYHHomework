// 089_explicit.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 명백하게 초기화하기.

struct A
{
    A(int) {}
};

struct B
{
    explicit B(int) {}
};

int main()
{
    A New = 1;
    B New = 1;
}

