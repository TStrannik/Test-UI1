#include "pch.h"
#include "uiTextBox.h"

using namespace ClassLibraryUI;

void uiTextBox::StartSet() {

	SetStyle(
		ControlStyles::AllPaintingInWmPaint |
		ControlStyles::OptimizedDoubleBuffer |
		ControlStyles::ResizeRedraw |
		ControlStyles::SupportsTransparentBackColor |
		ControlStyles::UserPaint, true
	);
	DoubleBuffered = true;


	BackColor = Color::White;
	ForeColor = Color::Black;


	SF->Alignment = StringAlignment::Center;
	SF->LineAlignment = StringAlignment::Center;

	Text = L"SampleText";
	PlaceHolder = L"Holder";

	PasswordBox = false;
	PasswordChar = '*';
	ShowPasswordChar = true;

	BorderRadius = 10;
	ColorLeaveBord = Color::FromArgb(255, 119, 141, 169);
	ColorLeaveBack = Color::Transparent;
	ColorLeaveText = Color::FromArgb(255, 119, 141, 169);

	ColorEnterBord = Color::White;
	ColorEnterBack = Color::Tomato;
	ColorEnterText = Color::White;
}