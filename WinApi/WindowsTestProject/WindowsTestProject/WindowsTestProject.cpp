// WindowsTestProject.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "WindowsTestProject.h"

#define MAX_LOADSTRING 100

// 전역 변수:
HINSTANCE hInst;                                // 현재 인스턴스입니다.
WCHAR szTitle[MAX_LOADSTRING] = L"Test";                  // 제목 표시줄 텍스트입니다.
WCHAR szWindowClass[MAX_LOADSTRING] = L"AAAA";            // 기본 창 클래스 이름입니다.

// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

// 윈도우의 핸들 방식에 대해서 이해해야 합니다.
// 윈도우는 진입점을 지들이 바꿔놨다.
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{

    // 윈도우가 응용프로그래머에게 주는 우리 프로그램의 등록번호
    // ex) 너는 301211번이야 앞으로 나한테 뭔가를 부탁할때 301211내놔
    // HINSTANCE hInstance 8바이트 정수값.

    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);
    // 경고를 받지 않으려고 짠 코드이다.
    // int Value = 10; 속성 -> C/C++ 일반 -> 경고수준 -> 모든경고로 했다면 초기화 하고 사용하지 않으면 경고뜸
    // (Value); 사용했다고 치는 코드.

    // TODO: 여기에 코드를 입력합니다.
    // 전역 문자열을 초기화합니다.
    // 윈도우가 내 프로그램에 부여된 번호
    // 내 프로그램에 몇가지  니 프로그램의 이름은 뭐고 미리 넣어놓습니다.
    //LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_WINDOWSTESTPROJECT, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // 애플리케이션 초기화를 수행합니다:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINDOWSTESTPROJECT));

    MSG msg;

    // 기본 메시지 루프입니다:
    // 윈도우가 켜져있는 동안 계속 프로그램이 켜져있게 만들려고 while로 막아놓는다.
    // GetMessage는 윈도우에 무슨일이 생길때만 리턴되는 함수이다.
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  함수: MyRegisterClass()
//
//  용도: 창 클래스를 등록합니다.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    // 윈도우 창을 띄우겠다는건 알겠는데, 윈도우 창의 설정을 어떻게 할지 정하는 곳.

    wcex.cbSize = sizeof(WNDCLASSEX);

    // 크기 바꾸면 다시 그려라.
    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    // 핵심) 윈도우에 무슨일이 생기면 어떻게 해야해?
    // UI에서 사용한다고 했다. 함수포인터
    // 내가 너 대신 그 행동(함수)을 해줄께.
    wcex.lpfnWndProc    = WndProc;

    // 모름 0이면 기본설정
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;

    // 이 윈도우 클래스를 등록하려는 프로그램이 나야.
    wcex.hInstance      = hInstance;

    // 윈도우 기본 아이콘
    wcex.hIcon = nullptr;//LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINDOWSTESTPROJECT));

    // 커서를 정합니다.
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);

    // 윈도우 색깔 게임 배경넣게 되면 의미가 없다.
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);

    // 윈도우 메뉴
    // wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WINDOWSTESTPROJECT);
    wcex.lpszMenuName = nullptr;

    // 이 형식의 이름은 "AAAA" 입니다.
    // 앞으로 제가 윈도우 만들때 선택할 수 있는 형식중에 1가지로 "AAAA"를
    // 등록해주세요.
    wcex.lpszClassName  = szWindowClass;

    // 윈도우창 배너 아이콘 바꾸기.
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    // "AAAA" 윈도우 형식은 메뉴를 사용하지 않아.
    // 윈도우 형식을 등록하는 함수.
    return RegisterClassExW(&wcex);
}

//
//   함수: InitInstance(HINSTANCE, int)
//
//   용도: 인스턴스 핸들을 저장하고 주 창을 만듭니다.
//
//   주석:
//
//        이 함수를 통해 인스턴스 핸들을 전역 변수에 저장하고
//        주 프로그램 창을 만든 다음 표시합니다.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // 인스턴스 핸들을 전역 변수에 저장합니다.

   // 윈도우 만드는 함수인
   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);
   
   // szWindowClass "AAAA" 형식 윈도우 만들어주세요.
   // szTitle  타이틀은 이걸로 해주세요
   // WS_OVERLAPPEDWINDOW /윈도우 스타일은 이걸로해주세요.
   // CW_USEDEFAULT 위치 X
   // 0 시작점위치 X
   // CW_USEDEFAULT 위치 Y
   // 0 시작점위치 Y
   // 
   // nullptr
   // nullptr
   // hInstance 윈도우의 주인은?? hInstance
   // nullptr 


   HWND hWnd0 = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
       0, 100, CW_USEDEFAULT, 200, nullptr, nullptr, hInstance, nullptr);


   if (!hWnd)
   {
      return FALSE;
   }

   // 윈도우창 보여줘.
   ShowWindow(hWnd, nCmdShow);
   ShowWindow(hWnd0, nCmdShow);
   // 윈도우 한번 갱신해라.
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  함수: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  용도: 주 창의 메시지를 처리합니다.
//
//  WM_COMMAND  - 애플리케이션 메뉴를 처리합니다.
//  WM_PAINT    - 주 창을 그립니다.
//  WM_DESTROY  - 종료 메시지를 게시하고 반환합니다.
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    // HWND hwnd <= 어떤 윈도우에 메시지가 왔는지 알려주는

    // message는 윈도우에서 벌어진 일의 종류
    // ex)윈도우가 선택됐어
    // ex)윈도우가 크기가 바뀌었어. //WPARAM, LPARAM <= 크기
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // 메뉴 선택을 구문 분석합니다:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: 여기에 hdc를 사용하는 그리기 코드를 추가합니다...

            // HDC hdc 내가 ~~~ 윈도우의 화면에 뭔가를 그리고 싶어요.
            // 화면에 그리기 위한 권한이다.

            Rectangle(hdc, 100, 100, 200, 200);

            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        // GetMessage함수에서 0을 리턴하게한다.
        PostQuitMessage(0);
        break;
    default:
        // 윈도우에서 니가 처리할 수 없으면 기본적으로 우리가 처리하는 방식으로 처리해줄께.
        // 안해놓으면 위험할 수 있음.
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// 정보 대화 상자의 메시지 처리기입니다.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
