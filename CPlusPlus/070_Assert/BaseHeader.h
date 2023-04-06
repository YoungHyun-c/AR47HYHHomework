#pragma once

#include <Windows.h>
#include <assert.h>

inline void MsgBoxAssert(const char* _Text)
{
	MessageBoxA(nullptr, _Text, "Error", MB_OK);
	assert(false);
}

// #define MsgBoxAssert(Text) MessageBox(nullptr, Text, "Error", "MB_OK"); assert(false);