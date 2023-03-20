// HomeWork0317.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 영어만 씁니다.
// 문자열을 넣어주면 글자 개수를 알아냅니다.
// 0을 포함할지 아닐지는 스스로 정하세요.
// 1번 문제.
int StringCount(const char* _string)
{

    int cnt = 0;
    while (0 != _string[cnt])
    {
        char Ch = _string[cnt];
        putchar(_string[cnt]);
        cnt ++;
    }
    return cnt;
}


int TrimDelete(char* _String)
{
	int Count = 0;

	while (0 != _String[Count])
	{
		char Value = _String[Count];
		if (' ' != Value)
		{
			putchar(Value);
		}

		Count++;
	}

	return 0;
}


int StringToInt(const char* _String)
{
    long num = 0;
    int i = 0;
    while (_String[i] && (_String[i] >= '0' && _String[i] <= '9'))
    {
        num = num * 10 + (_String[i] - '0');
        i++;
    }
    return num;
}

int main()
{
    // int Return = StringCount("aaaa");


    //char Arr0[1024] = "a b c d e";
    //TrimDelete(Arr0);

    //// 영어나 다른글자가 섞여 들어가있는 것을 가정하지 않는다. string을 int로
    int RValue0 = StringToInt("1111");
    
}

