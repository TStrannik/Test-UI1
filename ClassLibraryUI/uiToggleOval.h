#pragma once
#include <iostream>
#include <vector>	//?




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

	public ref class uiToggleOval : public System::Windows::Forms::Button		//::UserControl	
	{
	public:
		/// Fields
		property Color onBackColor;
		property Color onToggleColor;
		property Color offBackColor;
		property Color offToggleColor;
		property bool Checked;


	public: uiToggleOval(void) { StartSet(); InitializeComponent(); } void StartSet();
	protected: ~uiToggleOval() { if (components) delete components; }


	private:
		System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// uiToggleOval
			// 
			this->Size = System::Drawing::Size(100, 30);
			this->Click += gcnew System::EventHandler(this, &uiToggleOval::uiToggleOval_Click);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &uiToggleOval::uiToggleOval_Paint);
			this->MouseEnter += gcnew System::EventHandler(this, &uiToggleOval::uiToggleOval_MouseEnter);
			this->MouseLeave += gcnew System::EventHandler(this, &uiToggleOval::uiToggleOval_MouseLeave);
			this->ResumeLayout(false);

		}
		#pragma endregion

		#pragma region Voids
	private:
		System::Void uiToggleOval_Load(System::Object^ sender, System::EventArgs^ e) {
			//
		}
		System::Void uiToggleOval_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			int toggleSize = this->Height - 5;
			Graphics^ g = e->Graphics;

			g->SmoothingMode = SmoothingMode::AntiAlias;
			g->Clear(this->Parent->BackColor);

			if (this->Checked) {
				g->FillPath(gcnew SolidBrush(onBackColor), GetFigurePath());
				g->FillEllipse(
					gcnew SolidBrush(onToggleColor),
					this->Width - this->Height + 1, 2, toggleSize, toggleSize
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
		System::Void uiToggleOval_Click(System::Object^ sender, System::EventArgs^ e) {
			Checked = !Checked; Invalidate();
		}
		System::Void uiToggleOval_MouseEnter(System::Object^ sender, System::EventArgs^ e) { Invalidate(); }
		System::Void uiToggleOval_MouseLeave(System::Object^ sender, System::EventArgs^ e) { Invalidate(); }

		#pragma endregion Voids


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


	};
}


