// HomeWork0329.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 오늘의 숙제입니다.
// 총알 딱 1발을 만들고
// 그 총알 1발을 발사하세요.
// f 키를 누르는 순간 총알이 발사하여, 사라지게
// 방향 상관없음.
// 총알 클래스를 만든다.

// 플레이어가 총알을 가지는 구조, 이런 구조를 Has a 라고 한다. Player Has a Bullet
// Bullet NewBullet; // 플레이어의 신체 내부에 총알 한발이 있다.
// Bullet* NewBullet; // 바깥에 있는 총알을 조작할 수 있다.

// 이상적인 방법은 보통 이걸 추천한다.
//inline bool IsFire()
//{
//    return Fire;
//}

// HomeWork0329.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Player.h"
#include "ConsoleGameScreen.h"
#include "Bullet.h"

int main()
{
	// 오늘의 숙제입니다.
	// 총알 1발을 발사하세요.
	// 방향 상관 없음.
	// 총알 클래스를 만든다.
	// 플레이어가 여러분들이 지정한 키를 누르르면 

	// Bullet NewBullet;

	Player NewPlayer = Player();
	Bullet NewBullet = Bullet();
	int2 ScreenSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();
	NewPlayer.SetPos(ScreenSize.Half());
	NewBullet.SetPos(NewPlayer.GetPos());

	int2 Value = { 0,9 };

	while (true)
	{
		system("cls");

		ConsoleGameScreen::GetMainScreen().ScreenClear();

		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(NewPlayer.GetPos(), '*');

		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(NewBullet.GetPos(), '@');

		ConsoleGameScreen::GetMainScreen().ScreenPrint();

		NewBullet.Update();
		NewPlayer.Input();

	}

}