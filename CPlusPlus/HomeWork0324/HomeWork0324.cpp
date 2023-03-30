// HomeWork0324.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#include <iostream>
//#include <conio.h>
// 운영체제가 도와줄 수 밖에 없다.
//#include <windows.h>


// 숙제 0
// 상하좌우로 다 움직이게 해주세요.
 
// 숙제 1
// 잔상 지우기.
 
// 숙제 2
// 화면 바깥으로 나가지 못 하게 하세요.

// 안해도 되는 숙제
// 질문했을때 안받아 줄 것.
 
// 숙제 3
// 장애물 만들고 배치하세요. 당연히 플레이어는 거기로 못갑니다.

// 숙제 4
// F를 누르면 폭탄이 설치되고 눈에 보여야 합니다. 폭탄@

// 숙제 5
// 일정시간이 지나고 폭탄이 터지면서
//    @
//    @
//    @
// @@@@@@@
//    @
//    @
//    @


// 1 방법 플레이어가 있던 자리 a로 만들기
//int main()
//{
//	const int ScreenYSize = 5;
//	const int ScreenXSize = 5;
//
//	char Arr[ScreenYSize][ScreenXSize] = { 0, };
//	for (size_t y = 0; y < ScreenYSize; y++)
//	{
//		for (size_t x = 0; x < ScreenXSize; x++)
//		{
//			Arr[y][x] = 'a';
//		}
//
//	}
//
//	// 정수를 정수로 나누면 실수는 버리고 정수의 값만 나옵니다.
//	int PlayerY = ScreenYSize / 2;
//	int PlayerX = ScreenXSize / 2;
//
//	
//	while (true)
//	{
//		system("cls");
//
//		Arr[PlayerY][PlayerX] = '*';
//
//		for (size_t y = 0; y < ScreenYSize; y++)
//		{
//			for (size_t x = 0; x < ScreenXSize; x++)
//			{
//				printf_s("%c", Arr[y][x]);
//			}
//			printf_s("\n");
//		}
//
//		// 이건 내가 키를 눌렀다면 1
//		// 아니라면 0을 리턴하는 함수고 정지하지 않습니다.
//		// 키를 눌렀다는 것을 체크해주는 함수.
//		if (0 == _kbhit())
//		{
//			// 0.5 초간 멈춘다.
//			Sleep(200);
//			// 일부러 멈추게 만들겁니다.
//			continue;
//		}
//
//		// 어떤 키를 눌렀는지 알려주는 함수.
//		char ch = _getch();
//		
//		int PlayerXValue = PlayerX;
//		int PlayerYValue = PlayerY;
//
//
//		switch (ch)
//		{
//		case'a':
//		case'A':
//			PlayerX -= 1;
//			Arr[PlayerY][PlayerX+1] = 'a';
//			break;
//		case'd':
//		case'D':
//			PlayerX += 1;
//			Arr[PlayerY][PlayerX-1] = 'a';
//			break;
//		case'w':
//		case'W':
//			PlayerY -= 1;
//			Arr[PlayerY+1][PlayerX] = 'a';
//			break;
//		case's':
//		case'S':
//			PlayerY += 1;
//			Arr[PlayerY-1][PlayerX] = 'a';
//			break;
//		}
//		if (PlayerY < 0)
//		{
//			PlayerY += 1;
//		}
//		else if (PlayerY > ScreenYSize - 1)
//		{
//			PlayerY -= 1;
//		}
//		else if (PlayerX > ScreenXSize - 1)
//		{
//			PlayerX -= 1;
//		}
//		else if (PlayerX < 0)
//		{
//			PlayerX += 1;
//		}
//		Sleep(200);
//
//		//break;
//
//	}
//}


