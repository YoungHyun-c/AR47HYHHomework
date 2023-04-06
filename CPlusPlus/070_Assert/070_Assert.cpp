// 070_Assert.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <assert.h>
#include <Windows.h>

void MsgBoxAssert(const char* _Text)
{
	MessageBoxA(nullptr, "내용", "제목", MB_OK);
	assert(false);
}

int main()
{
	MsgBoxAssert("몬가 잘못됨.");
}

