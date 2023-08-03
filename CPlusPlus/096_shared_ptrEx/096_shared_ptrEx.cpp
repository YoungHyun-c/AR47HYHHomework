// 096_shared_ptrEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <memory>

template<typename Object>
class Myptr
{
public:
	Object* Ptr;
	int* RefCount;
};

class Monster : public std::enable_shared_from_this<Monster>
{
public:
	// 이게 침습형
	// int RefCount; // 직접 갖고있는것.

public:
	//std::shared_ptr<Monster> GetThis()
	//{
	//	//++RefCount;
	//	return std::shared_ptr<Monster>(this);
	//}
};

int main()
{
	std::shared_ptr<Monster> NewMonster = std::make_shared<Monster>();
	std::shared_ptr<Monster> NewMonster0 = NewMonster;
	std::shared_ptr<Monster> NewMonster1 = NewMonster;
	std::shared_ptr<Monster> NewMonster2 = NewMonster;

	NewMonster2->shared_from_this();


}