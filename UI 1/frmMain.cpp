#include "frmMain.h"

#include <Windows.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void APPLICATION_START() {
	system("color 70");
	std::cout << "\n APPLICATION START\n\n";
	std::cout << "\tStatistic:\n\n";

	// Let's code
	std::cout << "\tInfo of Application here =/\n";

	std::cout << "\n\n";
}
void APPLICATION_FORM() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	UI1::frmMain form;
	Application::Run(% form);
}
void APPLICATION_END() {
	std::cout << "\n APPLICATION END\n\n";
	//system("pause");
}

/// ver 0.2.0
int main(array<String^>^ args) {
	APPLICATION_START();
	APPLICATION_FORM();
	APPLICATION_END();
	return 0;
}



// TODO:
// 
// (+) Struct COLORS
// (+) Color schemes
// (+) Cyrilic
// ( ) FormResize
// ( ) Form Win+left etc...
// (+) Component checkbox UI-on\off Android-style
// ( ) Shtorka Curtain
// 
// ( ) AUTHORISZTION form
// ( ) Component line + .gif background
// (+) TetxtBox with Radius = 5 (composite object)
// (+) TetxtBox with placeholder
// ( ) TetxtBox with WRONG-color
// ( ) TetxtBox with simbols\dots, eye
// ( ) TetxtBox with checkmark