// 095_Ramda2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <functional>

class Test
{
public:
	int A = 10;

	void TestFunction()
	{
		// this;

		std::function<void()> Ptr = [this /* Test* const this = this */]()
		{
			// this = nullptr; <= 안됨
			this->A = 20;
		};
	}
};

int main()
{

}

