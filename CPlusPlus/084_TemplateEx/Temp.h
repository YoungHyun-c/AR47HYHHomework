#pragma once

// 설명 :

//내부에서만 유요합니다
template<typename DataType>
class Temp
{
public:
	// constructer destructer
	Temp();
	~Temp();

	// delete Function
	Temp(const Temp& _Other) = delete;
	Temp(Temp&& _Other) noexcept = delete;
	Temp& operator = (const Temp& _Other) = delete;
	Temp& operator = (Temp&& _Other) noexcept = delete;

	void Function(DataType _Data)
	{

	}

protected:

private:

};

//template<typename DataType>
//void TestFunction(DataType _Value)
//{
//
//}

void TestFunction(int _Value)
{

}

