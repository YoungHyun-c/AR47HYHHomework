// 046_BytePadding.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// short 2바이트 정수형;

class Player
{
public:
    int Hp;         //4
    short Value3;   //4
    int Value4;     //4
    short Value9;   //4
    char TTT;

    // 8바이트 이하 가장큰 바이트의 자료형을 찾아요.
    // 4바이트
    // 먼저 4바이트를 할당햇다고 쳐보자
    // 딱 맞거나 들어갈 수 있다면 그대로 픽스
    // 4바이트 할당한다.
    // char
    // 8바이트
};

int main()
{
    // 주소값 할당이 어떻게 됐는지 확인해보기.

    Player NewPlayer;
    
    int* Ptr0 = &NewPlayer.Hp;
    short* Ptr1 = &NewPlayer.Value3;
    int* Ptr2 = &NewPlayer.Value4;
    short* Ptr3 = &NewPlayer.Value9;
    char* Ptr4 = &NewPlayer.TTT;

   
    int Size = sizeof(Player);

    printf_s("%d", Size);
    
}

