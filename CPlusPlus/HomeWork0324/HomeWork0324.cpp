// HomeWork0324.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
// 운영체제가 도와줄 수 밖에 없다.
#include <windows.h>


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
void PlayerMove(int* PlayerY, int* PlayerX, int _Y, int _X)
{
	*PlayerY += _Y;
	*PlayerX += _X;
}

int main()
{
	const int ScreenYSize = 3;
	const int ScreenXSize = 3;

	char Arr[ScreenYSize][ScreenXSize] = { 0, };
	
	for (size_t y = 0; y < ScreenYSize; y++)
	{
		for (size_t x = 0; x < ScreenXSize; x++)
		{
			Arr[y][x] = 'a';
		}

	}

	int PlayerY = ScreenYSize / 2;
	int PlayerX = ScreenXSize / 2;
	

	while (true)
	{
		system("cls");

		for (size_t y = 0; y < ScreenYSize; y++)
		{
			for (size_t x = 0; x < ScreenXSize; x++)
			{
				if (PlayerY == y && PlayerX == x)
				{
					printf_s("*");
				}
				else
				{
					printf_s("%c", Arr[y][x]);
				}
			}
			printf_s("\n");
		}

		if (0 == _kbhit())
		{
			Sleep(200);
			continue;
		}

		char ch = _getch();

		int PlayerXValue = PlayerX;
		int PlayerYValue = PlayerY;


		switch (ch)
		{
		case'a':
		case'A':
			PlayerMove(&PlayerY, &PlayerX, 0, -1);
			break;
		case'd':
		case'D':
			PlayerMove(&PlayerY, &PlayerX, 0, 1);
			break;
		case'w':
		case'W':
			PlayerMove(&PlayerY, &PlayerX, -1, 0);
			break;
		case's':
		case'S':
			PlayerMove(&PlayerY, &PlayerX, 1, 0);
			break;
		}
		if (PlayerY < 0)
		{
			PlayerY += 1;
		}
		else if (PlayerY > ScreenYSize - 1)
		{
			PlayerY -= 1;
		}
		else if (PlayerX > ScreenXSize - 1)
		{
			PlayerX -= 1;
		}
		else if (PlayerX < 0)
		{
			PlayerX += 1;
		}
		Sleep(200);


	}
}

