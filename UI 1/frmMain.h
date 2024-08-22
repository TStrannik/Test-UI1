#pragma once


namespace UI1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



#pragma region COLORS
	typedef enum COLOR_SCHEME { ICEBOX, FOSGEN };
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



	private: System::Windows::Forms::Label^ label3;
	private: ClassLibraryUI::uiButton^ uiButton3;

	private: System::Windows::Forms::Label^ label5;
	private: ClassLibraryUI::uiTextBox^ uiTextBox1;
	private: ClassLibraryUI::uiTextBox^ uiTextBox2;
	private: System::Windows::Forms::Label^ label6;
	private: ClassLibraryUI::uiButton^ uiButton4;
	private: System::Windows::Forms::Panel^ panel3;
	private: ClassLibraryUI::uiTextBox^ uiTextBox3;
	private: ClassLibraryUI::uiButton^ uiButton5;
	private: ClassLibraryUI::uiTextBox^ uiTextBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: ClassLibraryUI::uiTextBox^ uiTextBox5;
	private: System::Windows::Forms::Label^ label4;
	private: ClassLibraryUI::uiTextBox^ uiTextBox6;
	private: ClassLibraryUI::uiTextBox^ uiTextBox7;
	private: ClassLibraryUI::uiTextBox^ uiTextBox8;





	private: System::Windows::Forms::Panel^ pnlC5;

	public: frmMain(void) { InitializeComponent(); }
	protected: ~frmMain() { if (components) { delete components; } }
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
			   this->uiTextBox5 = (gcnew ClassLibraryUI::uiTextBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->uiTextBox2 = (gcnew ClassLibraryUI::uiTextBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->uiTextBox1 = (gcnew ClassLibraryUI::uiTextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->uiButton3 = (gcnew ClassLibraryUI::uiButton());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->uiButton4 = (gcnew ClassLibraryUI::uiButton());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->uiButton5 = (gcnew ClassLibraryUI::uiButton());
			   this->uiTextBox4 = (gcnew ClassLibraryUI::uiTextBox());
			   this->uiTextBox3 = (gcnew ClassLibraryUI::uiTextBox());
			   this->uiTextBox6 = (gcnew ClassLibraryUI::uiTextBox());
			   this->uiTextBox7 = (gcnew ClassLibraryUI::uiTextBox());
			   this->uiTextBox8 = (gcnew ClassLibraryUI::uiTextBox());
			   this->pnlMenu->SuspendLayout();
			   this->pnlMenuSM->SuspendLayout();
			   this->pnlLine->SuspendLayout();
			   this->pnlColorSample->SuspendLayout();
			   this->panel1->SuspendLayout();
			   this->panel2->SuspendLayout();
			   this->panel3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			   resources->ApplyResources(this->pnlMenu, L"pnlMenu");
			   this->pnlMenu->Name = L"pnlMenu";
			   // 
			   // btnContact
			   // 
			   resources->ApplyResources(this->btnContact, L"btnContact");
			   this->btnContact->FlatAppearance->BorderSize = 0;
			   this->btnContact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				   static_cast<System::Int32>(static_cast<System::Byte>(221)));
			   this->btnContact->Name = L"btnContact";
			   this->btnContact->UseVisualStyleBackColor = true;
			   // 
			   // btnExit
			   // 
			   resources->ApplyResources(this->btnExit, L"btnExit");
			   this->btnExit->FlatAppearance->BorderSize = 0;
			   this->btnExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				   static_cast<System::Int32>(static_cast<System::Byte>(221)));
			   this->btnExit->Name = L"btnExit";
			   this->btnExit->UseVisualStyleBackColor = true;
			   this->btnExit->Click += gcnew System::EventHandler(this, &frmMain::btnExit_Click);
			   this->btnExit->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::btnExit_Paint);
			   // 
			   // btnExamples
			   // 
			   resources->ApplyResources(this->btnExamples, L"btnExamples");
			   this->btnExamples->FlatAppearance->BorderSize = 0;
			   this->btnExamples->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				   static_cast<System::Int32>(static_cast<System::Byte>(221)));
			   this->btnExamples->Name = L"btnExamples";
			   this->btnExamples->UseVisualStyleBackColor = true;
			   // 
			   // pnlMenuSM
			   // 
			   this->pnlMenuSM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->pnlMenuSM->Controls->Add(this->btnSMServices);
			   this->pnlMenuSM->Controls->Add(this->btnSMHistory);
			   this->pnlMenuSM->Controls->Add(this->btnSMAbout);
			   resources->ApplyResources(this->pnlMenuSM, L"pnlMenuSM");
			   this->pnlMenuSM->Name = L"pnlMenuSM";
			   // 
			   // btnSMServices
			   // 
			   this->btnSMServices->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				   static_cast<System::Int32>(static_cast<System::Byte>(119)));
			   resources->ApplyResources(this->btnSMServices, L"btnSMServices");
			   this->btnSMServices->FlatAppearance->BorderSize = 0;
			   this->btnSMServices->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				   static_cast<System::Int32>(static_cast<System::Byte>(221)));
			   this->btnSMServices->Name = L"btnSMServices";
			   this->btnSMServices->UseVisualStyleBackColor = false;
			   // 
			   // btnSMHistory
			   // 
			   this->btnSMHistory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				   static_cast<System::Int32>(static_cast<System::Byte>(119)));
			   resources->ApplyResources(this->btnSMHistory, L"btnSMHistory");
			   this->btnSMHistory->FlatAppearance->BorderSize = 0;
			   this->btnSMHistory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				   static_cast<System::Int32>(static_cast<System::Byte>(221)));
			   this->btnSMHistory->Name = L"btnSMHistory";
			   this->btnSMHistory->UseVisualStyleBackColor = false;
			   // 
			   // btnSMAbout
			   // 
			   this->btnSMAbout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				   static_cast<System::Int32>(static_cast<System::Byte>(119)));
			   resources->ApplyResources(this->btnSMAbout, L"btnSMAbout");
			   this->btnSMAbout->FlatAppearance->BorderSize = 0;
			   this->btnSMAbout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				   static_cast<System::Int32>(static_cast<System::Byte>(221)));
			   this->btnSMAbout->Name = L"btnSMAbout";
			   this->btnSMAbout->UseVisualStyleBackColor = false;
			   // 
			   // btnHome
			   // 
			   resources->ApplyResources(this->btnHome, L"btnHome");
			   this->btnHome->FlatAppearance->BorderSize = 0;
			   this->btnHome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				   static_cast<System::Int32>(static_cast<System::Byte>(221)));
			   this->btnHome->Name = L"btnHome";
			   this->btnHome->UseVisualStyleBackColor = true;
			   this->btnHome->Click += gcnew System::EventHandler(this, &frmMain::btnHome_Click);
			   this->btnHome->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::btnHome_Paint);
			   // 
			   // pnlLogo
			   // 
			   this->pnlLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				   static_cast<System::Int32>(static_cast<System::Byte>(42)));
			   resources->ApplyResources(this->pnlLogo, L"pnlLogo");
			   this->pnlLogo->Name = L"pnlLogo";
			   this->pnlLogo->Click += gcnew System::EventHandler(this, &frmMain::pnlLogo_Click);
			   // 
			   // pnlLine
			   // 
			   this->pnlLine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->pnlLine->Controls->Add(this->btnLMin);
			   this->pnlLine->Controls->Add(this->btnLMax);
			   this->pnlLine->Controls->Add(this->btnLCls);
			   resources->ApplyResources(this->pnlLine, L"pnlLine");
			   this->pnlLine->Name = L"pnlLine";
			   this->pnlLine->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnlLine_MDC);
			   this->pnlLine->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnlLine_MouseDown);
			   this->pnlLine->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnlLine_MouseMove);
			   this->pnlLine->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnlLine_MouseUp);
			   // 
			   // btnLMin
			   // 
			   resources->ApplyResources(this->btnLMin, L"btnLMin");
			   this->btnLMin->FlatAppearance->BorderSize = 0;
			   this->btnLMin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->btnLMin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			   this->btnLMin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				   static_cast<System::Int32>(static_cast<System::Byte>(221)));
			   this->btnLMin->Name = L"btnLMin";
			   this->btnLMin->UseVisualStyleBackColor = true;
			   this->btnLMin->Click += gcnew System::EventHandler(this, &frmMain::btnLMin_Click);
			   // 
			   // btnLMax
			   // 
			   resources->ApplyResources(this->btnLMax, L"btnLMax");
			   this->btnLMax->FlatAppearance->BorderSize = 0;
			   this->btnLMax->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->btnLMax->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			   this->btnLMax->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				   static_cast<System::Int32>(static_cast<System::Byte>(221)));
			   this->btnLMax->Name = L"btnLMax";
			   this->btnLMax->UseVisualStyleBackColor = true;
			   this->btnLMax->Click += gcnew System::EventHandler(this, &frmMain::btnLMax_Click);
			   // 
			   // btnLCls
			   // 
			   resources->ApplyResources(this->btnLCls, L"btnLCls");
			   this->btnLCls->FlatAppearance->BorderSize = 0;
			   this->btnLCls->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			   this->btnLCls->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			   this->btnLCls->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				   static_cast<System::Int32>(static_cast<System::Byte>(221)));
			   this->btnLCls->Name = L"btnLCls";
			   this->btnLCls->UseVisualStyleBackColor = true;
			   this->btnLCls->Click += gcnew System::EventHandler(this, &frmMain::btnLCls_Click);
			   // 
			   // pnlHeader
			   // 
			   this->pnlHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   resources->ApplyResources(this->pnlHeader, L"pnlHeader");
			   this->pnlHeader->Name = L"pnlHeader";
			   // 
			   // pnlFooter
			   // 
			   this->pnlFooter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   resources->ApplyResources(this->pnlFooter, L"pnlFooter");
			   this->pnlFooter->Name = L"pnlFooter";
			   // 
			   // pnlColorSample
			   // 
			   resources->ApplyResources(this->pnlColorSample, L"pnlColorSample");
			   this->pnlColorSample->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->pnlColorSample->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->pnlColorSample->Controls->Add(this->pnlC5);
			   this->pnlColorSample->Controls->Add(this->pnlC4);
			   this->pnlColorSample->Controls->Add(this->pnlC3);
			   this->pnlColorSample->Controls->Add(this->pnlC2);
			   this->pnlColorSample->Controls->Add(this->pnlC1);
			   this->pnlColorSample->Name = L"pnlColorSample";
			   // 
			   // pnlC5
			   // 
			   resources->ApplyResources(this->pnlC5, L"pnlC5");
			   this->pnlC5->Name = L"pnlC5";
			   // 
			   // pnlC4
			   // 
			   resources->ApplyResources(this->pnlC4, L"pnlC4");
			   this->pnlC4->Name = L"pnlC4";
			   // 
			   // pnlC3
			   // 
			   resources->ApplyResources(this->pnlC3, L"pnlC3");
			   this->pnlC3->Name = L"pnlC3";
			   // 
			   // pnlC2
			   // 
			   resources->ApplyResources(this->pnlC2, L"pnlC2");
			   this->pnlC2->Name = L"pnlC2";
			   // 
			   // pnlC1
			   // 
			   resources->ApplyResources(this->pnlC1, L"pnlC1");
			   this->pnlC1->Name = L"pnlC1";
			   // 
			   // lblColSch
			   // 
			   resources->ApplyResources(this->lblColSch, L"lblColSch");
			   this->lblColSch->Name = L"lblColSch";
			   // 
			   // label1
			   // 
			   resources->ApplyResources(this->label1, L"label1");
			   this->label1->Name = L"label1";
			   // 
			   // label2
			   // 
			   resources->ApplyResources(this->label2, L"label2");
			   this->label2->Name = L"label2";
			   // 
			   // uiToggleOval1
			   // 
			   this->uiToggleOval1->Checked = false;
			   resources->ApplyResources(this->uiToggleOval1, L"uiToggleOval1");
			   this->uiToggleOval1->Name = L"uiToggleOval1";
			   this->uiToggleOval1->offBackColor = System::Drawing::Color::Gray;
			   this->uiToggleOval1->offToggleColor = System::Drawing::Color::Gainsboro;
			   this->uiToggleOval1->onBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiToggleOval1->onToggleColor = System::Drawing::Color::WhiteSmoke;
			   this->uiToggleOval1->UseVisualStyleBackColor = true;
			   // 
			   // uiToggleOval2
			   // 
			   this->uiToggleOval2->Checked = true;
			   resources->ApplyResources(this->uiToggleOval2, L"uiToggleOval2");
			   this->uiToggleOval2->Name = L"uiToggleOval2";
			   this->uiToggleOval2->offBackColor = System::Drawing::Color::Gray;
			   this->uiToggleOval2->offToggleColor = System::Drawing::Color::Gainsboro;
			   this->uiToggleOval2->onBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiToggleOval2->onToggleColor = System::Drawing::Color::WhiteSmoke;
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
			   resources->ApplyResources(this->uiButton1, L"uiButton1");
			   this->uiButton1->ForeColor = System::Drawing::Color::White;
			   this->uiButton1->Name = L"uiButton1";
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
			   resources->ApplyResources(this->uiButton2, L"uiButton2");
			   this->uiButton2->ForeColor = System::Drawing::Color::White;
			   this->uiButton2->Name = L"uiButton2";
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
			   resources->ApplyResources(this->panel1, L"panel1");
			   this->panel1->Name = L"panel1";
			   // 
			   // panel2
			   // 
			   this->panel2->Controls->Add(this->uiTextBox5);
			   this->panel2->Controls->Add(this->label4);
			   this->panel2->Controls->Add(this->uiTextBox2);
			   this->panel2->Controls->Add(this->label6);
			   this->panel2->Controls->Add(this->uiTextBox1);
			   this->panel2->Controls->Add(this->label5);
			   this->panel2->Controls->Add(this->uiButton3);
			   resources->ApplyResources(this->panel2, L"panel2");
			   this->panel2->Name = L"panel2";
			   // 
			   // uiTextBox5
			   // 
			   this->uiTextBox5->BackColor = System::Drawing::Color::White;
			   this->uiTextBox5->BorderRadius = 10;
			   this->uiTextBox5->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->uiTextBox5->ColorEnterBord = System::Drawing::Color::White;
			   this->uiTextBox5->ColorEnterText = System::Drawing::Color::White;
			   this->uiTextBox5->ColorLeaveBack = System::Drawing::Color::Transparent;
			   this->uiTextBox5->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox5->ColorLeaveText = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox5->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->uiTextBox5, L"uiTextBox5");
			   this->uiTextBox5->Name = L"uiTextBox5";
			   this->uiTextBox5->PasswordBox = false;
			   this->uiTextBox5->PlaceHolder = L"******";
			   // 
			   // label4
			   // 
			   resources->ApplyResources(this->label4, L"label4");
			   this->label4->Name = L"label4";
			   // 
			   // uiTextBox2
			   // 
			   this->uiTextBox2->BackColor = System::Drawing::Color::White;
			   this->uiTextBox2->BorderRadius = 10;
			   this->uiTextBox2->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->uiTextBox2->ColorEnterBord = System::Drawing::Color::White;
			   this->uiTextBox2->ColorEnterText = System::Drawing::Color::White;
			   this->uiTextBox2->ColorLeaveBack = System::Drawing::Color::Transparent;
			   this->uiTextBox2->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox2->ColorLeaveText = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox2->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->uiTextBox2, L"uiTextBox2");
			   this->uiTextBox2->Name = L"uiTextBox2";
			   this->uiTextBox2->PasswordBox = false;
			   this->uiTextBox2->PlaceHolder = L"e-mail";
			   // 
			   // label6
			   // 
			   resources->ApplyResources(this->label6, L"label6");
			   this->label6->Name = L"label6";
			   // 
			   // uiTextBox1
			   // 
			   this->uiTextBox1->BackColor = System::Drawing::Color::White;
			   this->uiTextBox1->BorderRadius = 10;
			   this->uiTextBox1->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->uiTextBox1->ColorEnterBord = System::Drawing::Color::White;
			   this->uiTextBox1->ColorEnterText = System::Drawing::Color::White;
			   this->uiTextBox1->ColorLeaveBack = System::Drawing::Color::Transparent;
			   this->uiTextBox1->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox1->ColorLeaveText = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox1->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->uiTextBox1, L"uiTextBox1");
			   this->uiTextBox1->Name = L"uiTextBox1";
			   this->uiTextBox1->PasswordBox = false;
			   this->uiTextBox1->PlaceHolder = L"login";
			   // 
			   // label5
			   // 
			   resources->ApplyResources(this->label5, L"label5");
			   this->label5->Name = L"label5";
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
			   resources->ApplyResources(this->uiButton3, L"uiButton3");
			   this->uiButton3->ForeColor = System::Drawing::Color::White;
			   this->uiButton3->Name = L"uiButton3";
			   this->uiButton3->UseVisualStyleBackColor = false;
			   // 
			   // label3
			   // 
			   resources->ApplyResources(this->label3, L"label3");
			   this->label3->Name = L"label3";
			   // 
			   // uiButton4
			   // 
			   this->uiButton4->BackColor = System::Drawing::Color::Black;
			   this->uiButton4->BorderRadius = 0;
			   this->uiButton4->Caption = L"SampleText";
			   this->uiButton4->ColorEnterBack = System::Drawing::Color::White;
			   this->uiButton4->ColorEnterBord = System::Drawing::Color::White;
			   this->uiButton4->ColorEnterText = System::Drawing::Color::Black;
			   this->uiButton4->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiButton4->ColorLeaveBord = System::Drawing::Color::Black;
			   this->uiButton4->ColorLeaveText = System::Drawing::Color::White;
			   resources->ApplyResources(this->uiButton4, L"uiButton4");
			   this->uiButton4->ForeColor = System::Drawing::Color::White;
			   this->uiButton4->Name = L"uiButton4";
			   this->uiButton4->UseVisualStyleBackColor = false;
			   // 
			   // panel3
			   // 
			   this->panel3->Controls->Add(this->pictureBox1);
			   this->panel3->Controls->Add(this->uiButton5);
			   this->panel3->Controls->Add(this->uiTextBox4);
			   this->panel3->Controls->Add(this->uiTextBox3);
			   this->panel3->Controls->Add(this->label3);
			   this->panel3->Controls->Add(this->uiButton4);
			   resources->ApplyResources(this->panel3, L"panel3");
			   this->panel3->Name = L"panel3";
			   // 
			   // pictureBox1
			   // 
			   resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->TabStop = false;
			   // 
			   // uiButton5
			   // 
			   this->uiButton5->BackColor = System::Drawing::Color::Black;
			   this->uiButton5->BorderRadius = 0;
			   this->uiButton5->Caption = L"SampleText";
			   this->uiButton5->ColorEnterBack = System::Drawing::Color::White;
			   this->uiButton5->ColorEnterBord = System::Drawing::Color::White;
			   this->uiButton5->ColorEnterText = System::Drawing::Color::Black;
			   this->uiButton5->ColorLeaveBack = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiButton5->ColorLeaveBord = System::Drawing::Color::Black;
			   this->uiButton5->ColorLeaveText = System::Drawing::Color::White;
			   resources->ApplyResources(this->uiButton5, L"uiButton5");
			   this->uiButton5->ForeColor = System::Drawing::Color::White;
			   this->uiButton5->Name = L"uiButton5";
			   this->uiButton5->UseVisualStyleBackColor = false;
			   // 
			   // uiTextBox4
			   // 
			   this->uiTextBox4->BackColor = System::Drawing::Color::White;
			   this->uiTextBox4->BorderRadius = 0;
			   this->uiTextBox4->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->uiTextBox4->ColorEnterBord = System::Drawing::Color::White;
			   this->uiTextBox4->ColorEnterText = System::Drawing::Color::White;
			   this->uiTextBox4->ColorLeaveBack = System::Drawing::Color::Transparent;
			   this->uiTextBox4->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox4->ColorLeaveText = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox4->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->uiTextBox4, L"uiTextBox4");
			   this->uiTextBox4->Name = L"uiTextBox4";
			   this->uiTextBox4->PasswordBox = false;
			   this->uiTextBox4->PlaceHolder = L"e-mail";
			   // 
			   // uiTextBox3
			   // 
			   this->uiTextBox3->BackColor = System::Drawing::Color::White;
			   this->uiTextBox3->BorderRadius = 0;
			   this->uiTextBox3->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->uiTextBox3->ColorEnterBord = System::Drawing::Color::White;
			   this->uiTextBox3->ColorEnterText = System::Drawing::Color::White;
			   this->uiTextBox3->ColorLeaveBack = System::Drawing::Color::Transparent;
			   this->uiTextBox3->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox3->ColorLeaveText = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox3->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->uiTextBox3, L"uiTextBox3");
			   this->uiTextBox3->Name = L"uiTextBox3";
			   this->uiTextBox3->PasswordBox = false;
			   this->uiTextBox3->PlaceHolder = L"e-mail";
			   // 
			   // uiTextBox6
			   // 
			   this->uiTextBox6->BackColor = System::Drawing::Color::White;
			   this->uiTextBox6->BorderRadius = 10;
			   this->uiTextBox6->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->uiTextBox6->ColorEnterBord = System::Drawing::Color::White;
			   this->uiTextBox6->ColorEnterText = System::Drawing::Color::White;
			   this->uiTextBox6->ColorLeaveBack = System::Drawing::Color::Transparent;
			   this->uiTextBox6->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox6->ColorLeaveText = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox6->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->uiTextBox6, L"uiTextBox6");
			   this->uiTextBox6->Name = L"uiTextBox6";
			   this->uiTextBox6->PasswordBox = false;
			   this->uiTextBox6->PlaceHolder = L"Holder";
			   // 
			   // uiTextBox7
			   // 
			   this->uiTextBox7->BackColor = System::Drawing::Color::White;
			   this->uiTextBox7->BorderRadius = 0;
			   this->uiTextBox7->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->uiTextBox7->ColorEnterBord = System::Drawing::Color::White;
			   this->uiTextBox7->ColorEnterText = System::Drawing::Color::White;
			   this->uiTextBox7->ColorLeaveBack = System::Drawing::Color::Transparent;
			   this->uiTextBox7->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox7->ColorLeaveText = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox7->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->uiTextBox7, L"uiTextBox7");
			   this->uiTextBox7->Name = L"uiTextBox7";
			   this->uiTextBox7->PasswordBox = true;
			   this->uiTextBox7->PlaceHolder = L"Holder";
			   // 
			   // uiTextBox8
			   // 
			   this->uiTextBox8->BackColor = System::Drawing::Color::White;
			   this->uiTextBox8->BorderRadius = 10;
			   this->uiTextBox8->ColorEnterBack = System::Drawing::Color::Tomato;
			   this->uiTextBox8->ColorEnterBord = System::Drawing::Color::White;
			   this->uiTextBox8->ColorEnterText = System::Drawing::Color::White;
			   this->uiTextBox8->ColorLeaveBack = System::Drawing::Color::Transparent;
			   this->uiTextBox8->ColorLeaveBord = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox8->ColorLeaveText = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				   static_cast<System::Int32>(static_cast<System::Byte>(169)));
			   this->uiTextBox8->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->uiTextBox8, L"uiTextBox8");
			   this->uiTextBox8->Name = L"uiTextBox8";
			   this->uiTextBox8->PasswordBox = true;
			   this->uiTextBox8->PlaceHolder = L"Holder";
			   // 
			   // frmMain
			   // 
			   resources->ApplyResources(this, L"$this");
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				   static_cast<System::Int32>(static_cast<System::Byte>(221)));
			   this->Controls->Add(this->uiTextBox8);
			   this->Controls->Add(this->uiTextBox7);
			   this->Controls->Add(this->uiTextBox6);
			   this->Controls->Add(this->panel3);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->lblColSch);
			   this->Controls->Add(this->pnlColorSample);
			   this->Controls->Add(this->pnlFooter);
			   this->Controls->Add(this->pnlHeader);
			   this->Controls->Add(this->pnlMenu);
			   this->Controls->Add(this->pnlLine);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Name = L"frmMain";
			   this->ShowIcon = false;
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
			   this->panel3->ResumeLayout(false);
			   this->panel3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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

			pnlLine->BackColor = C4;
			pnlHeader->BackColor = C3;
			pnlFooter->BackColor = C3;
			pnlLogo->BackColor = C1;
			pnlMenu->BackColor = C2;
			pnlMenuSM->BackColor = C4;
			btnSMAbout->BackColor = C4;
			btnSMHistory->BackColor = C4;
			btnSMServices->BackColor = C4;

			btnHome->ForeColor = C5;
			btnSMAbout->ForeColor = C5;
			btnSMHistory->ForeColor = C5;
			btnSMServices->ForeColor = C5;
			btnExamples->ForeColor = C5;
			btnContact->ForeColor = C5;
			btnExit->ForeColor = C5;
			this->BackColor = C5;

			Refresh();
		}
