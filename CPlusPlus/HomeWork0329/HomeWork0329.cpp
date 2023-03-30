#include <iostream>
#include "Player.h"
#include "Bullet.h"
#include "ConsoleGameScreen.h"

int main()
{
	// 1. 상대의 말과 전제를 잘듯고 그 문제에 대한 단계도 정리
	//    ex) 1. 요구1 2. 요구2
	// 2. 문제를 쪼개서 봐라 문제를 어떻게 해결한건지 단계를 세우고 들어가라.
	//    ex) 1. 무슨일을 한다 2. 무슨일을 한다.
	// 3. 분명히 자신의 문제를 도와주기 위한 코드가 있다.
	//    ex) Player
	// 4. 추가기능 넣지 마세요.

	// 오늘의 숙제입니다.
	// 총알 딱 1발을 만들고 그 1발을
	// 총알 1발을 발사하세요.
	// 방향 상관 없음.
	// 총알 클래스를 만든다.
	// 플레이어가 여러분들이 지정한 키를 누르르면 


	// 1. 클래스를 만들거다.
	// 2. 그 클래스 필요한 맴버변수를 정의한다 <= Pos
	// 3. 그 클래스에 필요한 맴버함수를 정의한다 <= Pos

	// Bullet NewBullet;

	// 1. 단계 총알을 만든다.
	// 2. 총알을 보이게 한다.
	// 3. 총알을 원할때 상황에 맞춰서(if) 보이고 안보이게 한다. <= 변수 선언
	//    ex) if는 메모리 영역.
	//    책임이 누구에게 있지? 
	// 
	// 4. 총알은 플레이어를 상황에 맞춰서(if) 따라다니게 한다.

	Player NewPlayer = Player();
	Bullet NewBullet = Bullet();

	int2 ScreenSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();
	NewPlayer.SetPos(ScreenSize.Half());

	while (true)
	{
		system("cls");

			ConsoleGameScreen::GetMainScreen().ScreenClear();

		ConsoleGameScreen::GetMainScreen().SetScreenCharacter(NewPlayer.GetPos(), '*');
		if (true == NewPlayer.IsFire())
		{
			ConsoleGameScreen::GetMainScreen().SetScreenCharacter(NewBullet.GetPos(), '^');
			NewBullet.Update();

			//int2 CurPos = NewBullet.GetPos();
			//--CurPos.Y;
			//NewBullet.SetPos(CurPos);
		}

		ConsoleGameScreen::GetMainScreen().ScreenPrint();

		NewPlayer.Input();
		if (false == NewPlayer.IsFire())
		{
			NewBullet.SetPos(NewPlayer.GetPos());
		}

	}

}