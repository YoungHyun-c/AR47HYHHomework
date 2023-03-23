﻿// constEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 200바이트 있는 4바이트짜리 메모리에 20이 들어있다.
    const int Value = 20;
    // 200바이트 있는 4바이트 메모리를 수정할 수 없다.

    // 200바이트의 존재하는 4바이트 메모리에 접근하겠다.
    // Value = 30;

    int Value1 = 20;
    int Value2 = 10;

    // 300바이트에 존재하는 8바이트 크기의 주소값을 바꿀 수 없다.
    // 8바이트의 주소값이 가리키는 곳의 값을 바꿀 수 없다.
    const int* const ValuePtr = &Value1;

    // 300바이트에 존재하는 8바이트 크기의 주소값을 바꿀 수 있다.
    // 8바이트의 주소값이 가리키는 곳의 값을 바꿀 수 있다.
    //int* ValuePtr = &Value1;
    //ValuePtr = &Value2;
    //*ValuePtr = 30;
    //int a = 0;


    // 300바이트에 존재하는 8바이트 크기의 주소값을 바꿀 수 있다.
    // 8바이트의 주소값이 가리키는 곳의 값을 바꿀 수 없다.
    //const int* ValuePtr = &Value1;
    //ValuePtr = &Value2;
    //*ValuePtr = 30;
    //int a = 0;


    // 300바이트에 존재하는 8바이트 크기의 주소값을 바꿀 수 없다.
    // 8바이트의 주소값이 가리키는 곳의 값을 바꿀 수 있다.
    //int* const ValuePtr = &Value1;
    //ValuePtr = 30;
    //int a = 0;

    // 300바이트에 존재하는 8바이트 크기의 주소값을 바꿀 수 없다.
    // 8바이트의 주소값이 가리키는 곳의 값을 바꿀 수 없다.
    //const int* const ValuePtr = &Value1;


}

