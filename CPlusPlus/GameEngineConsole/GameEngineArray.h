#pragma once
#include <GameEngineBase/GameEngineDebug.h>

typedef int DataType;

// ���� :
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
			MsgBoxAssert("0 ũ���� �迭�� ���� �� �����ϴ�.");
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

	// ������ Ǯ��
	GameEngineArray& operator=(const GameEngineArray& _Other)
	{
		// ���� ������ �մϴ�.
		// ArrCount = _Other.ArrCount;
		// ArrPtr = _Other.ArrPtr;

		// ������ �޸𸮸� �����
		// ���������� �մϴ�.
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
		// 20�� ����.
		// ���� ������ �Ẹ�ø� �����̴ϴ�.

		// ������ �Ҵ�� �迭�� �˰� �ִ� ����
		// ���Ҹ� ����� �ȵȴ�.

		// ������ �ִ� ������ ������ �迭�� ������ ���� �����ؾ� �Ѵ�.
		
		// ��Ǯ��
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

		// ������ Ǯ��
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