// 2번째 방법 맵을 그릴 때 플레이어 좌표 외에 a를 그림.
//int main()
//{
//	const int ScreenYSize = 3;
//	const int ScreenXSize = 3;
//
//	char Arr[ScreenYSize][ScreenXSize] = { 0, };
//	
//	
//	for (size_t y = 0; y < ScreenYSize; y++)
//	{
//		for (size_t x = 0; x < ScreenXSize; x++)
//		{
//			Arr[y][x] = 'a';
//		}
//
//	}
//
//	int PlayerY = ScreenYSize / 2;
//	int PlayerX = ScreenXSize / 2;
//
//
//	while (true)
//	{
//		system("cls");
//
//
//		for (size_t y = 0; y < ScreenYSize; y++)
//		{
//			for (size_t x = 0; x < ScreenXSize; x++)
//			{
//				if (PlayerY == y && PlayerX == x)
//				{
//					printf_s("*");
//				}
//				else
//				{
//					printf_s("%c", Arr[y][x]);
//				}
//			}
//			printf_s("\n");
//		}
//
//		if (0 == _kbhit())
//		{
//			Sleep(200);
//			continue;
//		}
//
//		char ch = _getch();
//
//		int PlayerXValue = PlayerX;
//		int PlayerYValue = PlayerY;
//
//
//		switch (ch)
//		{
//		case'a':
//		case'A':
//			PlayerX -= 1;
//			break;
//		case'd':
//		case'D':
//			PlayerX += 1;
//			break;
//		case'w':
//		case'W':
//			PlayerY -= 1;
//			break;
//		case's':
//		case'S':
//			PlayerY += 1;
//			break;
//		}
//		if (PlayerY < 0)
//		{
//			PlayerY += 1;
//		}
//		else if (PlayerY > ScreenYSize - 1)
//		{
//			PlayerY -= 1;
//		}
//		else if (PlayerX > ScreenXSize - 1)
//		{
//			PlayerX -= 1;
//		}
//		else if (PlayerX < 0)
//		{
//			PlayerX += 1;
//		}
//		Sleep(200);
//
//	}
//}


// 3번째 방법 플레이어 이동을 따로 함수로 만들기
//void PlayerMove(int* PlayerY, int* PlayerX, int _Y, int _X)
//{
//	*PlayerY += _Y;
//	*PlayerX += _X;
//}
//
//int main()
//{
//	const int ScreenYSize = 3;
//	const int ScreenXSize = 3;
//
//	char Arr[ScreenYSize][ScreenXSize] = { 0, };
//	
//	for (size_t y = 0; y < ScreenYSize; y++)
//	{
//		for (size_t x = 0; x < ScreenXSize; x++)
//		{
//			Arr[y][x] = 'a';
//		}
//
//	}
//
//	int PlayerY = ScreenYSize / 2;
//	int PlayerX = ScreenXSize / 2;
//	
//
//	while (true)
//	{
//		system("cls");
//
//		for (size_t y = 0; y < ScreenYSize; y++)
//		{
//			for (size_t x = 0; x < ScreenXSize; x++)
//			{
//				if (PlayerY == y && PlayerX == x)
//				{
//					printf_s("*");
//				}
//				else
//				{
//					printf_s("%c", Arr[y][x]);
//				}
//			}
//			printf_s("\n");
//		}
//
//		if (0 == _kbhit())
//		{
//			Sleep(200);
//			continue;
//		}
//
//		char ch = _getch();
//
//		int PlayerXValue = PlayerX;
//		int PlayerYValue = PlayerY;
//
//
//		switch (ch)
//		{
//		case'a':
//		case'A':
//			PlayerMove(&PlayerY, &PlayerX, 0, -1);
//			break;
//		case'd':
//		case'D':
//			PlayerMove(&PlayerY, &PlayerX, 0, 1);
//			break;
//		case'w':
//		case'W':
//			PlayerMove(&PlayerY, &PlayerX, -1, 0);
//			break;
//		case's':
//		case'S':
//			PlayerMove(&PlayerY, &PlayerX, 1, 0);
//			break;
//		}
//		if (PlayerY < 0)
//		{
//			PlayerY += 1;
//		}
//		else if (PlayerY > ScreenYSize - 1)
//		{
//			PlayerY -= 1;
//		}
//		else if (PlayerX > ScreenXSize - 1)
//		{
//			PlayerX -= 1;
//		}
//		else if (PlayerX < 0)
//		{
//			PlayerX += 1;
//		}
//		Sleep(200);
//
//
//	}
//}


// 선생님 풀이
// 1. 플레이어 움직임 함수화 GetUpCheck() bool함수를 사용하여 움직였는지true or 안움직였는지 false
// bool IsMoveCheck(int x, int y)
// {
//	~~~~~~~
// }
// 2. 장애물, 바깥 체크
// 화면 바깥 체크
// bool IsOverCheck(int x, int y)
// 장애물 체크
// bool IsGimikCheck(int x, int y) 
// 3. 잔상 지우기
// 맵을 클리어 -> 플레이어 위치에 * 그리기 -> 맵 다시 그리기.



