#include "pch.h"
#include "uiButton.h"

using namespace ClassLibraryUI;

void uiButton::StartSet() {
	//this->MinimumSize = System::Drawing::Size(45, 22);
	SetStyle(
		ControlStyles::AllPaintingInWmPaint |
		ControlStyles::OptimizedDoubleBuffer |
		ControlStyles::ResizeRedraw |
		ControlStyles::SupportsTransparentBackColor |
		ControlStyles::UserPaint, true
	);
	DoubleBuffered = true;

	BackColor = Color::Black;
	ForeColor = Color::White;

	SF->Alignment = StringAlignment::Center;
	SF->LineAlignment = StringAlignment::Center;

	Font = (gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold));

	Text = L"SampleText";
	Caption = L"SampleText";
	BorderRadius = 10;
	ColorLeaveBord = Color::FromArgb(255, 119, 141, 169);
	ColorLeaveBack = Color::Transparent;
	ColorLeaveText = Color::FromArgb(255, 119, 141, 169);

	ColorEnterBord = Color::White;
	ColorEnterBack = Color::Tomato;
	ColorEnterText = Color::White;

}