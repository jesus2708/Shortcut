#include "stdafx.h"  //________________________________________ Shortcut.cpp
#include "Shortcut.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Shortcut app;
	return app.BeginDialog(IDI_Shortcut, hInstance);
}

void Shortcut::Window_Open(Win::Event& e)
{
}

void Shortcut::btClick_Click(Win::Event& e)
{
	wchar_t c = tbx1.Text[0];
	switch (c)
	{
	case 'a':
		this->Text = L"Ana";
		break;
	case 'b':
		this->Text = L"Rosa";
		break;
	case 'c':
		this->Text = L"Gris";
		break;
	case 'd':
		this->Text = L"Fabi";
		break;
	case 'e':
		this->Text = L"Mayra";
		break;
	default:
		this->Text = L"error";

	}
}

