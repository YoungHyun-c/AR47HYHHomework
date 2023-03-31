// 058_inheritance.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 캡슐화
// 클래스가 특정 기능들을 내부에 품고있는 특성 그 자체를 캡슐화라고 부른다.
// 캡슐화를 지원하는 문법은 접근제한 지정자
//                  클래스 그자체

// 상속
// 상속은 특정 개념의 특성들을 하위 개념들이 물려 받는 것을 말한다.
// Is a 관계라고 합니다. (상속관계)
// Has a 플레이어는 아이템을 가지고 있다.
// class Item class Weapon Weapon is a Item
// 무기는 아이템이다.
// 포션은 아이템이다.
// 갑옷은 아이템이다.

class Item
{

};

// : public Item 상속을 의미하는 문법
// 상속관계가 된다.
class Weapon : public Item
{

};

int main()
{
    
}