//#include <iostream>
//#include <conio.h>
//// 운영체제가 도와줄수밖에 없다.
//#include <Windows.h>
//
//// 이게 0단계
//// 근본오브 근본 수학 물리 
//class int2
//{
//public:
//	int X = 0;
//	int Y = 0;
//
//public:
//	int2 Half()
//	{
//		return { X / 2, Y / 2 };
//	}
//
//public:
//	// 이건 내일 합니다.
//	//int2() 
//	//{
//	//}
//
//	int2(int _X, int _Y)
//		: X(_X), Y(_Y)
//	{
//
//	}
//};
//
//// 이게 1단계
//// 근본오브 근본 수학 물리 
//class ConsoleGameScreen
//{
//	// 메모리 영역 자체가 달라졌다고 봐야합니다.
//public:
//	// 클래스 내부에 전역변수를 선언할수가 있습니다.
//	static const int ScreenYSize = 5;
//	static const int ScreenXSize = 5;
//
//	static int2 GetScreenSize()
//	{
//		return int2{ ScreenXSize, ScreenYSize };
//	}
//
//
//	void ScreenClear()
//	{
//		for (size_t y = 0; y < ScreenYSize; y++)
//		{
//			for (size_t x = 0; x < ScreenXSize; x++)
//			{
//				Arr[y][x] = 'a';
//			}
//		}
//	}
//
//	void ScreenPrint() const
//	{
//		for (size_t y = 0; y < ScreenYSize; y++)
//		{
//			for (size_t x = 0; x < ScreenXSize; x++)
//			{
//				// Arr[y][x] = 'b';
//				printf_s("%c", Arr[y][x]);
//			}
//			printf_s("\n");
//		}
//	}
//
//	// 이녀석을 무조건 사용해서 플레이어가 바깥으로 못나가게 만드세요.
//	bool IsScreenOver(const int2& _Pos)
//	{
//		if (0 > _Pos.X)
//		{
//			return true;
//		}
//
//		if (0 > _Pos.Y)
//		{
//			return true;
//		}
//
//		if (ScreenXSize <= _Pos.X)
//		{
//			return true;
//		}
//
//		if (ScreenYSize <= _Pos.Y)
//		{
//			return true;
//		}
//
//		return false;
//	}
//
//	void SetScreenCharacter(const int2& _Pos, char _Ch)
//	{
//		if (true == IsScreenOver(_Pos))
//		{
//			return;
//		}
//
//		Arr[_Pos.Y][_Pos.X] = _Ch;
//	}
//
//private:
//	char Arr[ScreenYSize][ScreenXSize] = { 0, };
//
//};
//
///////////////////////////////////////////////////////////////////// 엔진
//
//
//// 2단계 컨텐츠
//// 클래스가 다른 클래스를 알아야 합니다.
//class Player
//{
//public:
//	int2 GetPos() const
//	{
//		return Pos;
//	}
//
//	void SetPos(const int2& _Value)
//	{
//		Pos = _Value;
//	}
//
//	// 화면바깥으로 못나가게 하세요. 
//	void Input(ConsoleGameScreen& _Screen)
//	{
//		if (0 == _kbhit())
//		{
//			Sleep(InterFrame);
//			return;
//		}
//
//		char Ch = _getch();
//
//		switch (Ch)
//		{
//		case 'a':
//		case 'A':
//			if (false == _Screen.IsScreenOver(Pos))
//			{
//				Pos.X -= 1;
//			}
//			if (true == _Screen.IsScreenOver(Pos))
//			{
//				Pos.X += 1;
//			}
//			break;
//		case 'd':
//		case 'D':
//			if (false == _Screen.IsScreenOver(Pos))
//			{
//				Pos.X += 1;
//			}
//			if (true == _Screen.IsScreenOver(Pos))
//			{
//				Pos.X -= 1;
//			}
//			break;
//		case 'w':
//		case 'W':
//			if (false == _Screen.IsScreenOver(Pos))
//			{
//				Pos.Y -= 1;
//			}
//			if (true == _Screen.IsScreenOver(Pos))
//			{
//				Pos.Y += 1;
//			}
//			break;
//		case 's':
//		case 'S':
//			if (false == _Screen.IsScreenOver(Pos))
//			{
//				Pos.Y += 1;
//			}
//			if (true == _Screen.IsScreenOver(Pos))
//			{
//				Pos.Y -= 1;
//			}
//			break;
//		default:
//			break;
//		}
//
//		Sleep(InterFrame);
//	}
//
//protected:
//
//private:
//	static const int InterFrame = 200;
//
//	int2 Pos = int2(0, 0);
//};
//
//
//int main()
//{
//	ConsoleGameScreen NewScreen;
//	Player NewPlayer;
//
//	// int2 NewPos = int2{ 5, 5 };
//
//	int2 ScreenSize = NewScreen.GetScreenSize();
//	NewPlayer.SetPos(ScreenSize.Half());
//
//	while (true)
//	{
//		system("cls");
//
//		NewScreen.ScreenClear();
//
//		NewScreen.SetScreenCharacter(NewPlayer.GetPos(), '*');
//
//		NewScreen.ScreenPrint();
//
//		NewPlayer.Input(NewScreen);
//
//	}
//
//	
//}


