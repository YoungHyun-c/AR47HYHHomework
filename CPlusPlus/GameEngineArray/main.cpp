﻿// GameEngineArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "GameEngineArray.h"

int main()
{
    // 외워야 될것.
    // 윈도우 전용 삭제하지 않은 힙 메모리 출력에 표시.
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    GameEngineArray NewArr(0);


    {
        // 면접에서 가장 많이 물어보는것 동적 배열, 자료구조
        
        // 컴파일러에서 지원하는 Arr형에는
        // operator = 함수를 구현하지 않았다.
        int Arr0[10] = { 0, 1, 2, 3, 4, 5, 6 };
        int Arr1[10];

        // Arr1 = Arr0;
    }

    {
        //              600번지
        // int* ArrPtr = new int[20]
        GameEngineArray Array0(10);

        for (size_t i = 0; i < Array0.Count(); i++)
        {
            Array0[i] = i;
        }

        //              700번지
        // ArrPtr = new int [10]
        // 숙제 1 기존의 데이터를 보존하는 것을 말하는 것이고.
        // 숙제 2 줄어들든 커지든 데이터는 보존되어야한다.
        // Array0.Resize(5);
        Array0.ReSize(15);

        // Array0.ReSize(15);

        //printf_s("1번 숙제 ReSize\n");
        for (size_t i = 0; i < Array0.Count(); i++)
        {
            printf_s("%d\n", Array0[i]);
        }

        //GameEngineArray Array1;
        //Array0 = Array1;
    }

    {
        GameEngineArray Array0(10);
        GameEngineArray Array1(5);

        // 숙제3 왜 터지는지 이해하고 고쳐라.
        //Array1 = Array0;
    }

    {
        GameEngineArray Array0(10);
        GameEngineArray Array1(5);

        for (size_t i = 0; i < Array0.Count(); i++)
        {
            Array0[i] = i;
        }
        

        // 숙제4 완전히 동일한 배열이 되게 만들어주세요.
        // Array1 10개 짜리 배열이 되고 0 1 2 3 4 5 6 7 8 9
        Array1 = Array0;

        printf_s("4번 숙제 '='\n");
        for (size_t i = 0; i < Array1.Count(); i++)
        {
            printf_s("%d\n", Array1[i]);
        }
    }
}

