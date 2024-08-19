#pragma once

namespace UI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlMenu;
	protected:
	private: System::Windows::Forms::Panel^ pnlLogo;
	private: System::Windows::Forms::Panel^ pnlLine;
	private: System::Windows::Forms::Panel^ pnlHeader;
	private: System::Windows::Forms::Panel^ pnlFooter;
	private: System::Windows::Forms::Button^ btnGavka;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ pnlGavkaSM;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnLCls;
	private: System::Windows::Forms::Button^ btnLMin;
	private: System::Windows::Forms::Button^ btnLMax;






	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->pnlMenu = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pnlGavkaSM = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnGavka = (gcnew System::Windows::Forms::Button());
			this->pnlLogo = (gcnew System::Windows::Forms::Panel());
			this->pnlLine = (gcnew System::Windows::Forms::Panel());
			this->btnLMin = (gcnew System::Windows::Forms::Button());
			this->btnLMax = (gcnew System::Windows::Forms::Button());
			this->btnLCls = (gcnew System::Windows::Forms::Button());
			this->pnlHeader = (gcnew System::Windows::Forms::Panel());
			this->pnlFooter = (gcnew System::Windows::Forms::Panel());
			this->pnlMenu->SuspendLayout();
			this->pnlGavkaSM->SuspendLayout();
			this->pnlLine->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlMenu
			// 
			this->pnlMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMenu->Controls->Add(this->btnExit);
			this->pnlMenu->Controls->Add(this->button5);
			this->pnlMenu->Controls->Add(this->pnlGavkaSM);
			this->pnlMenu->Controls->Add(this->btnGavka);
			this->pnlMenu->Controls->Add(this->pnlLogo);
			this->pnlMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlMenu->Location = System::Drawing::Point(0, 35);
			this->pnlMenu->Margin = System::Windows::Forms::Padding(4);
			this->pnlMenu->Name = L"pnlMenu";
			this->pnlMenu->Size = System::Drawing::Size(210, 617);
			this->pnlMenu->TabIndex = 0;
			// 
			// btnExit
			// 
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnExit->Location = System::Drawing::Point(0, 555);
			this->btnExit->Margin = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->btnExit->Size = System::Drawing::Size(210, 62);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"Exit";
			this->btnExit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &frmMain::btnExit_Click);
			this->btnExit->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::btnExit_Paint);
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->button5->Location = System::Drawing::Point(0, 385);
			this->button5->Margin = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(13, 0, 0, 0);
			this->button5->Size = System::Drawing::Size(210, 62);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Gavka";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// pnlGavkaSM
			// 
			this->pnlGavkaSM->Controls->Add(this->button4);
			this->pnlGavkaSM->Controls->Add(this->button3);
			this->pnlGavkaSM->Controls->Add(this->button2);
			this->pnlGavkaSM->Controls->Add(this->button1);
			this->pnlGavkaSM->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlGavkaSM->Location = System::Drawing::Point(0, 136);
			this->pnlGavkaSM->Margin = System::Windows::Forms::Padding(4);
			this->pnlGavkaSM->Name = L"pnlGavkaSM";
			this->pnlGavkaSM->Size = System::Drawing::Size(210, 249);
			this->pnlGavkaSM->TabIndex = 2;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->button4->Location = System::Drawing::Point(0, 186);
			this->button4->Margin = System::Windows::Forms::Padding(40, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->button4->Size = System::Drawing::Size(210, 62);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Gavka";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->button3->Location = System::Drawing::Point(0, 124);
			this->button3->Margin = System::Windows::Forms::Padding(40, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(210, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Gavka";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->button2->Location = System::Drawing::Point(0, 62);
			this->button2->Margin = System::Windows::Forms::Padding(40, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(210, 62);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Gavka";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(40, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(210, 62);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Gavka";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// btnGavka
			// 
			this->btnGavka->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnGavka->FlatAppearance->BorderSize = 0;
			this->btnGavka->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGavka->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnGavka->Location = System::Drawing::Point(0, 74);
			this->btnGavka->Margin = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnGavka->Name = L"btnGavka";
			this->btnGavka->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->btnGavka->Size = System::Drawing::Size(210, 62);
			this->btnGavka->TabIndex = 1;
			this->btnGavka->Text = L"Gavka";
			this->btnGavka->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGavka->UseVisualStyleBackColor = true;
			this->btnGavka->Click += gcnew System::EventHandler(this, &frmMain::btnGavka_Click);
			this->btnGavka->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::btnGavka_Paint);
			// 
			// pnlLogo
			// 
			this->pnlLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->pnlLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlLogo.BackgroundImage")));
			this->pnlLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pnlLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlLogo->Location = System::Drawing::Point(0, 0);
			this->pnlLogo->Margin = System::Windows::Forms::Padding(4);
			this->pnlLogo->Name = L"pnlLogo";
			this->pnlLogo->Size = System::Drawing::Size(210, 74);
			this->pnlLogo->TabIndex = 0;
			// 
			// pnlLine
			// 
			this->pnlLine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->pnlLine->Controls->Add(this->btnLMin);
			this->pnlLine->Controls->Add(this->btnLMax);
			this->pnlLine->Controls->Add(this->btnLCls);
			this->pnlLine->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlLine->Location = System::Drawing::Point(0, 0);
			this->pnlLine->Margin = System::Windows::Forms::Padding(4);
			this->pnlLine->Name = L"pnlLine";
			this->pnlLine->Size = System::Drawing::Size(1215, 35);
			this->pnlLine->TabIndex = 1;
			// 
			// btnLMin
			// 
			this->btnLMin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLMin.BackgroundImage")));
			this->btnLMin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnLMin->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnLMin->FlatAppearance->BorderSize = 0;
			this->btnLMin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnLMin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnLMin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLMin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnLMin->Location = System::Drawing::Point(1065, 0);
			this->btnLMin->Margin = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnLMin->Name = L"btnLMin";
			this->btnLMin->Size = System::Drawing::Size(50, 35);
			this->btnLMin->TabIndex = 4;
			this->btnLMin->UseVisualStyleBackColor = true;
			this->btnLMin->Click += gcnew System::EventHandler(this, &frmMain::btnLMin_Click);
			// 
			// btnLMax
			// 
			this->btnLMax->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLMax.BackgroundImage")));
			this->btnLMax->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnLMax->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnLMax->FlatAppearance->BorderSize = 0;
			this->btnLMax->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnLMax->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->btnLMax->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLMax->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnLMax->Location = System::Drawing::Point(1115, 0);
			this->btnLMax->Margin = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnLMax->Name = L"btnLMax";
			this->btnLMax->Size = System::Drawing::Size(50, 35);
			this->btnLMax->TabIndex = 3;
			this->btnLMax->UseVisualStyleBackColor = true;
			this->btnLMax->Click += gcnew System::EventHandler(this, &frmMain::btnLMax_Click);
			// 
			// btnLCls
			// 
			this->btnLCls->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLCls.BackgroundImage")));
			this->btnLCls->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnLCls->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnLCls->FlatAppearance->BorderSize = 0;
			this->btnLCls->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnLCls->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->btnLCls->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLCls->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnLCls->Location = System::Drawing::Point(1165, 0);
			this->btnLCls->Margin = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnLCls->Name = L"btnLCls";
			this->btnLCls->Size = System::Drawing::Size(50, 35);
			this->btnLCls->TabIndex = 2;
			this->btnLCls->UseVisualStyleBackColor = true;
			this->btnLCls->Click += gcnew System::EventHandler(this, &frmMain::btnLCls_Click);
			// 
			// pnlHeader
			// 
			this->pnlHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->pnlHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlHeader->Location = System::Drawing::Point(210, 35);
			this->pnlHeader->Margin = System::Windows::Forms::Padding(4);
			this->pnlHeader->Name = L"pnlHeader";
			this->pnlHeader->Size = System::Drawing::Size(1005, 74);
			this->pnlHeader->TabIndex = 2;
			// 
			// pnlFooter
			// 
			this->pnlFooter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->pnlFooter->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlFooter->Location = System::Drawing::Point(210, 578);
			this->pnlFooter->Margin = System::Windows::Forms::Padding(4);
			this->pnlFooter->Name = L"pnlFooter";
			this->pnlFooter->Size = System::Drawing::Size(1005, 74);
			this->pnlFooter->TabIndex = 3;
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->ClientSize = System::Drawing::Size(1215, 652);
			this->Controls->Add(this->pnlFooter);
			this->Controls->Add(this->pnlHeader);
			this->Controls->Add(this->pnlMenu);
			this->Controls->Add(this->pnlLine);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmMain";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::frmMain_Paint);
			this->pnlMenu->ResumeLayout(false);
			this->pnlGavkaSM->ResumeLayout(false);
			this->pnlLine->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:

		#pragma region VARs
		String^ CurrentDir = System::IO::Directory::GetCurrentDirectory();
		#pragma endregion VARs



		#pragma region VOIDs
		System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
			//
		}

		System::Void btnGavka_Click(System::Object^ sender, System::EventArgs^ e) {
			pnlGavkaSM->Visible = !pnlGavkaSM->Visible;
		}

		System::Void btnExit_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
			g->DrawImage(Image::FromFile(CurrentDir + "\\Sources\\UI\\exit_berry.png"), 13, 13, 35, 35);
		}
		System::Void btnGavka_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
			g->DrawImage(Image::FromFile(CurrentDir + "\\Sources\\UI\\gav_berry.png"), 13, 13, 35, 35);
		}
		System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}


		FormWindowState fws;
		System::Void btnLMin_Click(System::Object^ sender, System::EventArgs^ e) {
			if		(WindowState == FormWindowState::Normal)	{ fws = WindowState; WindowState = FormWindowState::Minimized; }
			else if (WindowState == FormWindowState::Maximized) { fws = WindowState; WindowState = FormWindowState::Minimized; }
			else if (WindowState == FormWindowState::Minimized) {					 WindowState = fws;						   }
		}
		System::Void btnLMax_Click(System::Object^ sender, System::EventArgs^ e) {
			WindowState = (WindowState == FormWindowState::Maximized ? FormWindowState::Normal : FormWindowState::Maximized);
		}		
		System::Void btnLCls_Click(System::Object^ sender, System::EventArgs^ e) {
			Close();
		}

		System::Void frmMain_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			if (this->FormBorderStyle == System::Windows::Forms::FormBorderStyle::None) {
				System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
				//path->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
				//path->FillMode = System::Drawing::Drawing2D::FillMode::Alternate;
				//path->FillMode = System::Drawing::Drawing2D::FillMode::Winding;

				int r = 5;
				int w = this->Width;
				int h = this->Height;

				////// Round
				/*
				path->AddArc(0,   0,   r, r, 180, 90);
				path->AddArc(w-r, 0,   r, r, 270, 90);
				path->AddArc(w-r, h-r, r, r,   0, 90);
				path->AddArc(0,   h-r, r, r,  90, 90);
				*/

				////// Bevel
				path->AddLine(0,     r, r,   0); path->AddLine(r,   0,   w-r, 0	 );
				path->AddLine(w-r,   0, w,   r); path->AddLine(w,   r,   w,   h-r);
				path->AddLine(w,   h-r, w-r, h); path->AddLine(w-r, h,   r,   h	 );
				path->AddLine(0,   h-r, r,   h); path->AddLine(0,   h-r, 0,	  r	 );

				this->Region = gcnew Drawing::Region(path);
			}			
		}

		

		#pragma endregion VOIDs

	




};
}
