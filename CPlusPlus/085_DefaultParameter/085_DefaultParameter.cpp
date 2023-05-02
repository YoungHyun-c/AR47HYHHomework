// 085_DefaultParameter.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 인자 값에 50 넣기.
void Function(int _Value = 50)
{
    std::cout << _Value << std::endl;
}

void Function1(int _Test, int _Value = 50)
{
    std::cout << _Value << std::endl;
}

// 디폴트 인자는 무조건 인자의 가장 오른쪽 부터 만들 수 있기 때문에 안된다.
//void Function0(int _Value = 50, int _Test)
//{
//    std::cout << _Value << std::endl;
//}

int main()
{
    // 50의 값이 패시브로 들어가야 된다하면.
    /*Function(50);
    Function(50);
    Function(50);
    Function(50);
    Function(50);
    Function(50);
    Function(50);
    Function(50);*/

    Function();
    Function1(10);

}
