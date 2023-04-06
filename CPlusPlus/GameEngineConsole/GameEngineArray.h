#pragma once
#include <GameEngineBase/GameEngineDebug.h>

typedef int DataType;

// 설명 :
class GameEngineArray
{
public:
	// delete Function
	GameEngineArray(const GameEngineArray& _Other) = delete;
	GameEngineArray(GameEngineArray&& _Other) noexcept = delete;
	GameEngineArray& operator=(const GameEngineArray&& _Other) = delete;

	// constrcuter destructer
	GameEngineArray(size_t _Value)
	{
		if (0 >= _Value)
		{
			MsgBoxAssert("0 크기의 배열은 만들 수 없습니다.");
		}

		ReSize(_Value);
	}

	~GameEngineArray()
	{
		if (nullptr != ArrPtr)
		{
			delete[] ArrPtr;
			ArrPtr = nullptr;
		}
	}

	/*GameEngineArray& operator=(const GameEngineArray& _Other)
	{
		temp = new DataType[_Other.ArrCount];
		for (size_t i = 0; i < _Other.ArrCount; i++)
		{
			temp[i] = _Other.ArrPtr[i];
		}

		ArrCount = _Other.ArrCount;
		ArrPtr = temp;

		for (size_t i = 0; i < ArrCount; i++)
		{
			ArrPtr[i] = temp[i];
		}
		return *this;
	}*/

	// 선생님 풀이
	GameEngineArray& operator=(const GameEngineArray& _Other)
	{
		// 얕은 복사라고 합니다.
		// ArrCount = _Other.ArrCount;
		// ArrPtr = _Other.ArrPtr;

		// 나만의 메모리를 만들고
		// 깊은복사라고 합니다.
		ReSize(_Other.ArrCount);
		for (size_t i = 0; i < _Other.ArrCount; i++)
		{
			ArrPtr[i] = _Other[i];
		}
		
		return *this;
	}

	size_t Count()
	{
		return ArrCount;
	}

	DataType& operator[](size_t _Index) const
	{
		return ArrPtr[_Index];
	}

	void ReSize(int _Value)
	{
		// 20줄 안팍.
		// 삼항 연산자 써보시면 좋을겁니다.

		// 기존의 할당된 배열을 알고 있는 것은
		// 섣불리 지우면 안된다.

		// 기존의 있던 값에서 현재의 배열이 복사한 다음 삭제해야 한다.
		
		// 내풀이
		//ArrCount = _Value;
		//temp = new DataType[_Value];
		////ArrPtr = new DataType[_Value];

		//for (size_t i = 0; i < ArrCount; i++)
		//{
		//	temp[i] = ArrPtr[i];
		//}

		//if (nullptr != ArrPtr)
		//{
		//	delete[] ArrPtr;
		//	ArrPtr = nullptr;
		//}

		////ArrCount = _Value;
		//ArrPtr = new DataType[_Value];
		//for (size_t i = 0; i < ArrCount; i++)
		//{
		//	ArrPtr[i] = temp[i];
		//}

		//if (nullptr != temp)
		//{
		//	delete[] temp;
		//	temp = nullptr;
		//}

		// 선생님 풀이
		DataType* NewPtr = new DataType[_Value];
		int CopySize = _Value < ArrCount ? _Value : ArrCount;

		for (size_t i = 0; i < CopySize; i++)
		{
			NewPtr[i] = ArrPtr[i];
		}

		if (nullptr != ArrPtr)
		{
			delete[] ArrPtr;
			ArrPtr = nullptr;
		}

		ArrPtr = NewPtr;
		ArrCount = _Value;
	}

protected:

private:
	size_t ArrCount;
	DataType* ArrPtr = nullptr;
	DataType* temp = nullptr;
};

