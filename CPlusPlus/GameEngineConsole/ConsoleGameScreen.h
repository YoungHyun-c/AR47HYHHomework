#pragma once
#include "ConsoleGameMath.h"
#include <vector>


class ConsoleGameScreen
{
public:
	//// 클래스 내부에 전역변수를 선언할수가 있습니다.
	//static const int ScreenYSize = 10;
	//static const int ScreenXSize = 20;

	static ConsoleGameScreen& GetMainScreen()
	{
		return MainScreen;
	}

	/*static int2 GetMainScreenSize()
	{
		return MainScreen.GetScreenSize();
	}*/

	int2 GetScreenSize();

	void SetScreenSize(int2 _Size);

	void ScreenClear();

	void ScreenPrint() const;

	bool IsScreenOver(const int2& _Pos) const;

	void SetScreenCharacter(const int2& _Pos, wchar_t _Ch);

	char GetScreenCharacter(const int2& _Pos) const;

protected:

private:
	//char Arr[ScreenYSize][ScreenXSize] = { 0, };

	//char** ArrScreen = nullptr;

	// GameEngineArray<char> ArrPtr 여러개
	// char를 여러개 가질 수 있는 녀석
	std::vector<std::vector<wchar_t>> ArrScreen;

	int2 Size;

	// 캐릭터의 배열을 가진 또 다른 배열이라고 할 수 있다.

	ConsoleGameScreen();
	~ConsoleGameScreen();

	static ConsoleGameScreen MainScreen;

};