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
		cnt++;
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


//int StringToInt(const char* _String)
//{
//
//    int num = 0;
//    int i = 0;
//    for (i = 0; _String[i] != 0; i++) {
//        num = num * 10 + _String[i] - '0';
//    }
//    return num;
//}

int StringToInt(const char* _String)
{
	int num = 0;
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
	int RValue0 = StringToInt("1111121312312131233");

	int a = 0;
}



// 선생님 풀이
// 1번 문제 문자카운트
int StringCount(const char* _String)
{
	int nLength = 0;
	int i = 0;
	while (_String[nLength] != '\0')
	{
		++nLength;
	}
}

// 2번 문제 공백제거
void TrimDelete(char* _String)
{
	char Arr[1024];
	int OriginCount = 0;
	int ReturnCount = 0;

	while (_String[OriginCount] != '\0')
	{
		if (_String[OriginCount] != ' ')
		{
			Arr[ReturnCount] = _String[OriginCount];
			++ReturnCount;
		}
		++OriginCount;
	}
	int CopyCount = 0;
	while (Arr[CopyCount] != '\0')
	{
		_String[CopyCount] = Arr[CopyCount];
		++CopyCount;
	}
	_String[CopyCount] = 0;

	printf("\n\n");
}

int StringToInt(const char* _String)
{
	int nResult = 0;
	int nIndex = 0;

	while (_String[nIndex] != '\0' && (_String[nIndex] >= '0' && _String[nIndex] <= '9'))
	{
		char Value = _String[nIndex];
		nResult = nResult * 10 + (_String[nIndex] - '0');
		nIndex++;
	}
	return nResult;
}


int PtrStringCount(const char* _String)
{
	int count = 0;
	while (int value = _String[count] != 0)
	{
		count++;
	}
	return count;
}
int StringCount(const char* _String)
{
	int num = PtrStringCount(_String);

	int Value = 0;
	int count = 0;
	while (num - count != 0)
	{
		char ASC = _String[count];
		int a = ASC - '0';
		int loop = num - count;
		while (--loop)
		{
			a = a * 10;
		}
		Value = Value + a;
		count++;
	}
	return Value;
}