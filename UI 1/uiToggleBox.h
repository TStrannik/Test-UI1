#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Text;
using namespace System::Threading::Tasks;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::ComponentModel;



ref class uiToggleBox : CheckBox
{
	
private:
	/// Fields
	Color onBackColor    = Color::MediumSlateBlue;
	Color onToggleColor  = Color::WhiteSmoke;
	Color offBackColor   = Color::Gray;
	Color offToggleColor = Color::Gainsboro;
	
public:
	/// Constructor
	uiToggleBox() { this->MinimumSize = System::Drawing::Size(45, 22); }

private:
	GraphicsPath^ GetFigurePath()
	{
		int arcSize = this->Height - 1;
		Rectangle^ leftArc = gcnew Rectangle(0, 0, arcSize, arcSize);
		Rectangle^ rightArc = gcnew Rectangle(this->Width - arcSize - 2, 0, arcSize, arcSize);

		GraphicsPath^ path = gcnew GraphicsPath();
		path->StartFigure();
		path->AddArc(*leftArc, 90, 180);
		path->AddArc(*rightArc, 270, 180);
		path->CloseFigure();

		return path;
	}

protected:
	void Paint(System::Windows::Forms::PaintEventArgs^ e) {
		//this->Paint(e);

		int toggleSize = this->Height - 5;
		Graphics^ g = e->Graphics;

		g->SmoothingMode = SmoothingMode::AntiAlias;
		g->Clear(this->Parent->BackColor);

		if (this->Checked) {
			g->FillPath(gcnew SolidBrush(onBackColor), GetFigurePath());
			g->FillEllipse(
				gcnew SolidBrush(onToggleColor),
				this->Width - this->Height + 1, 2, toggleSize, toggleSize
				/*gcnew Rectangle(this->Width - this->Height + 1, 2, toggleSize, toggleSize)*/
			);
		}
		else {
			g->FillPath(gcnew SolidBrush(offBackColor), GetFigurePath());
			g->FillEllipse(
				gcnew SolidBrush(offToggleColor),
				2, 2, toggleSize, toggleSize
			);
		}
	}
};

