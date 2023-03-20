// 029_Variableargument.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int VarFunction(...)
{
	return 0;
}

//				 100	 108	 116
int TestFunction(int _1, int _2, int _3)
{
	int* ValuePtr0 = &_1;
	int* ValuePtr1 = &_2;
	//int* ValuePtr2 = &_3;

	int Value1 = ValuePtr0[0];
	int value2 = ValuePtr0[2]; // int value2 = ValuePtr1[0] 과 주소 같음.
	int value3 = ValuePtr0[4];

	// 100 + sizeof(int) * 2

	int a = 0;
	//__int64 Address0 = 0;
	//__int64 Address1 = 0;
	//__int64 Address2 = 0;

	//Address0 = (__int64)ValuePtr0;
	//Address1 = (__int64)ValuePtr1;
	//Address2 = (__int64)ValuePtr2;
	return 0;
}

// 이 인자에서 1,2,3,4,5 확인해보기.
void TestFunction2(int _1, ...)
{
	int* TestPtr = &_1;
	int cnt = 2;
	while (_1--)
	{
		int value = TestPtr[cnt];
		putchar(TestPtr[cnt]);
		cnt += 2;

		int a = 0;
	}

}

void TestFunction3(int _1, ...)
{
	int* Ptr = &_1;
	int Count = 2;
	while (_1--)
	{
		int value = Ptr[Count];
		//putchar(value);
		Count += 2;

		int a = 0;
	}
}

void TestFunction4(int _1, ...)
{
	int* Ptr = &_1;
	while (_1--)
	{
		Ptr += 2;
		int Value = *Ptr;

		int a = 0;
	}
}


int main()
{
    VarFunction(2, 3, 4, 5, 6);

    // 자료형도 상관없고, 섞을 수 도 있다.
    VarFunction("2", "3", 4, "5", 6);

	//TestFunction(10, 20, 30);

	TestFunction2(5, 1, 2, 3, 4, 5);

	// % 를 사용하게되면 이는 포매팅 문자라고해서
	// 숫자나 다양한 다른 변수를 사용해서 출력을 요청하는 것입니다.
	// %d
	printf_s("%d %s", 1, "asdfsadfdas");
}