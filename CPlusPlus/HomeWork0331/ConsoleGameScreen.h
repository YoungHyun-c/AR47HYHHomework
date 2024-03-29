#pragma once
#include "ConsoleGameMath.h"


class ConsoleGameScreen
{
public:
	// 클래스 내부에 전역변수를 선언할수가 있습니다.
	static const int ScreenYSize = 10;
	static const int ScreenXSize = 20;

	static ConsoleGameScreen& GetMainScreen()
	{
		return MainScreen;
	}

	static int2 GetScreenSize();

	void ScreenClear();

	void ScreenPrint() const;

	bool IsScreenOver(const int2& _Pos) const;

	void SetScreenCharacter(const int2& _Pos, char _Ch);

protected:

private:
	char Arr[ScreenYSize][ScreenXSize] = { 0, };

	ConsoleGameScreen();

	static ConsoleGameScreen MainScreen;

};