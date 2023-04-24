// 080_mainParameter.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 이 프로그램이 실행되는 경로를 준다.
int main(int _Count, const char** _InitText) //안넣어도 준다.
{
	// 내 프로세스가 다른 프로세스를 실행할수도 있다.
	// 메인에서 리턴해주는 것은 다른 프로세스에 값을 알려주기 위해.
	// 내가 실행하는 곳에 따라서 위치가 달라진다.
	int Result = system("D:\\Project\\AR47\\CPlusPlus\\x64\\Debug\\078_BitTest.exe");

	for (size_t i = 0; i < _Count; i++)
	{
		// char*
		std::cout << _InitText[i] << std::endl;
	}

	return 1;

}

