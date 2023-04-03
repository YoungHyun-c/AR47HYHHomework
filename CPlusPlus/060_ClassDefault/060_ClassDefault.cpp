// 060_ClassDefault.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class A
{
// private: // 디폴트 접근제한 지정자
    int A;

};


int main()
{
    // 디폴트 생성자.
    A NewA0 = A();
}
