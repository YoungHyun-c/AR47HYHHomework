// 053_GlobalValue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// C++은 객체지향 언어가 아니라는걸 확실히 설명할 수 있다.
// 전역의 존재 때문이다.

// 오직 클래스와 객체로만 코딩해야하는 것이 객체지향이다.
// 객체를 지향하지 않으면 객체지향이 아니다.

// 클래스는 선언이고 어떻게 어떻게 이 객체가 쓰일거다 하는 설계도



// 절차지향은 전역변수를 돌려쓰게 된다.

class Monster
{
public:

    // static 멤버변수라고 합니다.
    // 데이터 영역에 들어가야 하기 때문에
    // 현재까지 만들어진 모든 몬스터의 수
    // 접근제한 지정자 private 몬스터만 사용할 수 있는 전역변수가 됐다.
    static int MonsterCount;
    void print()
    {

    }
    
    Monster()
    {

    }

private:
    int MonsterCount = 0;

};

int main()
{
    
}

