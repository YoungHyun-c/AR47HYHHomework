// GameEngineMap_04_21.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>
#include <list>
#include "GameEngineMap_04_21.h"


//template<typename DataType0, typename DataType1>
//void TestValue(DataType0 _Data0, DataType1 _Data1)
//{
//}

int main()
{
    GameEngineDebug::LeckCheck();

    {
        // 2진 탐색트리
        // 바이너리 서치트리
        GameEngineMap<int, int> Test;
        Test.insert(GameEnginePair<int, int>(10, rand()));
        Test.insert(GameEnginePair<int, int>(7, rand()));
        Test.insert(GameEnginePair<int, int>(15, rand()));
        Test.insert(GameEnginePair<int, int>(25, rand()));
        Test.insert(GameEnginePair<int, int>(17, rand()));
        Test.insert(GameEnginePair<int, int>(15, rand()));
        Test.insert(GameEnginePair<int, int>(18, rand()));
        Test.insert(GameEnginePair<int, int>(2, rand()));
        Test.insert(GameEnginePair<int, int>(6, rand()));
        Test.insert(GameEnginePair<int, int>(5, rand()));
        Test.insert(GameEnginePair<int, int>(4, rand()));
        Test.insert(GameEnginePair<int, int>(9, rand()));
        Test.insert(GameEnginePair<int, int>(8, rand()));
        Test.insert(GameEnginePair<int, int>(1, rand()));

        //{
        //    GameEngineMap::iterator FindIter = Test.find(7);
        //    GameEngineMap::iterator NextIter = Test.erase(FindIter);
        //}

        //{
        //    GameEngineMap::iterator FindIter = Test.find(10);
        //    GameEngineMap::iterator NextIter = Test.erase(FindIter);
        //}

        std::cout << "그냥 돌리기" << std::endl;
        GameEngineMap<int, int>::iterator StartIter = Test.begin();
        GameEngineMap<int, int>::iterator EndIter = Test.end();
        for (; StartIter != EndIter; ++StartIter)
        {
            std::cout << StartIter->first << std::endl;
        }


        std::cout << "전위 순회" << std::endl;
        Test.FirstOrder();
        std::cout << "중위 순회" << std::endl;
        Test.MidOrder();
        std::cout << "후위 순회" << std::endl;
        Test.LastOrder();


        //GameEngineMap::iterator Start = Test.begin();
        //GameEngineMap::iterator End = Test.end();

        //for (; Start != End; ++Start)
        //{
        //   //GameEngineMap* Object = MapNode * Root;

        //    if (nullptr == Start)
        //    {
        //        continue;
        //    }

        //    delete Object;
        //    Object = nullptr;
        //}


        int a = 0;
    }

    return 1;

    {
        //std::pair<int, int>NewPair;
        //NewPair.first;
        //NewPair.second;

        //std::map<int, int> Test;
        //
        //std::pair<std::map <int, int>::iterator, bool> Value0
        //    = Test.insert(std::pair<int, int>(5, rand()));

        //// 키가 겹칠때는 무시하면서 리턴해주는게 정상적으로 들어간 노드를 리턴해준다.
        //std::pair<std::map<int, int>::iterator, bool> Value7
        //    = Test.insert(std::pair<int, int>(5, rand()));

        //if (Value7.second == false)
        //{
        //    int a = 0;
        //    // 같은 키를 가진 녀석을 넣었다.
        //}

        //std::pair<std::map<int, int>::iterator, bool> Value1
        //    = Test.insert(std::pair<int, int>(4, rand()));
        //std::pair<std::map<int, int>::iterator, bool> Value2
        //    = Test.insert(std::pair<int, int>(7, rand()));
        //std::pair<std::map<int, int>::iterator, bool> Value3
        //    = Test.insert(std::pair<int, int>(1, rand()));
        //std::pair<std::map<int, int>::iterator, bool> Value4
        //    = Test.insert(std::pair<int, int>(2, rand()));
        //std::pair<std::map<int, int>::iterator, bool> Value5
        //    = Test.insert(std::pair<int, int>(15, rand()));

        //std::map<int, int>::iterator FindIter = Test.find(15);
        //std::map<int, int>::iterator NextIter = Test.erase(FindIter);

        //int a = 0;

        //std::map<int, int>::iterator StartIter = Test.begin();
        //std::map<int, int>::iterator EndItser = Test.end();
    }
}

// 템플릿 만들기, Leck 없애기
// 트리형 구조일때 전체 순회하는방법
// FirstOrder(), MidOrder(), LastOrder()
// 순회를 써서 Leck 없애기.

