﻿#include <iostream>

int main()
{
    // 00000000 00000000 00000000 00000001 
    int Value = 1;

    // 00000000 00000000 00000000 00000010
    Value = 2;

    // 2진수 표현하는 법
    Value = 0b00000000000000000000000000000001;

    //        8421
    Value = 0b1011;

    // -1
    Value = 0b11111111111111111111111111111111;
    // 2의 보수법이라는 표현을 통해서 이 논리적 허점을 피해가면서도 모든 숫자를 표현하는 방법을
    // c++의 정수에 대한 비트 표현방식으로 사용하기로 했다.
    Value = 0b10000000000000000000000000000001;

    // 음수를 표현할때는 역수를 취학기로 했다.
    Value = 0b11111111111111111111111111111110; // <- -2

    //        ▽ 맨 앞의 32번째 비트를 부호비트라고 선언하기로 했다.
    //        그러고 나서 그 부호비트가 1이면 무조건 음수로 처리하기로 하고,
    //        2의 보수법을 기본으로한 오히려 비트가 0이면 더해주는 방식으로 처리하기로 결정했다.
    Value = 0b11111111111111111111111111111011; // <- -5
}
