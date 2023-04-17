// 078_Cast.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // static_cast
    {
        short Test = 20;
        int Value = (int)Test;
        //c++ 에서는 별로 권장하지 않는 방식이다.

        // 메모리 크기만 다를뿐 서로 값 형태

        Value = static_cast<int>(Test);
        // 형변환이 이루어지고 있다는 것을 눈에 보여주기 위해 앞에 붙여준다.

        Value = (int)Test; // <= static_cast<int>로 다시 바뀌어 얘는 컴파일시 더 오래걸린다.
    }

    // reinterpret_cast는
    // 정수를 포인터로 포인터를 정수로 변경할 때 사용한다.
}

// 이러면 심각한 오류가 생길 수 있다. <- B가 C가 된것.