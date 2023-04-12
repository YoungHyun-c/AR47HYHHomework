// GameEngineVector.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
// stl 자료구조 입니다.
#include <vector>
#include <GameEngineBase/GameEngineDebug.h>


// vector는 배열을 대체합니다.
// 조금 특징이 다릅니다.

// 일반적인 배열 바로 접근이 가능하다.
// [][][][][][][][접근]

typedef int DataType;

class MyVector
{
public:
    // 배열의 크기
    size_t Capacity = 0;
    // 넣어준 원소의 크기
    size_t Size = 0;

    DataType* ArrData;
};



int main()
{
    // 벡터는 값을 넣으면 알아서 확장해준다.

    std::vector<int> Test;

    // push_back 10번을 한것과 똑같은 크기로 만들어준다.
    // 벡터에서는 이미 10개의 int를 공간을 확장하면서
    // 원소 자체도 넣어주는걸 resize라고 합니다.
    Test.resize(10);

    // 벡터는 넣는다는 개념이고,
    // 최초 아무것도 없다.
    // Test
    // 내부에서 벌어지고 있으니까
    // 이런 사용법은 vector를 사용하는 최악의 사용법으로 불린다.
    Test.push_back(0);
    // [0]
    Test.push_back(0);
    // [0][0]
    Test.push_back(0);
    // [0][0][0]
    Test.push_back(0);
    // [0][0][0][0]

    // 벡터에서 할당 재할당이 일어나는지 알고있어야한다.


    // reserves는 벡터의 크기(capacity)를 지정한다. 몇개 지정할지 모른다면 대략으로라도 reserve를 사용하여 지정한다.

}

