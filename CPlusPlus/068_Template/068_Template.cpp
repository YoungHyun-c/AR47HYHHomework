// 068_Template.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 자료형을 변수처럼.
// 모든 코드는 완전히 동일한데 자료형만 변수처럼 사용하고 싶을 때
// 사용하는 문법이 바로 template 입니다.
// 이 탬플릿이란 문법은
// 특정 함수나 특정 클래스에서 자료형만 바뀐 완전히 동일한 함수나 완전히 동일한 클래스를
// 만들고 싶을 때 사용하는 문법입니다.


template<typename DataType>
void Function(int _Value)
{
    printf_s("%d\n", _Value);
}

void Function(short _Value)
{
    printf_s("%d\n", _Value);
}

int main()
{
 

    // 템플릿 함수의 경우
    {
        // 함수의 경우 인자추론을 할수가 있다.
        // 그 상황에 맞춰서
        //Function<int>(100);
        //Function<char>('1');

        Function/*<int>*/(100);
    }
}

