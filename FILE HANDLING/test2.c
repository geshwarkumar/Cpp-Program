/* Create nice looking controls */
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' \
					   version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' \
						language='*'\"")

#include <Windows.h>	
#include "resource.h"	// We want to use our resource that we created, so we need to include the resouces header file. 

/// Global variables
const char *clsName = "WinAPI";
char *title = "Windows API";
bool running = true;
HWND hWnd = NULL;

LRESULT WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain( HINSTANCE hInstance,		
					HINSTANCE hPrevInstance,	
					LPSTR lpCmdLine,			
					int nCmdShow)				
{			
	WNDCLASSEX	WndEx;								
	MSG			msg;

	// Set up the windows class structure
	WndEx.cbSize			= sizeof(WNDCLASSEX);					
	WndEx.style				= CS_HREDRAW | CS_VREDRAW | CS_OWNDC;				
	WndEx.lpfnWndProc		= (WNDPROC)WndProc;							
	WndEx.cbClsExtra		= 0;								
	WndEx.cbWndExtra		= 0;									
	WndEx.hIcon				= LoadIcon(NULL, IDI_APPLICATION);	
	WndEx.hCursor			= LoadCursor(NULL, IDC_ARROW);		
	WndEx.hbrBackground		= NULL;								
	WndEx.lpszMenuName		= MAKEINTRESOURCE(IDR_MAIN_MENU);	// Create our menu from the resource we made 						
	WndEx.lpszClassName		= clsName;							
	WndEx.hInstance			= hInstance;										
	WndEx.hIconSm			= LoadIcon(NULL, IDI_APPLICATION);		

	// Register the windows class
	if (!RegisterClassEx(&WndEx))
	{
		MessageBox(NULL, "Failed to register class", "ERROR", MB_OK | MB_IConerror);
		return 0;
	}

	// Create the window
	if (!(hWnd = CreateWindowEx(WS_EX_APPWINDOW | WS_EX_WINDOWEDGE,
								clsName,							
								title,								
								WS_OVERLAPPEDWINDOW |				
								WS_CLIPSIBLINGS | WS_CLIPCHILDREN,				
								CW_USEDEFAULT, CW_USEDEFAULT,		
								460, 340,							
								NULL,							
								NULL,								
								hInstance,							
								NULL)))								
	{	
		MessageBox(NULL, "Failed to create the window", "ERROR", MB_OK | MB_IConerror);
		return 0;
	}

	// The window is initially hidden, we need to show it
	ShowWindow(hWnd, SW_SHOW);	

	// The main message loop of our program 
	while(running)								
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))	
		{
			TranslateMessage(&msg);			
			DispatchMessage(&msg);			
		}
	}

	return msg.wParam;
}


LRESULT WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)									
	{
		case WM_CLOSE:	
			DestroyWindow(hWnd);
			return 0;

        case WM_DESTROY:
            PostQuitMessage(0);
			running = false;
			return 0;

		case WM_COMMAND:											
		{
			switch(LOWORD(wParam))
			{  
				case IDM_EXIT_APP:
					PostQuitMessage(0);
					running = false;
					break;
			}

		} break;

		default:
			return DefWindowProc(hWnd,uMsg,wParam,lParam);
	}
}
