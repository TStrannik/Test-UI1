#pragma once
#include <iostream>
#include <vector>	//?

const int CS_LEAVE = 0x00;
const int CS_ENTER = 0x01;
const int CS_HOVER = 0x02;
const int CS_WRONG = 0x03;
const int CS_SELEC = 0x04;

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Text;
using namespace System::Threading::Tasks;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;



namespace ClassLibraryUI {
	public ref class uiMenuLine : public System::Windows::Forms::UserControl
	{
#pragma region Fields

	public:
		property Color   ColorLeaveBack;
		property Color   ColorLeaveBord;
		property Color   ColorLine;
		property Color   ColorSelect;

	private:
		StringFormat^ SF = gcnew StringFormat;
		String^ CurrentDir = System::IO::Directory::GetCurrentDirectory();
		int UICompState;

	private: System::Windows::Forms::MaskedTextBox^ mtbBox;

		   String^ Password;

#pragma endregion Fields


#pragma region Kernel
	public:		uiMenuLine(void) { StartSet(); InitializeComponent(); } void StartSet();
	protected: ~uiMenuLine() { if (components) delete components; }

	private: System::ComponentModel::Container^ components;
#pragma endregion Kernel


#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->SuspendLayout();
			   // 
			   // uiMenuLine
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->Name = L"uiMenuLine";
			   this->Size = System::Drawing::Size(600, 30);
			   this->Load += gcnew System::EventHandler(this, &uiMenuLine::uiMenuLine_Load);
			   this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &uiMenuLine::uiMenuLine_Paint);
			   this->ResumeLayout(false);

		   }
#pragma endregion

#pragma region Voids

	private:
		System::Void uiMenuLine_Load(System::Object^ sender, System::EventArgs^ e) {
			//
		}
		System::Void uiMenuLine_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
			int w = Width - 1, h = Height - 1;

			Pen^	 lbdPen = gcnew Pen(ColorLeaveBord);
			Brush^ lbkBrush = gcnew SolidBrush(ColorLeaveBack);

			Pen^ bdPen = gcnew Pen(Color::Black);
			Brush^ bkBrush = gcnew SolidBrush(BackColor);

			bdPen = lbdPen; bkBrush = lbkBrush;
			


			Drawing2D::GraphicsPath^ gp = gcnew Drawing2D::GraphicsPath();

			int lh = 5;
			int lt = h - 5;
			int lb = h - lh;

			g->DrawLine(bdPen, 0, lt, w, lt);
			g->DrawLine(bdPen, w, lt, w, lb);
			g->DrawLine(bdPen, w, lb, 0, lb);
			g->DrawLine(bdPen, 0, lb, 0, lt);
			
			gp->StartFigure();
			gp->AddLine(0, lt, w, lt);
			gp->AddLine(w, lt, w, lb);
			gp->AddLine(w, lb, 0, lb);
			gp->AddLine(0, lb, 0, lt);
			gp->CloseFigure();

			g->FillPath(bkBrush, gp);
		}

#pragma endregion Voids
	
	};
}
