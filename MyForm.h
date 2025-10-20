#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnTic9;

	private: System::Windows::Forms::Button^ btnTic8;

	private: System::Windows::Forms::Button^ btnTic7;

	private: System::Windows::Forms::Button^ btnTic6;

	private: System::Windows::Forms::Button^ btnTic5;

	private: System::Windows::Forms::Button^ btnTic4;

	private: System::Windows::Forms::Button^ btnTic3;

	private: System::Windows::Forms::Button^ btnTic2;

	private: System::Windows::Forms::Button^ btnTic1;
	private: System::Windows::Forms::Button^ NewGame;


	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ lblPlayerO;

	private: System::Windows::Forms::Label^ lblPlayerX;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ PlayerX;


	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnTic9 = (gcnew System::Windows::Forms::Button());
			this->btnTic8 = (gcnew System::Windows::Forms::Button());
			this->btnTic7 = (gcnew System::Windows::Forms::Button());
			this->btnTic6 = (gcnew System::Windows::Forms::Button());
			this->btnTic5 = (gcnew System::Windows::Forms::Button());
			this->btnTic4 = (gcnew System::Windows::Forms::Button());
			this->btnTic3 = (gcnew System::Windows::Forms::Button());
			this->btnTic2 = (gcnew System::Windows::Forms::Button());
			this->btnTic1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->NewGame = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblPlayerO = (gcnew System::Windows::Forms::Label());
			this->lblPlayerX = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->PlayerX = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1272, 146);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(187, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(886, 113);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Tic Tac Toc Game";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(12, 164);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1272, 568);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->btnTic9);
			this->panel4->Controls->Add(this->btnTic8);
			this->panel4->Controls->Add(this->btnTic7);
			this->panel4->Controls->Add(this->btnTic6);
			this->panel4->Controls->Add(this->btnTic5);
			this->panel4->Controls->Add(this->btnTic4);
			this->panel4->Controls->Add(this->btnTic3);
			this->panel4->Controls->Add(this->btnTic2);
			this->panel4->Controls->Add(this->btnTic1);
			this->panel4->Location = System::Drawing::Point(13, 16);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(576, 529);
			this->panel4->TabIndex = 2;
			// 
			// btnTic9
			// 
			this->btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic9->Location = System::Drawing::Point(377, 347);
			this->btnTic9->Name = L"btnTic9";
			this->btnTic9->Size = System::Drawing::Size(187, 172);
			this->btnTic9->TabIndex = 8;
			this->btnTic9->UseVisualStyleBackColor = false;
			this->btnTic9->Click += gcnew System::EventHandler(this, &MyForm::btnTic9_Click);
			// 
			// btnTic8
			// 
			this->btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic8->Location = System::Drawing::Point(191, 347);
			this->btnTic8->Name = L"btnTic8";
			this->btnTic8->Size = System::Drawing::Size(187, 172);
			this->btnTic8->TabIndex = 7;
			this->btnTic8->UseVisualStyleBackColor = false;
			this->btnTic8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// btnTic7
			// 
			this->btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic7->Location = System::Drawing::Point(5, 347);
			this->btnTic7->Name = L"btnTic7";
			this->btnTic7->Size = System::Drawing::Size(187, 172);
			this->btnTic7->TabIndex = 6;
			this->btnTic7->UseVisualStyleBackColor = false;
			this->btnTic7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// btnTic6
			// 
			this->btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic6->Location = System::Drawing::Point(377, 176);
			this->btnTic6->Name = L"btnTic6";
			this->btnTic6->Size = System::Drawing::Size(187, 172);
			this->btnTic6->TabIndex = 5;
			this->btnTic6->UseVisualStyleBackColor = false;
			this->btnTic6->Click += gcnew System::EventHandler(this, &MyForm::btnTic6_Click);
			// 
			// btnTic5
			// 
			this->btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic5->Location = System::Drawing::Point(191, 176);
			this->btnTic5->Name = L"btnTic5";
			this->btnTic5->Size = System::Drawing::Size(187, 172);
			this->btnTic5->TabIndex = 4;
			this->btnTic5->UseVisualStyleBackColor = false;
			this->btnTic5->Click += gcnew System::EventHandler(this, &MyForm::btnTic5_Click);
			// 
			// btnTic4
			// 
			this->btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic4->Location = System::Drawing::Point(5, 176);
			this->btnTic4->Name = L"btnTic4";
			this->btnTic4->Size = System::Drawing::Size(187, 172);
			this->btnTic4->TabIndex = 3;
			this->btnTic4->UseVisualStyleBackColor = false;
			this->btnTic4->Click += gcnew System::EventHandler(this, &MyForm::btnTic4_Click);
			// 
			// btnTic3
			// 
			this->btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic3->Location = System::Drawing::Point(377, 5);
			this->btnTic3->Name = L"btnTic3";
			this->btnTic3->Size = System::Drawing::Size(187, 172);
			this->btnTic3->TabIndex = 2;
			this->btnTic3->UseVisualStyleBackColor = false;
			this->btnTic3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btnTic2
			// 
			this->btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic2->Location = System::Drawing::Point(191, 5);
			this->btnTic2->Name = L"btnTic2";
			this->btnTic2->Size = System::Drawing::Size(187, 172);
			this->btnTic2->TabIndex = 1;
			this->btnTic2->UseVisualStyleBackColor = false;
			this->btnTic2->Click += gcnew System::EventHandler(this, &MyForm::btnTic2_Click);
			// 
			// btnTic1
			// 
			this->btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic1->Location = System::Drawing::Point(5, 5);
			this->btnTic1->Name = L"btnTic1";
			this->btnTic1->Size = System::Drawing::Size(187, 172);
			this->btnTic1->TabIndex = 0;
			this->btnTic1->UseVisualStyleBackColor = false;
			this->btnTic1->Click += gcnew System::EventHandler(this, &MyForm::btnTic1_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Location = System::Drawing::Point(604, 16);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(649, 529);
			this->panel3->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->NewGame);
			this->panel6->Controls->Add(this->button10);
			this->panel6->Location = System::Drawing::Point(16, 274);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(612, 222);
			this->panel6->TabIndex = 3;
			// 
			// NewGame
			// 
			this->NewGame->BackColor = System::Drawing::Color::WhiteSmoke;
			this->NewGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewGame->Location = System::Drawing::Point(12, 110);
			this->NewGame->Name = L"NewGame";
			this->NewGame->Size = System::Drawing::Size(578, 95);
			this->NewGame->TabIndex = 2;
			this->NewGame->Text = L"New Game";
			this->NewGame->UseVisualStyleBackColor = false;
			this->NewGame->Click += gcnew System::EventHandler(this, &MyForm::NewGame_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(12, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(578, 95);
			this->button10->TabIndex = 1;
			this->button10->Text = L"Reset Game";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->lblPlayerO);
			this->panel5->Controls->Add(this->lblPlayerX);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->PlayerX);
			this->panel5->Location = System::Drawing::Point(16, 16);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(612, 241);
			this->panel5->TabIndex = 2;
			// 
			// lblPlayerO
			// 
			this->lblPlayerO->BackColor = System::Drawing::Color::White;
			this->lblPlayerO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerO->Location = System::Drawing::Point(310, 137);
			this->lblPlayerO->Name = L"lblPlayerO";
			this->lblPlayerO->Size = System::Drawing::Size(280, 84);
			this->lblPlayerO->TabIndex = 3;
			this->lblPlayerO->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// lblPlayerX
			// 
			this->lblPlayerX->BackColor = System::Drawing::Color::White;
			this->lblPlayerX->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerX->Location = System::Drawing::Point(310, 11);
			this->lblPlayerX->Name = L"lblPlayerX";
			this->lblPlayerX->Size = System::Drawing::Size(280, 84);
			this->lblPlayerX->TabIndex = 2;
			this->lblPlayerX->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(315, 82);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player O";
			// 
			// PlayerX
			// 
			this->PlayerX->AutoSize = true;
			this->PlayerX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerX->Location = System::Drawing::Point(3, 11);
			this->PlayerX->Name = L"PlayerX";
			this->PlayerX->Size = System::Drawing::Size(307, 82);
			this->PlayerX->TabIndex = 0;
			this->PlayerX->Text = L"Player X";
			this->PlayerX->Click += gcnew System::EventHandler(this, &MyForm::PlayerX_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(1298, 744);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
		Boolean checker;
		int plusone;
#pragma endregion
		void Enable_False() 
		{
			btnTic1->Enabled = false;
			btnTic2->Enabled = false;
			btnTic3->Enabled = false;
			btnTic4->Enabled = false;
			btnTic5->Enabled = false;
			btnTic6->Enabled = false;
			btnTic7->Enabled = false;
			btnTic8->Enabled = false;
			btnTic9->Enabled = false;
		}

		void score()
		{
			if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::DarkRed;
				btnTic2->BackColor = System::Drawing::Color::DarkRed;
				btnTic3->BackColor = System::Drawing::Color::DarkRed;
				MessageBox::Show("Player X Wins", "Tic Tac Toe", MessageBoxButtons::OK,MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerX->Text, plusone)) // Try to parse the score
				{
					lblPlayerX->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "X")
			{
				btnTic4->BackColor = System::Drawing::Color::DarkRed;
				btnTic5->BackColor = System::Drawing::Color::DarkRed;
				btnTic6->BackColor = System::Drawing::Color::DarkRed;
				MessageBox::Show("Player X Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerX->Text, plusone)) // Try to parse the score
				{
					lblPlayerX->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "X")
			{
				btnTic7->BackColor = System::Drawing::Color::DarkRed;
				btnTic8->BackColor = System::Drawing::Color::DarkRed;
				btnTic9->BackColor = System::Drawing::Color::DarkRed;
				MessageBox::Show("Player X Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerX->Text, plusone)) // Try to parse the score
				{
					lblPlayerX->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic1->Text == "X" && btnTic4->Text == "X" && btnTic7->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::DarkRed;
				btnTic4->BackColor = System::Drawing::Color::DarkRed;
				btnTic7->BackColor = System::Drawing::Color::DarkRed;
				MessageBox::Show("Player X Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerX->Text, plusone)) // Try to parse the score
				{
					lblPlayerX->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic2->Text == "X" && btnTic5->Text == "X" && btnTic8->Text == "X")
			{
				btnTic2->BackColor = System::Drawing::Color::DarkRed;
				btnTic5->BackColor = System::Drawing::Color::DarkRed;
				btnTic8->BackColor = System::Drawing::Color::DarkRed;
				MessageBox::Show("Player X Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerX->Text, plusone)) // Try to parse the score
				{
					lblPlayerX->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic3->Text == "X" && btnTic6->Text == "X" && btnTic9->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::DarkRed;
				btnTic6->BackColor = System::Drawing::Color::DarkRed;
				btnTic9->BackColor = System::Drawing::Color::DarkRed;
				MessageBox::Show("Player X Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerX->Text, plusone)) // Try to parse the score
				{
					lblPlayerX->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic1->Text == "X" && btnTic5->Text == "X" && btnTic9->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::DarkRed;
				btnTic5->BackColor = System::Drawing::Color::DarkRed;
				btnTic9->BackColor = System::Drawing::Color::DarkRed;
				MessageBox::Show("Player X Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerX->Text, plusone)) // Try to parse the score
				{
					lblPlayerX->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic3->Text == "X" && btnTic5->Text == "X" && btnTic7->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::DarkRed;
				btnTic5->BackColor = System::Drawing::Color::DarkRed;
				btnTic7->BackColor = System::Drawing::Color::DarkRed;
				MessageBox::Show("Player X Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerX->Text, plusone)) // Try to parse the score
				{
					lblPlayerX->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
//===============================================================================================================================//
			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::AliceBlue;
				btnTic2->BackColor = System::Drawing::Color::AliceBlue;
				btnTic3->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("Player O Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerO->Text, plusone)) // Try to parse the score
				{
					lblPlayerO->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "O")
			{
				btnTic4->BackColor = System::Drawing::Color::AliceBlue;
				btnTic5->BackColor = System::Drawing::Color::AliceBlue;
				btnTic6->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("Player O Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerO->Text, plusone)) // Try to parse the score
				{
					lblPlayerO->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "O")
			{
				btnTic7->BackColor = System::Drawing::Color::AliceBlue;
				btnTic8->BackColor = System::Drawing::Color::AliceBlue;
				btnTic9->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("Player O Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerO->Text, plusone)) // Try to parse the score
				{
					lblPlayerO->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic1->Text == "O" && btnTic4->Text == "O" && btnTic7->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::AliceBlue;
				btnTic4->BackColor = System::Drawing::Color::AliceBlue;
				btnTic7->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("Player O Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerO->Text, plusone)) // Try to parse the score
				{
					lblPlayerO->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic2->Text == "O" && btnTic5->Text == "O" && btnTic8->Text == "O")
			{
				btnTic2->BackColor = System::Drawing::Color::AliceBlue;
				btnTic5->BackColor = System::Drawing::Color::AliceBlue;
				btnTic8->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("Player O Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerO->Text, plusone)) // Try to parse the score
				{
					lblPlayerO->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic3->Text == "O" && btnTic6->Text == "O" && btnTic9->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::AliceBlue;
				btnTic6->BackColor = System::Drawing::Color::AliceBlue;
				btnTic9->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("Player O Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerO->Text, plusone)) // Try to parse the score
				{
					lblPlayerO->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic1->Text == "O" && btnTic5->Text == "O" && btnTic9->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::AliceBlue;
				btnTic5->BackColor = System::Drawing::Color::AliceBlue;
				btnTic9->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("Player O Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerO->Text, plusone)) // Try to parse the score
				{
					lblPlayerO->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}
			if (btnTic3->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::AliceBlue;
				btnTic5->BackColor = System::Drawing::Color::AliceBlue;
				btnTic7->BackColor = System::Drawing::Color::AliceBlue;
				MessageBox::Show("Player O Wins", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				if (int::TryParse(lblPlayerO->Text, plusone)) // Try to parse the score
				{
					lblPlayerO->Text = Convert::ToString(plusone + 1);
				}
				Enable_False();
			}

			if (btnTic1->Text != "" && btnTic2->Text != "" && btnTic3->Text != "" &&
				btnTic4->Text != "" && btnTic5->Text != "" && btnTic6->Text != "" &&
				btnTic7->Text != "" && btnTic8->Text != "" && btnTic9->Text != "")
			{
				MessageBox::Show("It's a Tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False(); // Disable all buttons
			}

//=============================================================================================================================//
		}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false)
		{
			btnTic7->Text = "X";
			checker = true;
		}
		else
		{
			btnTic7->Text = "O";
			checker = false;
		}
		btnTic7->Enabled = false;
		score();
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPlayerO->Text = "0";
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPlayerX->Text = "0";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic3->Text = "X";
		checker = true;
	}
	else
	{
		btnTic3->Text = "O";
		checker = false;
	}
	btnTic3->Enabled = false;
	score();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic8->Text = "X";
		checker = true;
	}
	else
	{
		btnTic8->Text = "O";
		checker = false;
	}
	btnTic8->Enabled = false;
	score();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnTic1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker==false)
	{
		btnTic1->Text = "X";
		checker = true;
	}
	else
	{
		btnTic1->Text = "O";
		checker = false;
	}
	btnTic1->Enabled = false;
	score();
}
private: System::Void btnTic2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic2->Text = "X";
		checker = true;
	}
	else
	{
		btnTic2->Text = "O";
		checker = false;
	}
	btnTic2->Enabled = false;
	score();
}
private: System::Void btnTic4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic4->Text = "X";
		checker = true;
	}
	else
	{
		btnTic4->Text = "O";
		checker = false;
	}
	btnTic4->Enabled = false;
	score();
}
private: System::Void btnTic5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic5->Text = "X";
		checker = true;
	}
	else
	{
		btnTic5->Text = "O";
		checker = false;
	}
	btnTic5->Enabled = false;
	score();
}
private: System::Void btnTic6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic6->Text = "X";
		checker = true;
	}
	else
	{
		btnTic6->Text = "O";
		checker = false;
	}
	btnTic6->Enabled = false;
	score();
}
private: System::Void btnTic9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		btnTic9->Text = "X";
		checker = true;
	}
	else
	{
		btnTic9->Text = "O";
		checker = false;
	}
	btnTic9->Enabled = false;
	score();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";

	NewGame->Enabled = true;

	btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;

}
private: System::Void NewGame_Click(System::Object^ sender, System::EventArgs^ e) {
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";

	lblPlayerO->Text = "0";
	lblPlayerX->Text = "0";


	btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;
}
private: System::Void PlayerX_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}