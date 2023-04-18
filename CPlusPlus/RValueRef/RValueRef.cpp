// RValueRef.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>

class A
{
//private
public:
	std::string Name;
	std::vector<int> Values;

	void operator=(const A& _Other)
	{
		Name = _Other.Name;
		Values = _Other.Values;
	}

	A()
	{

	}

	A(const A& _Other)
	{
		Name = _Other.Name;
		Values = _Other.Values;
	}
};

void Test(const A& NewA)
{
	if (NewA.Name == "Fighter")
	{
		int a = 0;
	}
	int a = 0;
}

class NewTest
{
public:
	int Value;
	int* Ptr = nullptr;

public:
	void CreateBuffer()
	{
		Ptr = new int[500];
	}

	NewTest()
	{

	}
	
	~NewTest()
	{
		if (nullptr != Ptr)
		{
			delete[] Ptr;
			Ptr = nullptr;
		}
	}

	NewTest(const NewTest& _Other)
	{
		int a = 0;
	}

	// 이동생성자
	NewTest(NewTest&& _Other) noexcept
	{
		int a = 0;
	}

	NewTest& operator=(const NewTest& _Other)
	{
		int a = 0;
		return *this;
	}

	// 지역변수에서 곧 사라질 변수를 인자로 받았다는 것을 구분할 수 있게 해주는
	// 함수가 곧 Rvalue 래퍼런스
	// &&는 RValue
	// 이동대입
	// 상대의 권한을 이동받는다고 한다.
	NewTest& operator=(NewTest&& _Other) noexcept
	{
		Ptr = _Other.Ptr;

		_Other.Ptr = nullptr;

		// 얕은 복사

		return *this;
	}
};

NewTest TestNew()
{
	NewTest NewValue;
	// NewValue.Value = 300;

	NewValue.CreateBuffer();
	return NewValue;
}

int Function()
{
	return 10;
}

std::vector<int> TestInt()
{
	return std::vector<int>{1, 2, 3};
}

int main()
{
	{
		if (Function())
		{

		}
		
		// LValue RValue;

		int Test1 = 20;
		int Test2 = 20;
		Test1 = 30;

		Test1 = Test2;

		// int&& Test = Function();

		// &를 LValue Ref라고 부르고
		// 명확하게 위치가 있고 메모리를 특정할 수 있어야 하는데
		// int& Test = Function();

		// RValue 레퍼런스
		int&& Test = Function();

		// 대입할 수 있고 메모리 영역을 특정할 수 있는 메모리들을
		// LValue라고 한다.
		// LValue는 쉽게 RValue;

		// 사용하거나 참조할수만 있는 메모리들을 RValue라고 한다.

		// RValue
		// Function() = 30;

		//LValue는 대입할 수 있고 메모리 영역을 특정할 수 있는 메모리
		//RValue는 사용하거나 참조만 할 수 있는 메모리
	}

	{
		A NewA;
		NewA.Name = "Fighter";
		NewA.Values = { 1, 2, 3 };

		A NewA0;
		NewA0 = NewA;

		Test(NewA0);
	}

	{
		NewTest Test;
		Test = TestNew();

		NewTest TestRavlue = TestNew();

		Test.Value = 3000;

		int a = 0;
	}

	{
		NewTest Test = NewTest();
	}

	{
		// RValue가 작동한다는 것.
		std::vector<int> Test = TestInt();

		int a = 0;
	}
}