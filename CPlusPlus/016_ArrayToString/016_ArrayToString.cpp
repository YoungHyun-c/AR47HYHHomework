// 016_ArrayToString.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 어떤 자료형을 봤다면 그것은 추가적인 문법으로
    // 모두다 배열이 될 수 있습니다.

    int Value = 10;


    {
        // 자동으로 전부다 0 으로 초기화 됩니다.
        int ArrValue[5] = {};

        int ArrValue2[5] = { 0, };

        bool ArrValue1[5] = {};
        
        bool ArrValue22[5] = { true, };

        // 제로 베이스 이기 때문에
        //                   1  2  3  4  5
        int ArrValue3[5] = { 0, 1, 2, 3, 4/*5*/ };

        int ArrValue4[5] = { 2, };

        int a = 0;
    }

    {
        // 초기화 제발 부탁드립니다.
        int ArrValue[5];
        int a = 0;
    }

    {
        // 자동으로 전부다 0 으로 초기화 됩니다.
        bool ArrValue[5] = {};
        
        bool ArrValue2[5] = { 0, };
        
        bool ArrValue1[5] = {};

        bool ArrValue22[5] = { true, };

        // 제로 베이스 이기 때문에
        //                   1  2  3  4  5
        bool ArrValue3[5] = { false, true, true, true, true/*5*/ };

        bool ArrValue4[5] = { 2, };

        int a = 0;
    }
    // 문법적으로 정해졌다. 문자의 배열은 축약형 표현을 사용할 수 있습니다.
    // 추가적인 규칙이 있습니다.
    {
        char ArrValue1[5] = { 'a', 'b', 'c'};
        char ArrValue2[5] = "abc";
        bool a = 0;

        // random index 연산자
        // 모든 이름은 시작위치를 표현하게 됩니다.
        // => 자료형을 선언하고 그 뒤에 이름을 붙였어
        // []  <= 랜덤인덱스 연산자
        ArrValue2[0];

        // V <= 이런 이름은 무조건 메모리의 시작 위치를 표현하게 됩니다.
        char V;
        // V[0] 이건 안됨
        
        // 배열의 경우에는 랜덤인덱스 연산자를 통해서
        // ArrValue2 100번지라고 하면
        ArrValue2[0];
        // ArrValue2[정수]
        // ArrValue2 시작위치 + (sizeof(자료형) * 정수)
        // 위치의 데이터에 접근하겠다는 뜻이 됩니다.
        
        //ex)
        ArrValue2[3];
        // char ArrValue2 == 100번지
        // 100 + sizeof(char) * 3
        // 100 + 1 * 3
        // 103

        // int ArrValueInt[3] == 100번지
        // 100 + sizeof(int) * 3
        // 100 + 4 * 3
        // 103

        char ArrTest[10] = "abcdefghi";
        char GetValue = ArrTest[6];

    }
}
