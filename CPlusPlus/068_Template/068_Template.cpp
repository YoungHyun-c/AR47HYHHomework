// 068_Template.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 자료형을 변수처럼.
// 모든 코드는 완전히 동일한데 자료형만 변수처럼 사용하고 싶을 때
// 사용하는 문법이 바로 template 입니다.
// 이 탬플릿이란 문법은
// 특정 함수나 특정 클래스에서 자료형만 바뀐 완전히 동일한 함수나 완전히 동일한 클래스를
// 만들고 싶을 때 사용하는 문법입니다.

class Bullet
{
public:
    void Update()
    {

    }
};

typedef Bullet DataType;

// 설명:
class GameEngineArray
{
public:
    // delete Function
    GameEngineArray(const GameEngineArray& _Other) = delete;
    GameEngineArray(GameEngineArray&& _Other) noexcept = delete;
    GameEngineArray& operator=(GameEngineArray&& _Other) noexcept = delete;

    // constructer destructer
    GameEngineArray(size_t _Value)
        : ArrPtr(new DataType[_Value])
        , ArrCount(_Value)
    {
        // ArrPtr = new int[100]l
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
        ArrCount = _Other.ArrCount;
        ArrPtr = _Other.ArrPtr;
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

        if (nullptr != ArrPtr)
        {
            delete[] ArrPtr;
            ArrPtr = nullptr;
        }

        ArrPtr = new DataType[_Value];
        ArrCount = _Value;
    }

protected:

private:
    size_t ArrCount;
    DataType* ArrPtr = nullptr;

};


// 함수를 하나 만들고
// 코드에 포함되지 않습니다.
template<typename DataType>
void Function(int _Value)
{
    printf_s("%d\n", _Value);
}

void Function(short _Value)
{
    printf_s("%d\n", _Value);
}
// 이렇게 여러개 치는 것을 한번에 해결해줄 template
template<typename DataType>
void Function(DataType _Value)
{
    printf_s("%d\n", _Value);
}

// 하지만 템플릿으로 만든 뭔가가 있을때
// 딱 이게 char일때만 특수하게 동작했으면 할때는
// 템플릿 특수화라는 문법입니다.
template<>
void Function(char _Value)
{
    printf_s("%c\n", _Value);
}

// 클래스 템플릿
template<typename DataType>
class Test
{
public:
    DataType Value;
};

//class TestBullet
//{
//public:
//    Bullet Value;
//};
//
//class Testint
//{
//public:
//    Bullet Value;
//};

class Player
{

};

class Monster
{

};

int main()
{
    Player NewPlayer;
    Monster NewMonster;

    // NewPlayer = NewMonster; 자료형이 다르니 당연히 안됨.

    GameEngineArray NewArr(20);

    for (size_t i = 0; i < NewArr.Count(); i++)
    {
        NewArr[i].Update();
    }

    // 템플릿 함수의 경우
    {
        // 함수의 경우 인자추론을 할수가 있다.
        // 그 상황에 맞춰서
        //Function<int>(100);
        //Function<char>('1');

        Function/*<bool>*/(true);
        Function/*<int>*/(100);
        Function('c');
        Function<int>('c');
    }

    {
        //Testint
        Test<int> NewTestInt;
        NewTestInt.Value = 10;

        Test<int> NewTestInt0;
        NewTestInt0.Value = 10;

        NewTestInt = NewTestInt0;

        // TestBullet
        Test<Bullet> NewTestBullet;
        NewTestBullet.Value.Update();

        //NewTestInt = NewTestBullet;

        //클래스는 왜 인자 추론이 안되지?
        //Test NewIntArr0;
    }
}

