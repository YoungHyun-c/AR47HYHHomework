// 002_Compaile.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 이 아래의 내용이 뭔가 의미가 있다고 치면
// 이걸 만들어내는 과정을 컴파일이라고 합니다.
//전처리기 => 컴파일러 => 어셈블러 => 링커 => .exe라는 과정을 거칩니다.

//전처리기가 하는 일부터 알아보겠습니다.
//전처리기는 전처리문이라고 하는 것들을 처리하는 단계입니다.

//전처리기가 하는일
//1. 주석삭제 <= 주석은 기본적으로 프로그램에 아무런 쓸모가 없으므로
//  지워서 컴파일을 하는데 방해가 안되게 해야 한다.

//전처리문은 여러가지가 있는데
// # <= 붙어 있으면 왠만하면 전처리 문입니다.
// #include <= 치환 복붙이라 생각하면 됨


//그 파일을 사용하겠다 => #include < 파일명> Cntrl + Shift + G -> 상위 폴더로 가는 방법
//#include <iostream>  =>> 아래 내용과 같음
// *************    iostream standard header ********************************************
// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
#pragma once
#ifndef _IOSTREAM_
#define _IOSTREAM_
#include <yvals_core.h>
#if _STL_COMPILER_PREPROCESSOR
#include <istream>

#pragma pack(push, _CRT_PACKING)
#pragma warning(push, _STL_WARNING_LEVEL)
#pragma warning(disable : _STL_DISABLED_WARNINGS)
_STL_DISABLE_CLANG_WARNINGS
#pragma push_macro("new")
#undef new
_STD_BEGIN
#ifdef _M_CEE_PURE
__PURE_APPDOMAIN_GLOBAL extern istream cin;
__PURE_APPDOMAIN_GLOBAL extern ostream cout;
__PURE_APPDOMAIN_GLOBAL extern ostream cerr;
__PURE_APPDOMAIN_GLOBAL extern ostream clog;
__PURE_APPDOMAIN_GLOBAL extern istream* _Ptr_cin;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_cout;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_cerr;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_clog;

__PURE_APPDOMAIN_GLOBAL extern wistream wcin;
__PURE_APPDOMAIN_GLOBAL extern wostream wcout;
__PURE_APPDOMAIN_GLOBAL extern wostream wcerr;
__PURE_APPDOMAIN_GLOBAL extern wostream wclog;
__PURE_APPDOMAIN_GLOBAL extern wistream* _Ptr_wcin;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wcout;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wcerr;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wclog;
#else // _M_CEE_PURE
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT istream cin;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream cout;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream cerr;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream clog;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT istream * _Ptr_cin;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream * _Ptr_cout;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream * _Ptr_cerr;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream * _Ptr_clog;

_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wistream wcin;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream wcout;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream wcerr;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream wclog;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wistream * _Ptr_wcin;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream * _Ptr_wcout;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream * _Ptr_wcerr;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream * _Ptr_wclog;

#ifdef _CRTBLD // TRANSITION, ABI: _Winit appears to be unused
class _CRTIMP2_PURE_IMPORT _Winit {
public:
    __thiscall _Winit();
    __thiscall ~_Winit() noexcept;

private:
    __PURE_APPDOMAIN_GLOBAL static int _Init_cnt;
};
#endif // _CRTBLD

#endif // _M_CEE_PURE
_STD_END
#pragma pop_macro("new")
_STL_RESTORE_CLANG_WARNINGS
#pragma warning(pop)
#pragma pack(pop)
#endif // _STL_COMPILER_PREPROCESSOR
#endif // _IOSTREAM_


int main()
{
    std::cout << "Hello World!\n";
}

