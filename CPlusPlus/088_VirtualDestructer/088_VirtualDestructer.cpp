// 088_VirtualDestructer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class A
{
public:
    virtual void Function()
    {

    }

    A()
    {

    }
    ~A()
    {

    }
};

class B : public A
{

};

// A 생성자 => B 생성자 => B 소멸자 => A 소멸자 순서로 되어야 되지만
// A 생성자 => B 생성자 => A 소멸자 로 끝남.




int main()
{
    A* newA = new B();
}
