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
	private: System::Windows::Forms::Button^ btnHome;
	private: System::Windows::Forms::Button^ btnExamples;


	private: System::Windows::Forms::Panel^ pnlGavkaSM;


	private: System::Windows::Forms::Button^ btnSMServices;


	private: System::Windows::Forms::Button^ btnSMHistory;

	private: System::Windows::Forms::Button^ btnSMAbout;

	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnLCls;
	private: System::Windows::Forms::Button^ btnLMin;
	private: System::Windows::Forms::Button^ btnLMax;
	private: System::Windows::Forms::Button^ btnContact;






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
			this->btnContact = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnExamples = (gcnew System::Windows::Forms::Button());
			this->pnlGavkaSM = (gcnew System::Windows::Forms::Panel());
			this->btnSMServices = (gcnew System::Windows::Forms::Button());
			this->btnSMHistory = (gcnew System::Windows::Forms::Button());
			this->btnSMAbout = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
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
			this->pnlMenu->Controls->Add(this->btnContact);
			this->pnlMenu->Controls->Add(this->btnExit);
			this->pnlMenu->Controls->Add(this->btnExamples);
			this->pnlMenu->Controls->Add(this->pnlGavkaSM);
			this->pnlMenu->Controls->Add(this->btnHome);
			this->pnlMenu->Controls->Add(this->pnlLogo);
			this->pnlMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlMenu->Location = System::Drawing::Point(0, 35);
			this->pnlMenu->Margin = System::Windows::Forms::Padding(4);
			this->pnlMenu->Name = L"pnlMenu";
			this->pnlMenu->Size = System::Drawing::Size(210, 617);
			this->pnlMenu->TabIndex = 0;
			// 
			// btnContact
			// 
			this->btnContact->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnContact->FlatAppearance->BorderSize = 0;
			this->btnContact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnContact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnContact->Location = System::Drawing::Point(0, 331);
			this->btnContact->Margin = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnContact->Name = L"btnContact";
			this->btnContact->Padding = System::Windows::Forms::Padding(13, 0, 0, 0);
			this->btnContact->Size = System::Drawing::Size(210, 60);
			this->btnContact->TabIndex = 5;
			this->btnContact->Text = L"Contacts";
			this->btnContact->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnContact->UseVisualStyleBackColor = true;
			// 
			// btnExit
			// 
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnExit->Location = System::Drawing::Point(0, 557);
			this->btnExit->Margin = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->btnExit->Size = System::Drawing::Size(210, 60);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"Exit";
			this->btnExit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &frmMain::btnExit_Click);
			this->btnExit->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::btnExit_Paint);
			// 
			// btnExamples
			// 
			this->btnExamples->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnExamples->FlatAppearance->BorderSize = 0;
			this->btnExamples->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExamples->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnExamples->Location = System::Drawing::Point(0, 271);
			this->btnExamples->Margin = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnExamples->Name = L"btnExamples";
			this->btnExamples->Padding = System::Windows::Forms::Padding(13, 0, 0, 0);
			this->btnExamples->Size = System::Drawing::Size(210, 60);
			this->btnExamples->TabIndex = 3;
			this->btnExamples->Text = L"Examples";
			this->btnExamples->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExamples->UseVisualStyleBackColor = true;
			// 
			// pnlGavkaSM
			// 
			this->pnlGavkaSM->Controls->Add(this->btnSMServices);
			this->pnlGavkaSM->Controls->Add(this->btnSMHistory);
			this->pnlGavkaSM->Controls->Add(this->btnSMAbout);
			this->pnlGavkaSM->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlGavkaSM->Location = System::Drawing::Point(0, 134);
			this->pnlGavkaSM->Margin = System::Windows::Forms::Padding(4);
			this->pnlGavkaSM->Name = L"pnlGavkaSM";
			this->pnlGavkaSM->Size = System::Drawing::Size(210, 137);
			this->pnlGavkaSM->TabIndex = 2;
			// 
			// btnSMServices
			// 
			this->btnSMServices->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->btnSMServices->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSMServices->FlatAppearance->BorderSize = 0;
			this->btnSMServices->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSMServices->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnSMServices->Location = System::Drawing::Point(0, 90);
			this->btnSMServices->Margin = System::Windows::Forms::Padding(40, 4, 4, 4);
			this->btnSMServices->Name = L"btnSMServices";
			this->btnSMServices->Padding = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnSMServices->Size = System::Drawing::Size(210, 45);
			this->btnSMServices->TabIndex = 4;
			this->btnSMServices->Text = L"Services";
			this->btnSMServices->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSMServices->UseVisualStyleBackColor = false;
			// 
			// btnSMHistory
			// 
			this->btnSMHistory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->btnSMHistory->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSMHistory->FlatAppearance->BorderSize = 0;
			this->btnSMHistory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSMHistory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnSMHistory->Location = System::Drawing::Point(0, 45);
			this->btnSMHistory->Margin = System::Windows::Forms::Padding(40, 4, 4, 4);
			this->btnSMHistory->Name = L"btnSMHistory";
			this->btnSMHistory->Padding = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnSMHistory->Size = System::Drawing::Size(210, 45);
			this->btnSMHistory->TabIndex = 3;
			this->btnSMHistory->Text = L"History";
			this->btnSMHistory->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSMHistory->UseVisualStyleBackColor = false;
			// 
			// btnSMAbout
			// 
			this->btnSMAbout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->btnSMAbout->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSMAbout->FlatAppearance->BorderSize = 0;
			this->btnSMAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSMAbout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnSMAbout->Location = System::Drawing::Point(0, 0);
			this->btnSMAbout->Margin = System::Windows::Forms::Padding(40, 4, 4, 4);
			this->btnSMAbout->Name = L"btnSMAbout";
			this->btnSMAbout->Padding = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->btnSMAbout->Size = System::Drawing::Size(210, 45);
			this->btnSMAbout->TabIndex = 2;
			this->btnSMAbout->Text = L"About";
			this->btnSMAbout->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSMAbout->UseVisualStyleBackColor = false;
			// 
			// btnHome
			// 
			this->btnHome->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnHome->FlatAppearance->BorderSize = 0;
			this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnHome->Location = System::Drawing::Point(0, 74);
			this->btnHome->Margin = System::Windows::Forms::Padding(0);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Padding = System::Windows::Forms::Padding(30, 0, 0, 0);
			this->btnHome->Size = System::Drawing::Size(210, 60);
			this->btnHome->TabIndex = 1;
			this->btnHome->Text = L"Home";
			this->btnHome->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &frmMain::btnHome_Click);
			this->btnHome->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::btnHome_Paint);
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
			this->pnlFooter->Location = System::Drawing::Point(210, 552);
			this->pnlFooter->Margin = System::Windows::Forms::Padding(4);
			this->pnlFooter->Name = L"pnlFooter";
			this->pnlFooter->Size = System::Drawing::Size(1005, 100);
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

		System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
			pnlGavkaSM->Visible = !pnlGavkaSM->Visible;
		}

		System::Void btnExit_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
			g->DrawImage(Image::FromFile(CurrentDir + "\\Sources\\UI\\exit_berry.png"), 13, 13, 35, 35);			

		}
		System::Void btnHome_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
			g->DrawImage(Image::FromFile(CurrentDir + "\\Sources\\UI\\dot_berry.png"), 5, 13, 35, 35);			
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
