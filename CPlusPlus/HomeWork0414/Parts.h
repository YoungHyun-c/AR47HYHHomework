#pragma once
#include <GameEngineConsole/ConsoleGameObject.h>
#include <GameEngineBase/GameEngineDebug.h>

class Body;
class Parts : public ConsoleGameObject
{
public:
	// constructer destructer
	Parts();
	~Parts();

	// delete function
	Parts(const Parts& _Ohter) = delete;
	Parts(Parts&& _Ohter) noexcept = delete;
	Parts& operator=(const Parts& _Other) = delete;
	Parts& operator=(Parts&& _Other) noexcept = delete;

	inline Parts* GetLast()
	{
		if (nullptr == Next)
		{
			return this;
		}

		return Next->GetLast();
	}

	inline Parts* GetNext()
	{
		return Next;
	}

	inline void SetNext(Parts* _Next)
	{
		if (nullptr == _Next)
		{
			MsgBoxAssert("�ڽ��� NextNode�� nullptr�� �����Ϸ��� �߽��ϴ�.");
		}
		Next = _Next;
	}

	inline int2 GetPrevPos()
	{
		return PrevPos;
	}

	inline void SetPos(const int2& _Value) override
	{
		PrevPos = GetPos();
		ConsoleGameObject::SetPos(_Value);
	}

	void NextMove();

protected:
	void Update() override;

private:
	int2 PrevPos;

	Parts* Prev;
	Parts* Next;
};