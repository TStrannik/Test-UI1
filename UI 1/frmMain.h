#pragma once



namespace UI1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	#pragma region COLORS
	typedef enum COLOR_SCHEME {	ICEBOX, FOSGEN };
	struct sCOLOR { int A = 0; int R = 0; int G = 0; int B = 0; };
	COLOR_SCHEME colorScheme = ICEBOX;
	sCOLOR I1, I2, I3, I4, I5;
	#pragma endregion COLORS



	public ref class frmMain : public System::Windows::Forms::Form {
		

	#pragma region VARs/C/~
	private:
		Point mouseOffset_;

		bool isMouseDown_ = false;
		int xOffset_, yOffset_;
	private: System::Windows::Forms::Panel^ pnlColorSample;
	private: System::Windows::Forms::Panel^ pnlC4;
	private: System::Windows::Forms::Panel^ pnlC1;
	private: System::Windows::Forms::Panel^ pnlC3;
	private: System::Windows::Forms::Panel^ pnlC2;
	private: System::Windows::Forms::Label^ lblColSch;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: ClassLibraryUI::uiToggleOval^ uiToggleOval1;
	private: ClassLibraryUI::uiToggleOval^ uiToggleOval2;
	private: ClassLibraryUI::uiButton^ uiButton1;
	private: ClassLibraryUI::uiButton^ uiButton2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnHome;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label3;
	private: ClassLibraryUI::uiButton^ uiButton3;






















	private: System::Windows::Forms::Panel^ pnlC5;

	public: frmMain(void) { InitializeComponent();	}
	protected: ~frmMain() {	if (components)	{ delete components; }}
	#pragma endregion VARs/C/~


	#pragma region POINERS
	private: System::Windows::Forms::Panel^ pnlMenu;
	protected:
	private: System::Windows::Forms::Panel^ pnlLogo;
	private: System::Windows::Forms::Panel^ pnlLine;
	private: System::Windows::Forms::Panel^ pnlHeader;
	private: System::Windows::Forms::Panel^ pnlFooter;

	private: System::Windows::Forms::Button^ btnExamples;
	private: System::Windows::Forms::Panel^ pnlMenuSM;

	private: System::Windows::Forms::Button^ btnSMServices;
	private: System::Windows::Forms::Button^ btnSMHistory;
	private: System::Windows::Forms::Button^ btnSMAbout;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnLCls;
	private: System::Windows::Forms::Button^ btnLMin;
	private: System::Windows::Forms::Button^ btnLMax;
	private: System::Windows::Forms::Button^ btnContact;

	private: System::ComponentModel::Container^ components;
	#pragma endregion POINERS

	#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->pnlMenu = (gcnew System::Windows::Forms::Panel());
			this->btnContact = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnExamples = (gcnew System::Windows::Forms::Button());
			this->pnlMenuSM = (gcnew System::Windows::Forms::Panel());
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
			this->pnlColorSample = (gcnew System::Windows::Forms::Panel());
			this->pnlC5 = (gcnew System::Windows::Forms::Panel());
			this->pnlC4 = (gcnew System::Windows::Forms::Panel());
			this->pnlC3 = (gcnew System::Windows::Forms::Panel());
			this->pnlC2 = (gcnew System::Windows::Forms::Panel());
			this->pnlC1 = (gcnew System::Windows::Forms::Panel());
			this->lblColSch = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->uiToggleOval1 = (gcnew ClassLibraryUI::uiToggleOval());
			this->uiToggleOval2 = (gcnew ClassLibraryUI::uiToggleOval());
			this->uiButton1 = (gcnew ClassLibraryUI::uiButton());
			this->uiButton2 = (gcnew ClassLibraryUI::uiButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->uiButton3 = (gcnew ClassLibraryUI::uiButton());
			this->pnlMenu->SuspendLayout();
			this->pnlMenuSM->SuspendLayout();
			this->pnlLine->SuspendLayout();
			this->pnlColorSample->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlMenu
			// 
			this->pnlMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMenu->Controls->Add(this->btnContact);
			this->pnlMenu->Controls->Add(this->btnExit);
			this->pnlMenu->Controls->Add(this->btnExamples);
			this->pnlMenu->Controls->Add(this->pnlMenuSM);
			this->pnlMenu->Controls->Add(this->btnHome);
			this->pnlMenu->Controls->Add(this->pnlLogo);
			this->pnlMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlMenu->Location = System::Drawing::Point(0, 30);
			this->pnlMenu->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pnlMenu->Name = L"pnlMenu";
			this->pnlMenu->Size = System::Drawing::Size(180, 635);
			this->pnlMenu->TabIndex = 0;
			// 
			// btnContact
			// 
			this->btnContact->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnContact->FlatAppearance->BorderSize = 0;
			this->btnContact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnContact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->btnContact->Location = System::Drawing::Point(0, 309);
			this->btnContact->Margin = System::Windows::Forms::Padding(45, 0, 0, 0);
			this->btnContact->Name = L"btnContact";
			this->btnContact->Padding = System::Windows::Forms::Padding(16, 0, 0, 0);
			this->btnContact->Size = System::Drawing::Size(180, 50);
			this->btnContact->TabIndex = 5;
			this->btnContact->Text = L"Контакты";
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
			this->btnExit->Location = System::Drawing::Point(0, 585);
			this->btnExit->Margin = System::Windows::Forms::Padding(45, 0, 0, 0);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Padding = System::Windows::Forms::Padding(56, 0, 0, 0);
			this->btnExit->Size = System::Drawing::Size(180, 50);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"Выход";
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
			this->btnExamples->Location = System::Drawing::Point(0, 259);
			this->btnExamples->Margin = System::Windows::Forms::Padding(45, 0, 0, 0);
			this->btnExamples->Name = L"btnExamples";
			this->btnExamples->Padding = System::Windows::Forms::Padding(16, 0, 0, 0);
			this->btnExamples->Size = System::Drawing::Size(180, 50);
			this->btnExamples->TabIndex = 3;
			this->btnExamples->Text = L"Портфолио";
			this->btnExamples->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExamples->UseVisualStyleBackColor = true;
			// 
			// pnlMenuSM
			// 
			this->pnlMenuSM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->pnlMenuSM->Controls->Add(this->btnSMServices);
			this->pnlMenuSM->Controls->Add(this->btnSMHistory);
			this->pnlMenuSM->Controls->Add(this->btnSMAbout);
			this->pnlMenuSM->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlMenuSM->Location = System::Drawing::Point(0, 120);
			this->pnlMenuSM->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pnlMenuSM->Name = L"pnlMenuSM";
			this->pnlMenuSM->Size = System::Drawing::Size(180, 139);
			this->pnlMenuSM->TabIndex = 2;
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
			this->btnSMServices->Margin = System::Windows::Forms::Padding(45, 4, 3, 4);
			this->btnSMServices->Name = L"btnSMServices";
			this->btnSMServices->Padding = System::Windows::Forms::Padding(45, 0, 0, 0);
			this->btnSMServices->Size = System::Drawing::Size(180, 45);
			this->btnSMServices->TabIndex = 4;
			this->btnSMServices->Text = L"Услуги";
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
			this->btnSMHistory->Margin = System::Windows::Forms::Padding(45, 4, 3, 4);
			this->btnSMHistory->Name = L"btnSMHistory";
			this->btnSMHistory->Padding = System::Windows::Forms::Padding(45, 0, 0, 0);
			this->btnSMHistory->Size = System::Drawing::Size(180, 45);
			this->btnSMHistory->TabIndex = 3;
			this->btnSMHistory->Text = L"История";
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
			this->btnSMAbout->Margin = System::Windows::Forms::Padding(45, 4, 3, 4);
			this->btnSMAbout->Name = L"btnSMAbout";
			this->btnSMAbout->Padding = System::Windows::Forms::Padding(45, 0, 0, 0);
			this->btnSMAbout->Size = System::Drawing::Size(180, 45);
			this->btnSMAbout->TabIndex = 2;
			this->btnSMAbout->Text = L"О нас";
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
			this->btnHome->Location = System::Drawing::Point(0, 70);
			this->btnHome->Margin = System::Windows::Forms::Padding(0);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Padding = System::Windows::Forms::Padding(34, 0, 0, 0);
			this->btnHome->Size = System::Drawing::Size(180, 50);
			this->btnHome->TabIndex = 1;
			this->btnHome->Text = L"Главная";
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
			this->pnlLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pnlLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlLogo->Location = System::Drawing::Point(0, 0);
			this->pnlLogo->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pnlLogo->Name = L"pnlLogo";
			this->pnlLogo->Size = System::Drawing::Size(180, 70);
			this->pnlLogo->TabIndex = 0;
			this->pnlLogo->Click += gcnew System::EventHandler(this, &frmMain::pnlLogo_Click);
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
			this->pnlLine->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pnlLine->Name = L"pnlLine";
			this->pnlLine->Size = System::Drawing::Size(907, 30);
			this->pnlLine->TabIndex = 1;
			this->pnlLine->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnlLine_MDC);
			this->pnlLine->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnlLine_MouseDown);
			this->pnlLine->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnlLine_MouseMove);
			this->pnlLine->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnlLine_MouseUp);
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
			this->btnLMin->Location = System::Drawing::Point(787, 0);
			this->btnLMin->Margin = System::Windows::Forms::Padding(45, 0, 0, 0);
			this->btnLMin->Name = L"btnLMin";
			this->btnLMin->Size = System::Drawing::Size(40, 30);
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
			this->btnLMax->Location = System::Drawing::Point(827, 0);
			this->btnLMax->Margin = System::Windows::Forms::Padding(45, 0, 0, 0);
			this->btnLMax->Name = L"btnLMax";
			this->btnLMax->Size = System::Drawing::Size(40, 30);
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
			this->btnLCls->Location = System::Drawing::Point(867, 0);
			this->btnLCls->Margin = System::Windows::Forms::Padding(45, 0, 0, 0);
			this->btnLCls->Name = L"btnLCls";
			this->btnLCls->Size = System::Drawing::Size(40, 30);
			this->btnLCls->TabIndex = 2;
			this->btnLCls->UseVisualStyleBackColor = true;
			this->btnLCls->Click += gcnew System::EventHandler(this, &frmMain::btnLCls_Click);
			// 
			// pnlHeader
			// 
			this->pnlHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->pnlHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlHeader->Location = System::Drawing::Point(180, 30);
			this->pnlHeader->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pnlHeader->Name = L"pnlHeader";
			this->pnlHeader->Size = System::Drawing::Size(727, 70);
			this->pnlHeader->TabIndex = 2;
			// 
			// pnlFooter
			// 
			this->pnlFooter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->pnlFooter->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnlFooter->Location = System::Drawing::Point(180, 595);
			this->pnlFooter->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pnlFooter->Name = L"pnlFooter";
			this->pnlFooter->Size = System::Drawing::Size(727, 70);
			this->pnlFooter->TabIndex = 3;
			// 
			// pnlColorSample
			// 
			this->pnlColorSample->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pnlColorSample->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pnlColorSample->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlColorSample->Controls->Add(this->pnlC5);
			this->pnlColorSample->Controls->Add(this->pnlC4);
			this->pnlColorSample->Controls->Add(this->pnlC3);
			this->pnlColorSample->Controls->Add(this->pnlC2);
			this->pnlColorSample->Controls->Add(this->pnlC1);
			this->pnlColorSample->Location = System::Drawing::Point(770, 563);
			this->pnlColorSample->Name = L"pnlColorSample";
			this->pnlColorSample->Size = System::Drawing::Size(125, 25);
			this->pnlColorSample->TabIndex = 4;
			// 
			// pnlC5
			// 
			this->pnlC5->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlC5->Location = System::Drawing::Point(100, 0);
			this->pnlC5->Name = L"pnlC5";
			this->pnlC5->Size = System::Drawing::Size(25, 23);
			this->pnlC5->TabIndex = 7;
			// 
			// pnlC4
			// 
			this->pnlC4->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlC4->Location = System::Drawing::Point(75, 0);
			this->pnlC4->Name = L"pnlC4";
			this->pnlC4->Size = System::Drawing::Size(25, 23);
			this->pnlC4->TabIndex = 7;
			// 
			// pnlC3
			// 
			this->pnlC3->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlC3->Location = System::Drawing::Point(50, 0);
			this->pnlC3->Name = L"pnlC3";
			this->pnlC3->Size = System::Drawing::Size(25, 23);
			this->pnlC3->TabIndex = 8;
			// 
			// pnlC2
			// 
			this->pnlC2->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlC2->Location = System::Drawing::Point(25, 0);
			this->pnlC2->Name = L"pnlC2";
			this->pnlC2->Size = System::Drawing::Size(25, 23);
			this->pnlC2->TabIndex = 6;
			// 
			// pnlC1
			// 
			this->pnlC1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlC1->Location = System::Drawing::Point(0, 0);
			this->pnlC1->Name = L"pnlC1";
			this->pnlC1->Size = System::Drawing::Size(25, 23);
			this->pnlC1->TabIndex = 5;
			// 
			// lblColSch
			// 
			this->lblColSch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->lblColSch->AutoSize = true;
			this->lblColSch->Location = System::Drawing::Point(768, 543);
			this->lblColSch->Margin = System::Windows::Forms::Padding(0, 0, 3, 0);
			this->lblColSch->Name = L"lblColSch";
			this->lblColSch->Size = System::Drawing::Size(60, 18);
			this->lblColSch->TabIndex = 5;
			this->lblColSch->Text = L"ICEBOX";
			this->lblColSch->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 18);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Пример тогглбокса";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Метки лэйбл";
			// 
			// uiToggleOval1
			// 
			this->uiToggleOval1->Checked = false;
			this->uiToggleOval1->Location = System::Drawing::Point(212, 22);
			this->uiToggleOval1->MinimumSize = System::Drawing::Size(45, 22);
			this->uiToggleOval1->Name = L"uiToggleOval1";
			this->uiToggleOval1->offBackColor = System::Drawing::Color::Gray;
			this->uiToggleOval1->offToggleColor = System::Drawing::Color::Gainsboro;
			this->uiToggleOval1->onBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->uiToggleOval1->onToggleColor = System::Drawing::Color::WhiteSmoke;
			this->uiToggleOval1->Size = System::Drawing::Size(70, 30);
			this->uiToggleOval1->TabIndex = 9;
			this->uiToggleOval1->Text = L"uiToggleOval1";
			this->uiToggleOval1->UseVisualStyleBackColor = true;
			// 
			// uiToggleOval2
			// 
			this->uiToggleOval2->Checked = true;
			this->uiToggleOval2->Location = System::Drawing::Point(212, 67);
			this->uiToggleOval2->MinimumSize = System::Drawing::Size(45, 22);
			this->uiToggleOval2->Name = L"uiToggleOval2";
			this->uiToggleOval2->offBackColor = System::Drawing::Color::Gray;
			this->uiToggleOval2->offToggleColor = System::Drawing::Color::Gainsboro;
			this->uiToggleOval2->onBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->uiToggleOval2->onToggleColor = System::Drawing::Color::WhiteSmoke;
			this->uiToggleOval2->Size = System::Drawing::Size(70, 30);
			this->uiToggleOval2->TabIndex = 10;
			this->uiToggleOval2->Text = L"uiToggleOval2";
			this->uiToggleOval2->UseVisualStyleBackColor = true;
			// 
			// uiButton1
			// 
			this->uiButton1->BackColor = System::Drawing::Color::Black;
			this->uiButton1->BorderRadius = 10;
			this->uiButton1->Caption = L"SampleText";
			this->uiButton1->ColorEnterBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->uiButton1->ColorEnterBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->uiButton1->ColorEnterText = System::Drawing::Color::White;
			this->uiButton1->ColorLeaveBack = System::Drawing::Color::Transparent;
			this->uiButton1->ColorLeaveBord = System::Drawing::Color::Black;
			this->uiButton1->ColorLeaveText = System::Drawing::Color::Black;
			this->uiButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->uiButton1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold));
			this->uiButton1->ForeColor = System::Drawing::Color::White;
			this->uiButton1->Location = System::Drawing::Point(182, 129);
			this->uiButton1->Name = L"uiButton1";
			this->uiButton1->Size = System::Drawing::Size(100, 30);
			this->uiButton1->TabIndex = 11;
			this->uiButton1->Text = L"Отменить";
			this->uiButton1->UseVisualStyleBackColor = false;
			// 
			// uiButton2
			// 
			this->uiButton2->BackColor = System::Drawing::Color::Black;
			this->uiButton2->BorderRadius = 10;
			this->uiButton2->Caption = L"SampleText";
			this->uiButton2->ColorEnterBack = System::Drawing::Color::White;
			this->uiButton2->ColorEnterBord = System::Drawing::Color::White;
			this->uiButton2->ColorEnterText = System::Drawing::Color::Black;
			this->uiButton2->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->uiButton2->ColorLeaveBord = System::Drawing::Color::Transparent;
			this->uiButton2->ColorLeaveText = System::Drawing::Color::White;
			this->uiButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->uiButton2->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold));
			this->uiButton2->ForeColor = System::Drawing::Color::White;
			this->uiButton2->Location = System::Drawing::Point(76, 129);
			this->uiButton2->Name = L"uiButton2";
			this->uiButton2->Size = System::Drawing::Size(100, 30);
			this->uiButton2->TabIndex = 12;
			this->uiButton2->Text = L"Принять";
			this->uiButton2->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->uiButton2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->uiButton1);
			this->panel1->Controls->Add(this->uiToggleOval1);
			this->panel1->Controls->Add(this->uiToggleOval2);
			this->panel1->Location = System::Drawing::Point(209, 118);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(15, 0, 15, 0);
			this->panel1->Size = System::Drawing::Size(300, 171);
			this->panel1->TabIndex = 13;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->uiButton3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->richTextBox1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(209, 316);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(15, 0, 15, 0);
			this->panel2->Size = System::Drawing::Size(300, 171);
			this->panel2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(18, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 23);
			this->textBox1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Текстбокс";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(18, 104);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(173, 23);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 18);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Рич текстбокс";
			// 
			// uiButton3
			// 
			this->uiButton3->BackColor = System::Drawing::Color::Black;
			this->uiButton3->BorderRadius = 10;
			this->uiButton3->Caption = L"SampleText";
			this->uiButton3->ColorEnterBack = System::Drawing::Color::White;
			this->uiButton3->ColorEnterBord = System::Drawing::Color::White;
			this->uiButton3->ColorEnterText = System::Drawing::Color::Black;
			this->uiButton3->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->uiButton3->ColorLeaveBord = System::Drawing::Color::Transparent;
			this->uiButton3->ColorLeaveText = System::Drawing::Color::White;
			this->uiButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->uiButton3->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold));
			this->uiButton3->ForeColor = System::Drawing::Color::White;
			this->uiButton3->Location = System::Drawing::Point(197, 50);
			this->uiButton3->Name = L"uiButton3";
			this->uiButton3->Size = System::Drawing::Size(85, 77);
			this->uiButton3->TabIndex = 13;
			this->uiButton3->Text = L"Отправить";
			this->uiButton3->UseVisualStyleBackColor = false;
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->ClientSize = System::Drawing::Size(907, 665);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lblColSch);
			this->Controls->Add(this->pnlColorSample);
			this->Controls->Add(this->pnlFooter);
			this->Controls->Add(this->pnlHeader);
			this->Controls->Add(this->pnlMenu);
			this->Controls->Add(this->pnlLine);
			this->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"frmMain";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"B";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::frmMain_Paint);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::frmMain_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::frmMain_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::frmMain_MouseUp);
			this->pnlMenu->ResumeLayout(false);
			this->pnlMenuSM->ResumeLayout(false);
			this->pnlLine->ResumeLayout(false);
			this->pnlColorSample->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion

	private:

		#pragma region VARs

		FormWindowState fws;
		String^ CurrentDir = System::IO::Directory::GetCurrentDirectory();

		#pragma endregion VARs

		#pragma region ProgerVods
		void formDrugMD(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Button == Windows::Forms::MouseButtons::Left) {
				xOffset_ = -e->X - SystemInformation::FrameBorderSize.Width + 4;
				yOffset_ = -e->Y - SystemInformation::FrameBorderSize.Height + 4;
				mouseOffset_ = System::Drawing::Point(xOffset_, yOffset_);
				isMouseDown_ = true;
			}
		}
		void formDrugMM(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (isMouseDown_) {
				Point mousePos = Control::MousePosition;
				mousePos.Offset(mouseOffset_.X, mouseOffset_.Y);
				Location = mousePos;
			}
		}
		void formDrugMU(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Button == Windows::Forms::MouseButtons::Left) { isMouseDown_ = false; }
		}
		void switchColorScheme() {
			colorScheme = colorScheme ? ICEBOX : FOSGEN;

			switch (colorScheme) {
			case ICEBOX:
				lblColSch->Text = L"ICEBOX";
				I1.A = 255; I1.R = 13;  I1.G = 27;  I1.B = 42;
				I2.A = 255; I2.R = 27;  I2.G = 38;  I2.B = 59;
				I3.A = 255; I3.R = 37;  I3.G = 48;  I3.B = 69;
				I4.A = 255; I4.R = 119; I4.G = 141; I4.B = 169;
				I5.A = 255; I5.R = 224; I5.G = 225; I5.B = 221;				
			break;
			case FOSGEN:
				lblColSch->Text = L"FOSGEN";
				I1.A = 255; I1.R = 40;  I1.G = 40;  I1.B = 40;
				I2.A = 255; I2.R = 50;  I2.G = 50;  I2.B = 50;
				I3.A = 255; I3.R = 64;  I3.G = 64;  I3.B = 64;
				I4.A = 255; I4.R = 171; I4.G = 171; I4.B = 171;
				I5.A = 255; I5.R = 240; I5.G = 240; I5.B = 240;
			break;
			}			

			

			Color C1 = Color::FromArgb(I1.A, I1.R, I1.G, I1.B);
			Color C2 = Color::FromArgb(I2.A, I2.R, I2.G, I2.B);
			Color C3 = Color::FromArgb(I3.A, I3.R, I3.G, I3.B);
			Color C4 = Color::FromArgb(I4.A, I4.R, I4.G, I4.B);
			Color C5 = Color::FromArgb(I5.A, I5.R, I5.G, I5.B);

			pnlC1->BackColor = C1; pnlC2->BackColor = C2; pnlC3->BackColor = C3; pnlC4->BackColor = C4; pnlC5->BackColor = C5;

			pnlLine->BackColor		 = C4;
			pnlHeader->BackColor	 = C3;
			pnlFooter->BackColor	 = C3;
			pnlLogo->BackColor		 = C1;
			pnlMenu->BackColor		 = C2;
			pnlMenuSM->BackColor	 = C4;
			btnSMAbout->BackColor    = C4;
			btnSMHistory->BackColor  = C4;
			btnSMServices->BackColor = C4;

			btnHome->ForeColor		 = C5;
			btnSMAbout->ForeColor	 = C5;
			btnSMHistory->ForeColor  = C5;
			btnSMServices->ForeColor = C5;
			btnExamples->ForeColor   = C5;
			btnContact->ForeColor	 = C5;
			btnExit->ForeColor		 = C5;
			this->BackColor			 = C5;

			Refresh();
		}
		#pragma endregion ProgerVods
		
		#pragma region VOIDs
		System::Void frmMain_Load     (System::Object^ sender, System::EventArgs^ e) {
			//
			switchColorScheme(); switchColorScheme();
		}
		System::Void frmMain_Paint    (System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			if (this->FormBorderStyle == System::Windows::Forms::FormBorderStyle::None) {
				System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
				//path->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
				//path->FillMode = System::Drawing::Drawing2D::FillMode::Alternate;
				//path->FillMode = System::Drawing::Drawing2D::FillMode::Winding;

				//int r = 5;
				int r = 10;
				int w = this->Width;
				int h = this->Height;

				path->StartFigure();
				////// Round
				
				path->AddArc(0,   0,   r, r, 180, 90);
				path->AddArc(w-r, 0,   r, r, 270, 90);
				path->AddArc(w-r, h-r, r, r,   0, 90);
				path->AddArc(0,   h-r, r, r,  90, 90);
				

				////// Bevel
				/*
				path->AddLine(0, r, r, 0); path->AddLine(r, 0, w - r, 0);
				path->AddLine(w - r, 0, w, r); path->AddLine(w, r, w, h - r);
				path->AddLine(w, h - r, w - r, h); path->AddLine(w - r, h, r, h);
				path->AddLine(0, h - r, r, h); path->AddLine(0, h - r, 0, r);
				*/

				path->CloseFigure();

				this->Region = gcnew Drawing::Region(path);
			}
		}
		System::Void frmMain_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMD(sender, e); }
		System::Void frmMain_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			#pragma region FormResize
			bool cond1 = (e->X <= 2 && e->Y <= 2) || (e->X + 2 >= this->Width && e->Y + 2 >= this->Height);
			bool cond2 = (e->X + 2 >= this->Width && e->Y <= 2) || (e->X <= 2 && e->Y + 2 >= this->Height);
			bool cond3 = e->X <= 2 || e->X + 2 >= this->Width;
			bool cond4 = e->Y <= 2 || e->Y + 2 >= this->Height;

			if (cond1) this->Cursor = Cursors::SizeNWSE;
			else if (cond2) this->Cursor = Cursors::SizeNESW;
			else if (cond3) this->Cursor = Cursors::SizeWE;
			else if (cond4) this->Cursor = Cursors::SizeNS;
			else			this->Cursor = Cursors::Default;
			#pragma endregion
			formDrugMM(sender, e);
		}
		System::Void frmMain_MouseUp  (System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMU(sender, e); }

		System::Void pnlLine_MDC	  (System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			WindowState = (WindowState == FormWindowState::Maximized ? FormWindowState::Normal : FormWindowState::Maximized);
			Invalidate();
		}
		System::Void pnlLine_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMD(sender, e); }
		System::Void pnlLine_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMM(sender, e); }
		System::Void pnlLine_MouseUp  (System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMU(sender, e); }

		System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
			pnlMenuSM->Visible = !pnlMenuSM->Visible;
		}
		System::Void btnHome_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			int m = (int)(btnHome->Height / 2 - (35/2));
			Graphics^ g = e->Graphics;
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
			g->DrawImage(Image::FromFile(CurrentDir + "\\Sources\\UI\\dot_berry.png"), 5, m, 35, 35);
		}

		System::Void btnExit_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			int m = (int)(btnExit->Height / 2 - (35 / 2));
			Graphics^ g = e->Graphics;
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
			g->DrawImage(Image::FromFile(CurrentDir + "\\Sources\\UI\\exit_berry.png"), 13, m, 35, 35);			

		}
		System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		System::Void btnLMin_Click(System::Object^ sender, System::EventArgs^ e) {
			if		(WindowState == FormWindowState::Normal)	{ fws = WindowState; WindowState = FormWindowState::Minimized; }
			else if (WindowState == FormWindowState::Maximized) { fws = WindowState; WindowState = FormWindowState::Minimized; }
			else if (WindowState == FormWindowState::Minimized) {					 WindowState = fws;						   }
			Invalidate();
		}
		System::Void btnLMax_Click(System::Object^ sender, System::EventArgs^ e) {
			WindowState = (WindowState == FormWindowState::Maximized ? FormWindowState::Normal : FormWindowState::Maximized);
			Invalidate();
		}		
		System::Void btnLCls_Click(System::Object^ sender, System::EventArgs^ e) {
			Close();
		}

		System::Void pnlLogo_Click(System::Object^ sender, System::EventArgs^ e) {
			switchColorScheme();
		}

		#pragma endregion VOIDs
	
	};
}