// 썜 풀이

#include <iostream>
#include <conio.h>
// 운영체제가 도와줄수밖에 없다.
#include <Windows.h>

// 이게 0단계
// 근본오브 근본 수학 물리 
class int2
{
public:
	int X = 0;
	int Y = 0;

public:
	int2 Half()
	{
		return { X / 2, Y / 2 };
	}

public:
	int2(int _X, int _Y)
		: X(_X), Y(_Y)
	{

	}
};

// 이게 1단계
// 근본오브 근본 수학 물리 
class ConsoleGameScreen
{
private:
	ConsoleGameScreen()
	{
	}
	static ConsoleGameScreen MainScreen;

public:
	static ConsoleGameScreen& GetMainScreen()
	{
		return MainScreen;
	}

public:
	static const int ScreenYSize = 5;
	static const int ScreenXSize = 5;

	static int2 GetScreenSize()
	{
		return int2{ ScreenXSize, ScreenYSize };
	}


	void ScreenClear()
	{
		for (size_t y = 0; y < ScreenYSize; y++)
		{
			for (size_t x = 0; x < ScreenXSize; x++)
			{
				Arr[y][x] = 'a';
			}
		}
	}

	void ScreenPrint() const
	{
		for (size_t y = 0; y < ScreenYSize; y++)
		{
			for (size_t x = 0; x < ScreenXSize; x++)
			{
				// Arr[y][x] = 'b';
				printf_s("%c", Arr[y][x]);
			}
			printf_s("\n");
		}
	}

	// 이녀석을 무조건 사용해서 플레이어가 바깥으로 못나가게 만드세요.
	bool IsScreenOver(const int2& _Pos) const
	{
		if (0 > _Pos.X)
		{
			return true;
		}

		if (0 > _Pos.Y)
		{
			return true;
		}

		if (ScreenXSize <= _Pos.X)
		{
			return true;
		}

		if (ScreenYSize <= _Pos.Y)
		{
			return true;
		}

		return false;
	}

	void SetScreenCharacter(const int2& _Pos, char _Ch)
	{
		if (true == IsScreenOver(_Pos))
		{
			return;
		}

		Arr[_Pos.Y][_Pos.X] = _Ch;
	}

private:
	char Arr[ScreenYSize][ScreenXSize] = { 0, };

};

ConsoleGameScreen ConsoleGameScreen::MainScreen;

/////////////////////////////////////////////////////////////////// 엔진


// 2단계 컨텐츠
// 클래스가 다른 클래스를 알아야 합니다.
class Player
{
public:
	Player()
	{

	}

	int2 GetPos() const
	{
		return Pos;
	}

	void SetPos(const int2& _Value)
	{
		Pos = _Value;
	}

	// 화면바깥으로 못나가게 하세요. 
	void Input(ConsoleGameScreen& _Screen)
	{
		if (0 == _kbhit())
		{
			Sleep(InterFrame);
			return;
		}

		char Ch = _getch();

		int2 NextPos = { 0, 0 };

		switch (Ch)
		{
		case 'a':
		case 'A':
			NextPos = Pos;
			NextPos.X -= 1;
			if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
			{
				Pos.X -= 1;
			}
			break;
		case 'd':
		case 'D':
			NextPos = Pos;
			NextPos.X += 1;
			if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
			{
				Pos.X += 1;
			}
			break;
		case 'w':
		case 'W':
			NextPos = Pos;
			NextPos.Y -= 1;
			if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
			{
				Pos.Y -= 1;
			}
			break;
		case 's':
		case 'S':
			NextPos = Pos;
			NextPos.Y += 1;
			if (false == ConsoleGameScreen::GetMainScreen().IsScreenOver(NextPos))
			{
				Pos.Y += 1;
			}
			break;
		default:
			break;
		}

		Sleep(InterFrame);
	}

protected:

private:
	static const int InterFrame = 200;

	int2 Pos = int2(0, 0);
};


int main()
{
	Player NewPlayer;

	// int2 NewPos = int2{ 5, 5 };

	int2 ScreenSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();
	NewPlayer.SetPos(ScreenSize.Half());

	while (true)
	{
		system("cls");

		ConsoleGameScreen::GetMainScreen().ScreenClear();

		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(NewPlayer.GetPos(), '*');

		ConsoleGameScreen::GetMainScreen().ScreenPrint();

		NewPlayer.Input(ConsoleGameScreen::GetMainScreen());

	}

}