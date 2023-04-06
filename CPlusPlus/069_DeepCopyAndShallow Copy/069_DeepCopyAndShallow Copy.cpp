// 069_DeepCopyAndShallow Copy.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class A
{
public:
	int* NewInt = nullptr;

	void Create()
	{
		NewInt = new int();
	}

	void operator = (const A& _Other)
	{
		//이걸 얕은 복사라고 하게 된다.
		//NewInt = _Other.NewInt;
		if (nullptr == _Other.NewInt)
		{
			if (nullptr != NewInt)
			{
				delete NewInt;
				NewInt = nullptr;
			}
			return;
		}

		if (nullptr == NewInt)
		{
			// 딥카피의 준비를 한것.
			Create();
		}

		// 각 클래스가 자신만의 메모리를 만들어야 한다는 것이다.
		*NewInt = *_Other.NewInt;

		return;
	}


public:
	~A()
	{
		if (nullptr != NewInt)
		{
			delete NewInt;
			NewInt = nullptr;
		}
	}

};

int main()
{
	{
		A NewInt0;
		A NewInt1;

		NewInt0.Create();

		NewInt0 = NewInt1;
	}

	//		 100
	int* NewInt0 = new int();

	//		 100
	int* NewInt1 = NewInt0;

	if (nullptr != NewInt0)
	{
		delete NewInt0;
		NewInt0 = nullptr;
	}

	// ????? NewInt1이 가리키던 주소가 0이였는데 0도 사라짐

	// 근데 또 지움
	if (nullptr != NewInt1)
	{
		delete NewInt0;
		NewInt0 = nullptr;
	}
}