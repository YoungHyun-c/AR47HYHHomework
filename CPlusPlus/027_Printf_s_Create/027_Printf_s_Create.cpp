// 027_Printf_s_Create.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void MyPrintf(const char* const _ptr)
{
	int Count = 0;
	while (0 != _ptr[Count])
	{
		char Ch = _ptr[Count];

		putchar(Ch);
		Count += 1;
	}
}

int main()
{
	// char Arr[10] = {};

	const char ArrTest[2] = {'a', 'b'};

	// const char[11]
	//const char* Ptr = "test Print";
	//MyPrintf("Ptr");

	// const char* Ptr = "test Print";
	const char* Ptr = ArrTest;
	// 포인터 문법중 하나인
	// random index access
	//Ptr[0];
	char ch0 = Ptr[0];
	char ch1 = Ptr[1];
	char ch2 = Ptr[2];
	char ch3 = Ptr[3];
	char ch4 = Ptr[4];
	char ch5 = Ptr[5];
	char ch6 = Ptr[6];
	char ch7 = Ptr[7];
	char ch8 = Ptr[8];
	char ch9 = Ptr[9];
	char ch10 = Ptr[10];
	char ch11 = Ptr[11];
	char ch12 = Ptr[12];
	char ch13 = Ptr[13];


	MyPrintf("abcdef");

}

