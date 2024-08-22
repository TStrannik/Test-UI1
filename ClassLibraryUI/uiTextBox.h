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
		property bool	 PasswordBox;
		property wchar_t PasswordChar;
		property bool	 ShowPassword;
		property int     BorderRadius;
		property Color   ColorLeaveBack;
		property Color   ColorLeaveBord;
		property Color   ColorLeaveText;
		property Color   ColorEnterBack;
		property Color   ColorEnterBord;
		property Color   ColorEnterText;
		property Color   ColorWrongBack;
		property Color   ColorWrongBord;
		property Color   ColorWrongText;	
		property String^ PlaceHolder;

	private:
		StringFormat^ SF = gcnew StringFormat;
		String^ CurrentDir = System::IO::Directory::GetCurrentDirectory();
		int UICompState;

	private: System::Windows::Forms::MaskedTextBox^ mtbBox;

		String^ Password;

		#pragma endregion Fields

		#pragma region Kernel
	public:		uiTextBox(void) { StartSet(); InitializeComponent(); } void StartSet();
	protected: ~uiTextBox()		{ if (components) delete components; }
	private: System::Windows::Forms::TextBox^ txtBox;
	private: System::Windows::Forms::Label^ lblPH;
	private: System::Windows::Forms::Button^ btnEye;
	protected:

	protected:

	protected:
	private: System::ComponentModel::Container^ components;
		#pragma endregion Kernel

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(uiTextBox::typeid));
			this->txtBox = (gcnew System::Windows::Forms::TextBox());
			this->lblPH = (gcnew System::Windows::Forms::Label());
			this->btnEye = (gcnew System::Windows::Forms::Button());
			this->mtbBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// txtBox
			// 
			this->txtBox->BackColor = System::Drawing::Color::White;
			this->txtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBox->Location = System::Drawing::Point(62, 9);
			this->txtBox->Name = L"txtBox";
			this->txtBox->Size = System::Drawing::Size(20, 13);
			this->txtBox->TabIndex = 0;
			this->txtBox->TextChanged += gcnew System::EventHandler(this, &uiTextBox::txtBox_TextChanged);
			this->txtBox->GotFocus += gcnew System::EventHandler(this, &uiTextBox::RemoveText);
			this->txtBox->LostFocus += gcnew System::EventHandler(this, &uiTextBox::AddText);
			// 
			// lblPH
			// 
			this->lblPH->AutoSize = true;
			this->lblPH->BackColor = System::Drawing::Color::Transparent;
			this->lblPH->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lblPH->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblPH->ForeColor = System::Drawing::Color::LightGray;
			this->lblPH->Location = System::Drawing::Point(3, 4);
			this->lblPH->Name = L"lblPH";
			this->lblPH->Size = System::Drawing::Size(53, 18);
			this->lblPH->TabIndex = 1;
			this->lblPH->Text = L"Holder";
			this->lblPH->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblPH->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &uiTextBox::lblPH_MouseClick);
			// 
			// btnEye
			// 
			this->btnEye->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEye.BackgroundImage")));
			this->btnEye->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnEye->FlatAppearance->BorderSize = 0;
			this->btnEye->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->btnEye->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->btnEye->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEye->Location = System::Drawing::Point(139, 5);
			this->btnEye->Name = L"btnEye";
			this->btnEye->Size = System::Drawing::Size(30, 20);
			this->btnEye->TabIndex = 2;
			this->btnEye->UseVisualStyleBackColor = true;
			this->btnEye->Click += gcnew System::EventHandler(this, &uiTextBox::btnEye_Click);
			this->btnEye->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &uiTextBox::btnEye_Paint);
			this->btnEye->MouseEnter += gcnew System::EventHandler(this, &uiTextBox::btnEye_MouseEnter);
			this->btnEye->MouseLeave += gcnew System::EventHandler(this, &uiTextBox::btnEye_MouseLeave);
			// 
			// mtbBox
			// 
			this->mtbBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mtbBox->Location = System::Drawing::Point(88, 9);
			this->mtbBox->Name = L"mtbBox";
			this->mtbBox->PasswordChar = '*';
			this->mtbBox->Size = System::Drawing::Size(20, 13);
			this->mtbBox->TabIndex = 0;
			this->mtbBox->TextChanged += gcnew System::EventHandler(this, &uiTextBox::mtbBox_TextChanged);
			// 
			// uiTextBox
			// 
			this->Controls->Add(this->lblPH);
			this->Controls->Add(this->btnEye);
			this->Controls->Add(this->txtBox);
			this->Controls->Add(this->mtbBox);
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
			int r = BorderRadius;
			int mw = r < 10 ? 10 : r; int mh = 5;
			int eyeW = PasswordBox ? 20 : 0;

			txtBox->Left = mw; txtBox->Top = mh;
			txtBox->Width = Width - mw * 2 - eyeW - 2;
			txtBox->Visible = !PasswordBox;

			mtbBox->Left = mw; mtbBox->Top = mh;
			mtbBox->Width = Width - mw * 2 - eyeW - 2;
			mtbBox->PasswordChar = PasswordChar;
			mtbBox->Visible = PasswordBox;

			lblPH->Left = txtBox->Left + 1; lblPH->Top = txtBox->Top;
			lblPH->Text = PlaceHolder;

			btnEye->Width = 30; btnEye->Height = 20;
			btnEye->Left = Width - mw - btnEye->Width; btnEye->Top = mh;
			btnEye->Visible = PasswordBox;

			AddText(sender, e);
		}
		System::Void uiTextBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
			int w = Width - 1, h = Height - 1;
			Pen^ ebdPen = gcnew Pen(ColorEnterBord);
			Brush^ ebkBrush = gcnew SolidBrush(ColorEnterBack);
			Brush^ etxBrush = gcnew SolidBrush(ColorEnterText);

			Pen^ lbdPen = gcnew Pen(ColorLeaveBord);
			Brush^ lbkBrush = gcnew SolidBrush(ColorLeaveBack);
			Brush^ ltxBrush = gcnew SolidBrush(ColorLeaveText);

			Pen^ wbdPen = gcnew Pen(ColorWrongBord);
			Brush^ wbkBrush = gcnew SolidBrush(ColorWrongBack);
			Brush^ wtxBrush = gcnew SolidBrush(ColorWrongText);

			Pen^ bdPen = gcnew Pen(Color::Black);
			Brush^ bkBrush = gcnew SolidBrush(BackColor);
			Brush^ txBrush = gcnew SolidBrush(BackColor);


			switch (UICompState) {
			case CS_LEAVE:
				bdPen = lbdPen; bkBrush = lbkBrush; txBrush = ltxBrush;
				BackColor = ColorLeaveBack;
				break;
			case CS_WRONG:
				bdPen = wbdPen; bkBrush = wbkBrush; txBrush = wtxBrush;
				BackColor = ColorWrongBack;
				break;
			}


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

			

			txtBox->BackColor = BackColor;
			mtbBox->BackColor = BackColor;
			btnEye->BackColor = BackColor;
			btnEye->FlatAppearance->MouseOverBackColor = BackColor;
			btnEye->FlatAppearance->MouseDownBackColor = BackColor;
		}
		
		System::Void btnEye_Click(System::Object^ sender, System::EventArgs^ e) {
			ShowPassword ? mtbBox->PasswordChar = PasswordChar : mtbBox->PasswordChar = NULL;
			ShowPassword = !ShowPassword;

			PasswordBox ? mtbBox->Focus() : txtBox->Focus();

			



			/// TODO:
			// Use thah
			//////// FOR paint
			//// CS_WRONG

		//	UICompState = !ShowPassword ? CS_WRONG : CS_LEAVE;
		//	Invalidate();

			
		}
		System::Void btnEye_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			//
		}
		System::Void btnEye_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			btnEye->BackgroundImage = Image::FromFile(getUIDir() + "\\eye1b.png");
		}
		System::Void btnEye_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			btnEye->BackgroundImage = Image::FromFile(getUIDir() + "\\eye1.png");
		}

		System::Void mtbBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			RemoveText(sender, e);
		}
		System::Void txtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			RemoveText(sender, e);
		}
		System::Void lblPH_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			txtBox->Focus(); mtbBox->Focus();
		}

	public:
		void RemoveText(System::Object^ sender, System::EventArgs^ e)
		{ 
			if (!PasswordBox) lblPH->Visible = txtBox->Text->Length == 0;
			else			  lblPH->Visible = mtbBox->Text->Length == 0;
		}

		void AddText(System::Object^ sender, System::EventArgs^ e)
		{ 
			if (!PasswordBox) lblPH->Visible = String::IsNullOrWhiteSpace(txtBox->Text);
			else			  lblPH->Visible = String::IsNullOrWhiteSpace(mtbBox->Text);
		}
		String^ getUIDir() {
			String^ stepDir = CurrentDir;
			int c = CurrentDir->Length - 1;
			while (stepDir[c] != '\\') { stepDir = stepDir->Remove(c); c--; }
			stepDir = stepDir->Remove(c);
			System::IO::Directory::SetCurrentDirectory(stepDir);
			String^ dir = stepDir + "\\ClassLibraryUI\\Sources\\UI\\";
			return dir;
		}

		#pragma endregion Voids

	
	
	
	};
}
