// 074_InnerClass.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

template<typename DataType>
class Test
{
public:
    // 이걸 이너클래스 문법이라고 한다.
    // 안에 또다른 클래스를 만드는 것(네임스페이스) Test와 publicInner는 별개.
    // Test::publicInner
    class publicInner
    {

    };
};

int main()
{
    
}

