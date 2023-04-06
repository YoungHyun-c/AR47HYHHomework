// 071_Define.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//#define TEN 10; // 뒤에 ; 붙이면 안됨.
// TEN * TEN;
// 10; * 10;


// 함수형으로 사용하는 것
// 매크로함수라고 하는데
// 매크로 함수는 무조건 그냥 복붙을 함.   PLUS("aaaa") => "aaaa" + "aaaa" 이럼 안되듯이
// define은 무조건 치환 or 복붙.
#define PLUS(Value) Value + Value

// 함수의 경우에는 일반적으로 형에 대한 검사나
// 자료형에 의한 컴파일 체크를 하지만.


int main()
{
    
}
