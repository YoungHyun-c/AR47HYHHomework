﻿// HomeWork0321.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

//void Damage(
//    const char* const _AttName, // 때리는 쪽의 이름
//    const char* const _DefName, // 맞는 쪽의 이름
//    const int& _Att, // 때리는쪽의 공격력
//    int& _Hp)   // 맞는 쪽의 체력
//{
//    _Hp -= _Att;
//}
//
//void StatusRender(
//    const char* const _Name, // 때리는 쪽의 이름
//    const int& _Att,    // 때리는 쪽의 공격력
//    int& _Hp)   // 맞는 쪽의 체력
//{
//    printf_s("%s 의 스테이터스 --\n", _Name);
//    printf_s("공격력 : %d\n", _Att);
//    printf_s("체력 : %d\n", _Hp);
//    printf_s("------------------------\n");
//}
//
//
//int main()
//{
//    int PlayerHp = 100;
//    int PlayerAtt = 10;
//
//    int MonsterHp = 100;
//    int MonsterAtt = 10;
//
//    while (true)
//    {
//        system("cls");
//
//        StatusRender("Player", PlayerAtt, PlayerHp);
//        StatusRender("Monster", MonsterAtt, MonsterHp);
//        _getch();
//
//        system("cls");
//        Damage("Player", "Monster", PlayerAtt, MonsterHp);
//        StatusRender("Player", PlayerAtt, PlayerHp);
//        StatusRender("Monster", MonsterAtt, MonsterHp);
//        printf_s("Player가 공격을 시작합니다.\n");
//        printf_s("Monster가 %d의 데미지를 입었습니다.\n", PlayerAtt);
//        _getch();
//
//        if (0 >= MonsterHp)
//        {
//            printf_s("몬스터가 죽었습니다.");
//            printf_s("플레이어의 승리입니다.");
//            _getch();
//            break;
//        }
//
//        system("cls");
//        Damage("Monster", "Player", MonsterAtt, PlayerHp);
//        StatusRender("Player", PlayerAtt, PlayerHp);
//        StatusRender("Monster", MonsterAtt, MonsterHp);
//        printf_s("Monster가 공격을 시작합니다.\n");
//        printf_s("Player가 %d의 데미지를 입었습니다.\n", MonsterAtt);
//        _getch();
//
//        if (0 >= PlayerHp)
//        {
//            printf_s("플레이어가 죽었습니다.");
//            printf_s("몬스터의 승리입니다.");
//            _getch();
//            break;
//        }
//    }
//}


// 선생님 풀이
void Damage(
    const int& _Att, // 때리는쪽의 공격력
    int& _Hp)   // 맞는 쪽의 체력
{
    _Hp -= _Att;
}

void StatusRender(
    const char* const _Name, // 때리는 쪽의 이름
    const int& _Att,    // 때리는 쪽의 공격력
    int& _Hp)   // 맞는 쪽의 체력
{
    printf_s("%s 의 스테이터스 --\n", _Name);
    printf_s("공격력 : %d\n", _Att);
    printf_s("체력 : %d\n", _Hp);
    printf_s("------------------------\n");
}


int main()
{
    int PlayerHp = 100;
    int PlayerAtt = 10;

    int MonsterHp = 100;
    int MonsterAtt = 10;

    StatusRender("Player", PlayerAtt, PlayerHp);
    StatusRender("Monster", MonsterAtt, MonsterHp);
    _getch();

    while (true)
    {
        system("cls");

        StatusRender("Player", PlayerAtt, PlayerHp);
        StatusRender("Monster", MonsterAtt, MonsterHp);
        _getch();

        system("cls");
        Damage(PlayerAtt, MonsterHp);
        StatusRender("Player", PlayerAtt, PlayerHp);
        StatusRender("Monster", MonsterAtt, MonsterHp);
        DamageRender("Player", "Monster", PlayerAtt);
        _getch();

        if (0 >= MonsterHp)
        {
            printf_s("몬스터가 죽었습니다.");
            printf_s("플레이어의 승리입니다.");
            _getch();
            break;
        }

        system("cls");
        Damage(MonsterAtt, PlayerHp);
        StatusRender("Player", PlayerAtt, PlayerHp);
        StatusRender("Monster", MonsterAtt, MonsterHp);
        printf_s("Monster가 공격을 시작합니다.\n");
        printf_s("Player가 %d의 데미지를 입었습니다.\n", MonsterAtt);
        _getch();

        if (0 >= PlayerHp)
        {
            printf_s("플레이어가 죽었습니다.");
            printf_s("몬스터의 승리입니다.");
            _getch();
            break;
        }
    }
}
