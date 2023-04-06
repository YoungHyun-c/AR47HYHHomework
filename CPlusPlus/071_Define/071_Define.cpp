// 071_Define.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <assert.h>

#define TEN 10

//#define TEN 10; // 뒤에 ; 붙이면 안됨.
// TEN * TEN;
// 10; * 10;


// 함수형으로 사용하는 것
// 매크로함수라고 하는데
// 매크로 함수는 무조건 그냥 복붙을 함.   PLUS("aaaa") => "aaaa" + "aaaa" 이럼 안되듯이
// define은 무조건 치환 or 복붙.
#define PLUS(Value1, Value2) Value1 + Value2
#define MYTEST(Value1) Value1 = 0;

// 함수의 경우에는 일반적으로 형에 대한 검사나
// 자료형에 의한 컴파일 체크를 하지만.
inline void Test(int _Value)
{
    _Value = 0;
    assert(false);
}

int main()
{
    int* Ptr;

    MYTEST(Ptr);

    //Test(Ptr);

    // 대부분 디파인 보다 인라인을 사용하라고 합니다.
    // _Value = 20;

    // PLUS("aaaaa");
    // "aaaaa" + "aaaaa";

    //int* Ptr;
    //Test(Ptr);

    TEN * TEN;
    // TEN * TEN;
    // 10 *  10;

}