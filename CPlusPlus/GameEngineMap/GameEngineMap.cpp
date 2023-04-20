// GameEngineMap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>
#include <list>
#include "GameEngineMap.h"


template<typename DataType0, typename DataType1>
void TestValue(DataType0 _Data0, DataType1 _Data1)
{
}

class Item
{

};

class Inven
{
public:
    void AddItem(Item* Item);

   /* void AddWeapon();
    void AddArmor();
    void AddPotion();
    void AddQuestItem();*/
    // 인벤 내부에서 ~ 아이템, ~ 아이템 얻었다는 함수 만드는 것보단 아이템을 얻었다는 내부함수를 만들어서 관리하는게 낫다.
};

int main()
{
    {
        std::list<int> Value;
        Value.push_back(20);
        Value.push_back(30);

        // 이러면 안의 Test는 지역변수일뿐 바깥의 Value를 바꾸는 것이 아니다.
        /*for (int Test : Value)
        {
            Test = 50;
        }*/

        // 이렇게 하면 Value의 값을 참조하여 내부 값을 바꿀 수 있다.
        for (int& Test : Value)
        {
            Test = 50;
        }

        int a = 0;
    }

    {
        std::pair<int, int> NewPair;
        NewPair.first;
        NewPair.second;

        std::map<int, int> Test;

        std::pair<std::map<int, int>::iterator, bool> Value0
            = Test.insert(std::pair<int, int>(5, rand()));

        // 키가 겹칠때는 무시하면서 리턴해주는게 정상적으로 들어간 노드를 리턴해준다.

        std::pair<std::map<int, int>::iterator, bool> Value7
            = Test.insert(std::pair<int, int>(5, rand()));

        if (Value7.second == false)
        {
            int a = 0;
            // 같은 키를 가진 녀석을 넣어줬다.
        }

        std::pair<std::map<int, int>::iterator, bool> Value1
            = Test.insert(std::pair<int, int>(4, rand()));
        std::pair<std::map<int, int>::iterator, bool> Value2
            = Test.insert(std::pair<int, int>(7, rand()));
        std::pair<std::map<int, int>::iterator, bool> Value3
            = Test.insert(std::pair<int, int>(1, rand()));
        std::pair<std::map<int, int>::iterator, bool> Value4
            = Test.insert(std::pair<int, int>(2, rand()));
        std::pair<std::map<int, int>::iterator, bool> Value5
            = Test.insert(std::pair<int, int>(15, rand()));

        std::map<int, int>::iterator FindIter = Test.find(15);
        // 탐색을 용이하게 하기 위해서 사용한다.
        // 사용성이 좋다.

        // 안의 있는 키 값을 바꾸는 것은 안된다.
        /*for (const std::pair<int, int>& Value : Test)
        {

        }*/

        // std::pair<int, int> Pair;
        // int& Value = Pair;

        std::map<int, int>::iterator StartIter = Test.begin();
        std::map<int, int>::iterator EndIter = Test.end();

        for (; StartIter != EndIter; ++StartIter)
        {
            //Key
            //StartIter->first = 20; 역시나 키값을 바꾸면 안된다. 규칙을 깨기 때문.
            // Value
            //StartIter->second = 50; Value값은 바꿔도 상관없다.

            std::cout << StartIter->first << std::endl;
        }

        //for (const std::pair<int, int>& Value : Test)
        //{
        //    // Key값 바꾸기 금지
        //    Value.first = 20;
        //}
        int a = 0;
    }

    {
        GameEngineMap Test;
        Test.insert(GameEnginePair(5, rand()));
        Test.insert(GameEnginePair(4, rand()));
        Test.insert(GameEnginePair(7, rand()));
        Test.insert(GameEnginePair(1, rand()));
        Test.insert(GameEnginePair(2, rand()));
        Test.insert(GameEnginePair(15, rand()));

        int a = 0;

        GameEngineMap::iterator FindIter = Test.find(15);

        FindIter->second = 20;

        GameEngineMap::iterator StartIter = Test.begin();
        GameEngineMap::iterator EndIter = Test.end();

        for (; StartIter != EndIter; ++StartIter)
        {
            std::cout << StartIter->first << std::endl;
        }
    }
}

    // 맵은 단독으로 & 사용해서 불러 올 수 없다.
    // const를 붙여 안의 내용을 변경하지 않는다 선언해야 &참조 가능하다.
    // 크기를 비교해서 Key값이 크면 오른쪽, 작으면 왼쪽.
    // key 값을 바꿔버리면 맵의 규칙을 깨버리기 때문에 값을 바꿀 수 없다.
    // Value는 상관없다.

    // Map은 노드형 연관 자료구조

    // 탐색을 용이하게 하기 위해서 사용.
    // 사용성이 좋다. Test.Find() 사용할 함수가 있다.
    // 1000개 이하에서는 맵보다 벡터에서 찾는게 더 빠르다.


    // 키가 겹칠때는 무시하면서, 리턴해주는 값은 정상적으로 들어간 노드를 리턴해준다.

    // 가장 왼쪽의 Left Node가 begin이다.
    // next node는 오른쪽의 밑 노드.