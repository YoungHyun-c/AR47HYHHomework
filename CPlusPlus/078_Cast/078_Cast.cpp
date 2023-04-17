// 078_Cast.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class A
{
    virtual void Test(){}
};

class B : public A
{
    int Hp;
    int Att;
    // virtual void Test() {}
};

class C : public A
{
    int Hp;
    int Def;
    // virtual void Test() {}
};

int main()
{
    // static_cast 메모리 크기만 다른 값 대 값 형변환에 사용된다.
    {
        short Test = 20;
        // c스타일 형변환
        int Value = (int)Test;
        //c++ 에서는 별로 권장하지 않는 방식이다.

        // 메모리 크기만 다를뿐 서로 값 형태

        Value = static_cast<int>(Test);
        Value = /*static_cast<int>(*/Test/*)*/;
        Value = (int)Test; //<= static_cast<int>로 바꿉니다.
        
        // Value = static_cast<int>(Test);
        // 형변환이 이루어지고 있다는 것을 눈에 보여주기 위해 앞에 붙여준다.

        Value = (int)Test; // <= static_cast<int>로 다시 바뀌어 얘는 컴파일시 더 오래걸린다.
    }

    // reinterpret_cast는
    // 정수를 포인터로 포인터를 정수로 변경할 때 사용한다.
    {
        int Value = 3;

        int* Ptr = &Value;

        __int64 Address = reinterpret_cast<__int64>(Ptr);

        __int64 Address3 = (__int64)Ptr;

        int* Ptr2 = reinterpret_cast<int*>(Address);
    }

    // dynamic_cast
    // 부모 자식 구조에서 사용된다. 다운캐스팅에 이용된다.
    {
        // 가상함수 테이블을 참조해서 다운캐스팅이 가능한지를 알아봐준다.
        //A NewA;
        //B NewB;

        //A* PtrA = &NewA;
        //B* PtrB = &NewB;

        {
            A* PtrB = new B();
            B* Test = dynamic_cast<B*>(PtrB);
            int a = 0;
        }

        {
            // 다운캐스팅을 안전하게 할 수 있게 도와준다.
            A* PtrC = new C();
            B* Test = dynamic_cast<B*>(PtrC);

            // 이러면 심각한 오류가 생길 수 있다. <- B가 C가 된것.
            B* Test1 = (B*)PtrC;
            int a = 0;
        }

        // const_cast 존재만 한다. 굳이 써야 되나 싶다.
        {

        }
    }
}
