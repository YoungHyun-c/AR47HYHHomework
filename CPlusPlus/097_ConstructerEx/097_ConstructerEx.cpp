// 097_ConstructerEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class A
{
public:
	A()
	{
		// class B * TestPtr = dynamic_cast<B*>(this);

		Test();
	}

	virtual void Test()
	{
		std::cout << "A함수" << std::endl;

		this;
		// ?? 이녀석은 B형일까? A형일까?
	}

	void TTTT()
	{
		this->Test();
	}
};

class C : public A
{

};

class B : public A
{
public:
	virtual void Test() override
	{
		std::cout << "B함수" << std::endl;

		this;
		// ? 이녀석은 B형일까? A형일까?
	}

	B()
	{
		Test();
	}
};

int main()
{
	A* NewA = new B();
	NewA->Test();
	NewA->TTTT();

	// 애초에 B만 New 해서 만들었으니 this는 B이다.
}