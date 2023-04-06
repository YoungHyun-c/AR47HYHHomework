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
		: ArrPtr(new DataType[_Value])
		, ArrCount(_Value)
	{
		// ArrPtr = new int[100];
	}

	~GameEngineArray()
	{
		if (nullptr != ArrPtr)
		{
			delete[] ArrPtr;
			ArrPtr = nullptr;
		}
	}

	GameEngineArray& operator=(const GameEngineArray& _Other)
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
	}

	size_t Count()
	{
		return ArrCount;
	}

	DataType& operator[](size_t _Index)
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
		

		ArrCount = _Value;
		temp = new DataType[_Value];
		//ArrPtr = new DataType[_Value];

		for (size_t i = 0; i < ArrCount; i++)
		{
			temp[i] = ArrPtr[i];
		}

		if (nullptr != ArrPtr)
		{
			delete[] ArrPtr;
			ArrPtr = nullptr;
		}

		//ArrCount = _Value;
		ArrPtr = new DataType[_Value];
		for (size_t i = 0; i < ArrCount; i++)
		{
			ArrPtr[i] = temp[i];
		}

		if (nullptr != temp)
		{
			delete[] temp;
			temp = nullptr;
		}
	}

protected:

private:
	size_t ArrCount;
	DataType* ArrPtr = nullptr;
	DataType* temp = nullptr;
};

