#include "pch.h"
#include "uiToggleOval.h"

using namespace ClassLibraryUI;

void uiToggleOval::uiCostructor() {

	this->MinimumSize = System::Drawing::Size(45, 22);
	SetStyle(
		ControlStyles::AllPaintingInWmPaint |
		ControlStyles::OptimizedDoubleBuffer |
		ControlStyles::ResizeRedraw |
		ControlStyles::SupportsTransparentBackColor |
		ControlStyles::UserPaint, true
	);
	DoubleBuffered = true;


	Checked = false;
	onBackColor = Color::MediumSlateBlue;
	onToggleColor = Color::WhiteSmoke;
	offBackColor = Color::Gray;
	offToggleColor = Color::Gainsboro;
		
}