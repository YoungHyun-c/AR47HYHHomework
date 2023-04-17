// 079_BitTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 1
    int Value = 0b00000000000000000000000000000001;

    int* Ptr = &Value;

    char* ChPtr = reinterpret_cast<char*>(Ptr);


    // 이 현상은 무엇인지. 빅엔디언
    // 가장 중요한(큰) 바이트는 왼쪽 끝에 있는다.
    //      Test0    Test1    Test2    Test3
    //0b 00000000 00000000 00000000 00000001

    //intel은 중요한(큰) 바이트를 오른쪽에 위치한다 리틀엔디언
    //      Test0    Test1    Test2    Test3
    //0b 00000001 00000000 00000000 00000000
    char Test0 = ChPtr[0];
    char Test1 = ChPtr[1];
    char Test2 = ChPtr[2];
    char Test3 = ChPtr[3];

    int a = 0;


    // 빅 엔디안, 리틀 엔디안
    // Big-Endian -> 가장 중요한 바이트는 단어의 왼쪽 끝에 있습니다. 
    // 
    // 
    // Little-Endian-> 가장 중요한 바이트는 단어의 오른쪽 끝에 있습니다. intel 바이트 순서
    // https://learn.microsoft.com/ko-kr/cpp/mfc/windows-sockets-byte-ordering?view=msvc-170

}

