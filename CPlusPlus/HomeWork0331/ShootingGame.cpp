#include <iostream>

// 내가 만든건""
#include "ShootingGame.h"
#include "Player.h"
#include "Bullet.h"
#include "Monster.h"
#include "ConsoleGameScreen.h"

Player ShootingGame::NewPlayer;
Monster ShootingGame::ArrMonster[ShootingGame::ArrMonsterCount];

void ShootingGame::Loading()
{
	// 게임이 시작하기 전에 준비한다
	// 총알이 여러발 나가게 만드세요
	// 시작하면 어차피 모든 총알은 발사되지 않았을 것이므로 다 끈다.
	Bullet::AllOff();

	// 플레이어가 총알의 포인터를 알게한다.
	NewPlayer.SetBulletArr(Bullet::GetArrBullet());

	//플레이어가 화면의 중앙에 위치시킨다.
	int2 ScreenSize = ConsoleGameScreen::GetMainScreen().GetScreenSize();
	NewPlayer.SetPos(ScreenSize.Half());

	for (int i = 0; i < ArrMonsterCount; i++)
	{
		ArrMonster[i].SetPos({ i + 3, 1 });
	}
}

void ShootingGame::Collision()
{
	Bullet* BulletArr = Bullet::GetArrBullet();

	// 모든 총알과
	for (size_t BulletIndex = 0; BulletIndex < Bullet::ArrBulletCount; BulletIndex++)
	{
		Bullet& CurBullet = BulletArr[BulletIndex];

		if (false == CurBullet.IsUpdate())
		{
			continue;
		}

		for (size_t MonsterIndex = 0; MonsterIndex < ShootingGame::ArrMonsterCount; MonsterIndex++)
		{
			Monster& CurMonster = ArrMonster[MonsterIndex];
			
			if (false == CurMonster.IsUpdate())
			{
				continue;
			}

			if (CurMonster.GetPos() == CurBullet.GetPos())
			{
				CurMonster.Off();
				CurBullet.Off();
			}
		}
	}
}

int WindowY = 1;
void ShootingGame::MonsterEndCheck()
{
	// 1. 움직이게 한다.
		
	// 2. 끝에 어떠한 몬스터중 단 1개라도 닿았는지 확인한다.
	// 2-1. 왼쪽 끝을 체크한다.
	// 2-2. 오른쪽 끝에 닿은걸 체크한다.
	//if(몬스터가 왼쪽 끝에 닿았다)
	//{
	//		int a = 0;
	//}

	// 3. 방향을 바꾼다.
	// 4. 내려도 본다.

	// 왼쪽으로 넘어갔을때 Y 좌표는 홀수, X는 넘은 몬스터 부터 남은 몬스터 갯수만큼 좌표를 지정한다.
	if (WindowY % 2 == 1)
	{
		for (int i = 0; i < ArrMonsterCount; i++)
		{
			//if (ConsoleGameScreen::GetMainScreen().IsScreenOver(ArrMonster[i].GetPos() < )
			if (true == ConsoleGameScreen::GetMainScreen().IsScreenOver(ArrMonster[i].GetPos()))
			{
				WindowY++;
				for (i ; i < ArrMonsterCount; i++)
				{
					ArrMonster[i].SetPos({ i - 1 , WindowY });
				}
			}
		}
	}
	// 오른쪽으로 넘어갔을때 Y 좌표는 짝수로, X는 넘은 몬스터 부터 남은 몬스터 갯수만큼 좌표를 지정한다.
	else if (WindowY % 2 == 0)
	{
		for (int i = ArrMonsterCount-1; i > -1 ; i--)
		{
			//if (ConsoleGameScreen::GetMainScreen().IsScreenOver(ArrMonster[i].GetPos() < )
			if (true == ConsoleGameScreen::GetMainScreen().IsScreenOver(ArrMonster[i].GetPos()))
			{
				WindowY++;
				for (i-1 ; i > -1; i--)
				{
					ArrMonster[i].SetPos({ i+6 , WindowY });
				}
			}
		}
	}

}

//// 선생님
//void ShootingGame::MonsgerEndCheck()
//{
//
//}

void ShootingGame::GameUpdate()
{
	while (true)
	{
		system("cls");

		ConsoleGameScreen::GetMainScreen().ScreenClear();

		// 캐릭터 위치에 글자를 하나 띄운다.
		NewPlayer.Render();
		Bullet::AllRender();
		for (size_t i = 0; i < ArrMonsterCount; i++)
		{
			ArrMonster[i].Render();
		}
		
		//MonsterEndCheck();
		Collision();

		ConsoleGameScreen::GetMainScreen().ScreenPrint();

		NewPlayer.Input();
		Bullet::AllUpdate();
		for (size_t i = 0; i < ArrMonsterCount; i++)
		{
			ArrMonster[i].Update();
		}
	}
}

void ShootingGame::GameProgress()
{
	Loading();
	GameUpdate();
}