#pragma endregion ProgerVods

#pragma region VOIDs
		System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
			//
			switchColorScheme(); switchColorScheme();
		}
		System::Void frmMain_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			if (this->FormBorderStyle == System::Windows::Forms::FormBorderStyle::None) {
				System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
				//path->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;
				//path->FillMode = System::Drawing::Drawing2D::FillMode::Alternate;
				//path->FillMode = System::Drawing::Drawing2D::FillMode::Winding;

				//int r = 5;
				int r = 7;
				int w = this->Width;
				int h = this->Height;

				path->StartFigure();
				////// Round

				/*path->AddArc(0,   0,   r, r, 180, 90);
				path->AddArc(w-r, 0,   r, r, 270, 90);
				path->AddArc(w-r, h-r, r, r,   0, 90);
				path->AddArc(0,   h-r, r, r,  90, 90);*/


				////// Bevel

				path->AddLine(0, r, r, 0); path->AddLine(r, 0, w - r, 0);
				path->AddLine(w - r, 0, w, r); path->AddLine(w, r, w, h - r);
				path->AddLine(w, h - r, w - r, h); path->AddLine(w - r, h, r, h);
				path->AddLine(0, h - r, r, h); path->AddLine(0, h - r, 0, r);


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
		System::Void frmMain_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMU(sender, e); }

		System::Void pnlLine_MDC(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			WindowState = (WindowState == FormWindowState::Maximized ? FormWindowState::Normal : FormWindowState::Maximized);
			Invalidate();
		}
		System::Void pnlLine_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMD(sender, e); }
		System::Void pnlLine_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMM(sender, e); }
		System::Void pnlLine_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { formDrugMU(sender, e); }

		System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
			pnlMenuSM->Visible = !pnlMenuSM->Visible;
		}
		System::Void btnHome_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			int m = (int)(btnHome->Height / 2 - (35 / 2));
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
			if (WindowState == FormWindowState::Normal) { fws = WindowState; WindowState = FormWindowState::Minimized; }
			else if (WindowState == FormWindowState::Maximized) { fws = WindowState; WindowState = FormWindowState::Minimized; }
			else if (WindowState == FormWindowState::Minimized) { WindowState = fws; }
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