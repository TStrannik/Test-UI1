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


















































	#pragma endregion VARs/C/~


	#pragma region POINERS

	protected:


















	#pragma endregion POINERS

	#pragma region Windows Form Designer generated code
		

	#pragma endregion

	private:

		#pragma region VARs




		#pragma endregion VARs

		#pragma region ProgerVods




		#pragma endregion ProgerVods
		
		#pragma region VOIDs























		#pragma endregion VOIDs
	
	};
}