// create a basic windows form with a menu
// modified from BCX generated C code for Dev-C++
// a Dev-C++ tested Windows Application by  vegaseat  04nov2004
#include <windows.h>
#define ID_Exit 101
#define ID_Edit 201
#define ID_Load 301
#define ID_Save 302
static HINSTANCE BCX_hInstance;
static int    BCX_ScaleX;
static int    BCX_ScaleY;
static char   BCX_ClassName[2048];  // default size
static HMENU  MainMenu;             // has to be HMENU type
static HMENU  FileMenu;             // dito
static HWND   Form1;
#define Show(Window) RedrawWindow(Window,0,0,0);ShowWindow(Window,SW_SHOW);
HWND    BCX_Form(char*,int=0,int=0,int=250,int=150,int=0,int=0);
void    FormLoad (void);
BOOL    AddMenu (HWND);
LRESULT CALLBACK WndProc (HWND, UINT, WPARAM, LPARAM);
// this is the main() function under Windows GUI
int WINAPI WinMain(HINSTANCE hInst,HINSTANCE hPrev,LPSTR CmdLine,int CmdShow)
{
 WNDCLASS Wc;
 MSG      Msg;
 // *****************************
 strcpy(BCX_ClassName,"FORM3");
 // ************************************
 // Scale Dialog Units To Screen Units
 // (pixels have not been specified here)
 // ************************************
 RECT rc          =  {0,0,4,8};
 MapDialogRect       (NULL,&rc);
 BCX_ScaleX       =  rc.right/2;
 BCX_ScaleY       =  rc.bottom/4;
 BCX_hInstance    =  hInst;
 // ******************************************************
 Wc.style         =  CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
 Wc.lpfnWndProc   =  WndProc;
 Wc.cbClsExtra    =  0;
 Wc.cbWndExtra    =  0;
 Wc.hInstance     =  hInst;
 Wc.hIcon         =  LoadIcon(NULL,IDI_WINLOGO);
 Wc.hCursor       =  LoadCursor(NULL,IDC_ARROW);
 Wc.hbrBackground =  (HBRUSH)(COLOR_BTNFACE+1);
 Wc.lpszMenuName  =  NULL;
 Wc.lpszClassName =  BCX_ClassName;
 RegisterClass(&Wc);
 FormLoad();
 while(GetMessage(&Msg,NULL,0,0)) {
   HWND hActiveWindow = GetActiveWindow();
   if (!IsWindow(hActiveWindow) || !IsDialogMessage(hActiveWindow,&Msg)) {
     TranslateMessage(&Msg);
     DispatchMessage(&Msg);
   }
 }
 return Msg.wParam;
}
// create the windows form in style selected
HWND BCX_Form(char *Caption, int X, int Y, int W, int H, int Style, int Exstyle)
{
  HWND  A;
  if (!Style) {
    Style= WS_MINIMIZEBOX  |
    WS_SIZEBOX      |
    WS_CAPTION      |
    WS_MAXIMIZEBOX  |
    WS_POPUP        |
    WS_SYSMENU;
  }
  A = CreateWindowEx(Exstyle,BCX_ClassName,Caption,
    Style,
    X*BCX_ScaleX,
    Y*BCX_ScaleY,
    (4+W)*BCX_ScaleX,
    (12+H)*BCX_ScaleY,
    NULL,(HMENU)NULL,BCX_hInstance,NULL);
  SendMessage(A,(UINT)WM_SETFONT,(WPARAM)GetStockObject(DEFAULT_GUI_FONT),
    (LPARAM)MAKELPARAM(FALSE,0));
  return A;
}
// the details like upper left corner coordinates, width, height ...
// are in Dialog Units 
void FormLoad (void)
{
  Form1=BCX_Form("A Form with a menu ...",20,10,200,100);
  AddMenu(Form1);
  Show(Form1);
}
BOOL AddMenu (HWND hwndOwner)
{
  MainMenu=CreateMenu();
  FileMenu=CreateMenu();
  InsertMenu(MainMenu,ID_Edit,MF_POPUP,(UINT)FileMenu,"File");
  AppendMenu(FileMenu,MF_STRING,ID_Load,"&Load");
  AppendMenu(FileMenu,MF_STRING,ID_Save,"&Save");
  AppendMenu(FileMenu,MF_SEPARATOR,0,"");
  AppendMenu(FileMenu,MF_STRING,ID_Exit,"E&xit");
  //  activate menu 
  if (!SetMenu(hwndOwner,MainMenu)) {
    return FALSE;
  }
  return TRUE;
}
// standard windows message handler
LRESULT CALLBACK WndProc (HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  while(1) {
    if (Msg==WM_COMMAND) {
      if (LOWORD(wParam)==ID_Exit) {
        PostQuitMessage(0);
      }
      // do something with other menu items here, 
      // normally one calls up a file load/save dialog box
      if (LOWORD(wParam)==ID_Load) {
        SetWindowText(Form1,"Load ...");
      }
      if (LOWORD(wParam)==ID_Save)  {
        SetWindowText(Form1,"Save ...");
      }
      return 0;
      break;
    }
    break;
  }
  // tidy up and exit the program via the form's upper left corner x 
  if (Msg==WM_DESTROY) {
     UnregisterClass(BCX_ClassName,BCX_hInstance);
     PostQuitMessage(0);
  }
  return DefWindowProc(hWnd,Msg,wParam,lParam);
}
// *************************************************************
//   Created with BCX -- The BASIC To C Translator (ver 5.02)
//  BCX (c) 1999, 2000, 2001, 2002, 2003, 2004 by Kevin Diggins
// *************************************************************
