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

	//Text = L"SampleText";
	PlaceHolder = L"Placeholder";

	PasswordBox = false;
	PasswordChar = '*';
	ShowPassword = false;


	BorderRadius = 10;
	ColorLeaveBord = Color::Black;
	ColorLeaveBack = Color::White;
	ColorLeaveText = Color::Black;

	ColorEnterBord = Color::White;
	ColorEnterBack = Color::Tomato;
	ColorEnterText = Color::White;

	ColorWrongBack = Color::LightCoral;
	ColorWrongBord = Color::Red;
	ColorWrongText = Color::Black;

}