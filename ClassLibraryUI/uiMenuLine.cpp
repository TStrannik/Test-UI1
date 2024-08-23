#include "pch.h"
#include "uiMenuLine.h"

using namespace ClassLibraryUI;

void uiMenuLine::StartSet() {

	SetStyle(
		ControlStyles::AllPaintingInWmPaint |
		ControlStyles::OptimizedDoubleBuffer |
		ControlStyles::ResizeRedraw |
		ControlStyles::SupportsTransparentBackColor |
		ControlStyles::UserPaint, true
	);
	DoubleBuffered = true;


	ColorLeaveBord = Color::Black;
	ColorLeaveBord = Color::White;
	ColorLeaveBack = Color::White;
	ColorLeaveBack = Color::Transparent;

	ColorLine = Color::White;
	ColorSelect = Color::Red;
}