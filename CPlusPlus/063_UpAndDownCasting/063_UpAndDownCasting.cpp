﻿// 063_UpAndDownCasting.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class FightUnit
{
public:
	void Damage(int _Damage)
	{
		Hp -= _Damage;
	}

	// 이 GetAtt가 각자 자식형일때는 자식들의 방식으로 동작하게 도와주는 문법이 있어야 한다.
	// 그걸 virtual 가상함수 문법이라고 합니다.
	// 이렇게 가상함수라는것이 만들어지게 되면
	// 자식이 이걸 새롭게 정의하지 않는다면 부모형으로 동작하고
	// 자식이 이걸 새롭게 정의하면 자식이 갖고 있는 형으로 동작한다.
	// 이 때 정의하는 방식은 부모와 완전히 동일한 함수로 정의해야 한다.

	virtual int GetAtt()
	{
		return Att;
	}

private:
	int Hp = 100;
	int Att = 10;
};

class Player : public FightUnit
{
public:
	// 오버라이드 문법이라고 합니다.
	// 명시적으로 override 했다는 것을 표현해주는것이 좋은데
	// 내용은 함수 뒤에
	// 붙이지 않아도 오버라이드는 되지만 명시적이 아닌것을
	// 선생님은 굉장히 싫어하기 때문에 붙여줄 것이다.
	int GetAtt() override
	{
		return FigthUnit::GetAtt() + Lv;
	}

private:
	int Lv = 1;
};

class Monster : public FightUnit
{

};

// 업캐스팅 => 자식형을 부모형으로 만드는건데 그냥 무조건 됩니다.
// 다운캐스팅 => 부모형을 여러개의 자식들중 하나로 선택하는 것.
// 안전하게 다운캐스팅을 하는 방법이 존재하고 그 이외의 방식으로
// 그냥 하면 절대로 안됩니다.

// 업캐스팅을 이용한 함수를 만들게 됩니다.
void Fight(FightUnit* _Left, FightUnit* _Right)
{
	// 최악의 방법은 다운캐스팅을 이용하는 것이다.
	// 이걸 다운캐스팅이라고 합니다.
	// ??????? 무슨일이 벌어질지 알 수 없고.
	// 이 방법은 사용하지 않는다.
	// Player* PlayerPtr = (Player*)_Left;
	// _Right->Damage(PlayerPtr->GetPlayerAtt());

	int LeftAtt = _Left->GetAtt();
	int RightAtt = _Right->GetAtt();

	_Right->Damage(LeftAtt);
	_Left->Damage(RightAtt);
}

int main()
{
	{
		// 부모형을 자식형으로 바꾼다. => 위험성이 있다.
		// 강제 캐스팅이고 내가 쳐줘야 한다.
		FigthUnit* Ptr;

		// 다운캐스팅을 꼭 해야하는 경우를 본적이 없습니다.
		// 그래서 위험하다는 겁니다.
		Player* PlayerPtr = (Player*)Ptr;
	}

	{
		Player NewPlayer;
		Monster NewMonster;

		Player* PlayerPtr = &NewPlayer;

		// 업캐스팅이라고 합니다.
		FightUnit* Ptr = PlayerPtr;
		Ptr = &NewMonster;

		Fight(&NewMonster, &NewPlayer);
	}
}