// 021_Pointer001.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int Value0 = 0;
	int Value1 = 0;

	// &r가 특정 변수의 메모리 영역의 주소값을 끌어내는 것이다.
	int* ValuePtr0 = &Value0;
	int* ValuePtr1 = &Value1;

	{
		int Arr[3] = {};

		// Arr n 번지라면
		// n 번지 + sizeof(int) * 정수
		int* ValuePtr0 = &Arr[0];
		int* ValuePtr2 = &Arr[1];
		int* ValuePtr1 = &Arr[2];
	}
}
