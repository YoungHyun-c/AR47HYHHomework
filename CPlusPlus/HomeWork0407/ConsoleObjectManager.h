#pragma once
#include <GameEngineConsole/GameEngineArray.h>
#include <GameEngineConsole/ConsoleGameObject.h>

// 설명 :
class ConsoleObjectManager
{
	// 몬스터 그룹이 있다.
	// 플레이어 그룹이 있다.
	// 폭탄 그룹이 있다.


public:
	template<typename ObjectType>
	static ObjectType* CreateConsoleObject(int _Order)
	{
		// 완전히 새로운 배열이 1개 더 만들어 진다.
		// GameEngineArray<<ConsoleGameObject*> Group = AllObject[_Order];

		// 0 보다 작거나 같다면 오브젝트 배열 하나 만들기
		if (_Order >= AllObject.Count())
		{
			AllObject.ReSize(_Order + 1);
		}

		GameEngineArray<ConsoleGameObject*>& Group = AllObject[_Order];
		ObjectType* NewObject = new ObjectType();
		// Palyer* NewObject = new Player();
		Group.ReSize(Group.Count() + 1);
		Group[Group.Count() - 1] = NewObject;

		return NewObject;
	}

	template<typename ObjectType, typename EnumType>
	static ObjectType* CreateConsoleObject(EnumType _Order)
	{
		return CreateConsoleObject<ObjectType>((int)_Order);
	}

	static void ConsoleAllObjectUpdate();
	static void ConsoleAllObjectRender();
	static void ConsoleAllObjectDelete();

	static GameEngineArray<ConsoleGameObject*> &GetGroup(int _Order)
	{
		return AllObject[_Order];
	}



protected:

private:
	// constructer destructer
	ConsoleObjectManager();
	~ConsoleObjectManager();

	// delete Function
	ConsoleObjectManager(const ConsoleObjectManager& _Other) = delete;
	ConsoleObjectManager(ConsoleObjectManager&& _Other) noexcept = delete;
	ConsoleObjectManager& operator = (const ConsoleObjectManager& _Other) = delete;
	ConsoleObjectManager& operator = (ConsoleObjectManager&& _Other) noexcept = delete;

	static GameEngineArray<GameEngineArray<ConsoleGameObject*>> AllObject;
};

