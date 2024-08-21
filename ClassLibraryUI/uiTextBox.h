#pragma once
#include <iostream>
#include <vector>	//?


const int CS_LEAVE = 0x00;
const int CS_ENTER = 0x01;
const int CS_HOVER = 0x02;
const int CS_WRONG = 0x03;


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
	public ref class uiTextBox : public System::Windows::Forms::UserControl
	{
		#pragma region Fields
	public:
		property int     BorderRadius;
		property String^ Caption;
		property Color   ColorLeaveBack;
		property Color   ColorLeaveBord;
		property Color   ColorLeaveText;
		property Color   ColorEnterBack;
		property Color   ColorEnterBord;
		property Color   ColorEnterText;

	private:
		StringFormat^ SF = gcnew StringFormat;
		#pragma endregion Fields

		#pragma region Kernel
	public:		uiTextBox(void) { StartSet(); InitializeComponent(); } void StartSet();
	protected: ~uiTextBox()		{ if (components) delete components; }
	private: System::Windows::Forms::TextBox^ txtBox;
	protected:

	protected:

	protected:
	private: System::ComponentModel::Container^ components;
		#pragma endregion Kernel

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->txtBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtBox
			// 
			this->txtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBox->Location = System::Drawing::Point(4, 9);
			this->txtBox->Name = L"txtBox";
			this->txtBox->Size = System::Drawing::Size(146, 13);
			this->txtBox->TabIndex = 0;
			this->txtBox->TextChanged += gcnew System::EventHandler(this, &uiTextBox::txtBox_TextChanged);
			// 
			// uiTextBox
			// 
			this->Controls->Add(this->txtBox);
			this->Name = L"uiTextBox";
			this->Size = System::Drawing::Size(170, 30);
			this->Load += gcnew System::EventHandler(this, &uiTextBox::uiTextBox_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &uiTextBox::uiTextBox_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion

		#pragma region Voids
	private: 
		System::Void uiTextBox_Load(System::Object^ sender, System::EventArgs^ e) {
			txtBox->Left = 10; txtBox->Top = 5; txtBox->Width = Width - 20;


		}

		System::Void uiTextBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;

			int w = Width - 1, h = Height - 1;

			Pen^	 ebdPen = gcnew Pen(ColorEnterBord);
			Brush^ ebkBrush = gcnew SolidBrush(ColorEnterBack);
			Brush^ etxBrush = gcnew SolidBrush(ColorEnterText);

			Pen^	 lbdPen = gcnew Pen(ColorLeaveBord);
			Brush^ lbkBrush = gcnew SolidBrush(ColorLeaveBack);
			Brush^ ltxBrush = gcnew SolidBrush(ColorLeaveText);

			Pen^	 bdPen = gcnew Pen(Color::Black);
			Brush^ bkBrush = gcnew SolidBrush(BackColor);
			Brush^ txBrush = gcnew SolidBrush(BackColor);
			
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;	// :AntiAlias;
			g->Clear(Parent->BackColor);


			int r = BorderRadius;

			if (r == 0) {
				g->DrawRectangle(bdPen, 0, 0, w, h);
				g->FillRectangle(bkBrush, 0, 0, w, h);
			}
			else {
				Drawing2D::GraphicsPath^ gp = gcnew Drawing2D::GraphicsPath();

				g->DrawLine(bdPen, r, 0, w - r, 0); g->DrawArc(bdPen, w - r * 2, 0, r * 2, r * 2, 270, 90);
				g->DrawLine(bdPen, w, r, w, h - r); g->DrawArc(bdPen, w - r * 2, h - r * 2, r * 2, r * 2, 360, 90);
				g->DrawLine(bdPen, w - r, h, r, h); g->DrawArc(bdPen, 0, h - r * 2, r * 2, r * 2, 90, 90);
				g->DrawLine(bdPen, 0, h - r, 0, r); g->DrawArc(bdPen, 0, 0, r * 2, r * 2, 180, 90);

				gp->AddLine(r, 0, w - r, 0);		gp->AddArc(w - r * 2, 0, r * 2, r * 2, 270, 90);
				gp->AddLine(w, r, w, h - r);		gp->AddArc(w - r * 2, h - r * 2, r * 2, r * 2, 360, 90);
				gp->AddLine(w - r, h, r, h);		gp->AddArc(0, h - r * 2, r * 2, r * 2, 90, 90);
				gp->AddLine(0, h - r, 0, r);		gp->AddArc(0, 0, r * 2, r * 2, 180, 90);
				gp->CloseFigure();

				g->FillPath(bkBrush, gp);
			}

		}

		System::Void txtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			Graphics^ g = txtBox->CreateGraphics();
			Brush^ txBrush = gcnew SolidBrush(Color::Gray);
			StringFormat^ HF = gcnew StringFormat;

			SF->Alignment	  = StringAlignment::Near;
			SF->LineAlignment = StringAlignment::Near;

			int l = txtBox->Left,	   t = txtBox->Top;
			int w = txtBox->Width - 1, h = txtBox->Height - 1;
			String^ PHolder = L"Holder";

			g->DrawString(PHolder, Font, txBrush, 0, 0, HF);
		}

		#pragma endregion Voids
	
	
};
}



/*
Textbox myTxtbx = new Textbox();
myTxtbx.Text = "Enter text here...";
myTxtbx.GotFocus += GotFocus.EventHandle(RemoveText);
myTxtbx.LostFocus += LostFocus.EventHandle(AddText);
public void RemoveText(object sender, EventArgs e)
{
	if (myTxtbx.Text == "Enter text here...")
	{
		myTxtbx.Text = "";
	}
}
public void AddText(object sender, EventArgs e)
{
	if (string.IsNullOrWhiteSpace(myTxtbx.Text))
		myTxtbx.Text = "Enter text here...";
}
*/