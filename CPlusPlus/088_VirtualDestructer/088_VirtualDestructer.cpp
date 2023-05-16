// 088_VirtualDestructer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class A
{
public:
    virtual void Function()
    {

    }

    virtual void Test()
    {
        std::cout << "Test" << std::endl;
    }

    A()
    {

    }
    ~A()
    {

    }
    
    // 소멸자의 특수성
    // ~컴파일러는 소멸자의 이름을 ~로 생각한다.
    // virtual 을 붙이지 않았을때는 일반적인 함수와 동일하게 판단합니다.
};

class B : public A
{
public:
    void Test()
    {
        std::cout << "Test" << std::endl;
    }

    B()
    {

    }
    ~B()
    {

    }

};

// A 생성자 => B 생성자 => B 소멸자 => A 소멸자 순서로 되어야 되지만
// A 생성자 => B 생성자 => A 소멸자 로 끝남.


int main()
{
    A* newA = new B();

    // B::Test(B* const this)
    NewA->B::Test();

    // A::Test(A* const this)
    //NewA->A::Test(NewA);

    //NewA->B::Test();

    delete NewA;

}
