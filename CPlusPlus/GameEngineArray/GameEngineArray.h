#pragma once

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
		// 20�� ����.
		// ���� ������ �Ẹ�ø� �����̴ϴ�.

		// ������ �Ҵ�� �迭�� �˰� �ִ� ����
		// ���Ҹ� ����� �ȵȴ�.

		// ������ �ִ� ������ ������ �迭�� ������ ���� �����ؾ� �Ѵ�.
		

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
