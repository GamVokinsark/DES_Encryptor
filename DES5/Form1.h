#pragma once

using namespace System::Runtime::InteropServices;
 
char *and_SysStringToChar(System::String^ string) 
{
	return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}

namespace DES5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  TxtBox1;
	protected: 

	private: System::Windows::Forms::TextBox^  Key1;
	protected: 


	private: System::Windows::Forms::Label^  Text1;
	private: System::Windows::Forms::TextBox^  EncrBox1;
	private: System::Windows::Forms::Button^  Clear1;




	private: System::Windows::Forms::Label^  Text2;
	private: System::Windows::Forms::Label^  Text4;


	private: System::Windows::Forms::Label^  Text3;
	private: System::Windows::Forms::TextBox^  EncrBox2;


	private: System::Windows::Forms::TextBox^  TxtBox2;

	private: System::Windows::Forms::Label^  Text8;
	private: System::Windows::Forms::Label^  Text9;


	private: System::Windows::Forms::Label^  Text7;
	private: System::Windows::Forms::Button^  Clear2;



	private: System::Windows::Forms::TextBox^  EncrBox3;

	private: System::Windows::Forms::TextBox^  TxtBox3;

	private: System::Windows::Forms::Label^  Text14;
	private: System::Windows::Forms::Label^  Text15;


	private: System::Windows::Forms::Label^  Text13;
	private: System::Windows::Forms::Button^  Clear3;


	private: System::Windows::Forms::Label^  Text5;
	private: System::Windows::Forms::TextBox^  Key2;


	private: System::Windows::Forms::Label^  Text6;
	private: System::Windows::Forms::TextBox^  Key3;


	private: System::Windows::Forms::Label^  Text11;
	private: System::Windows::Forms::TextBox^  Key5;


	private: System::Windows::Forms::Label^  Text10;
	private: System::Windows::Forms::TextBox^  Key4;


	private: System::Windows::Forms::Label^  Text12;
	private: System::Windows::Forms::TextBox^  Key6;
	private: System::Windows::Forms::Button^  Enc1;
	private: System::Windows::Forms::Button^  Dec1;
	private: System::Windows::Forms::Button^  Move1;
	private: System::Windows::Forms::Button^  Move2;






	private: System::Windows::Forms::Button^  Dec2;

	private: System::Windows::Forms::Button^  Enc2;
	private: System::Windows::Forms::Button^  Move3;


	private: System::Windows::Forms::Button^  Dec3;

	private: System::Windows::Forms::Button^  Enc3;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TxtBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Key1 = (gcnew System::Windows::Forms::TextBox());
			this->Text1 = (gcnew System::Windows::Forms::Label());
			this->EncrBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Clear1 = (gcnew System::Windows::Forms::Button());
			this->Text2 = (gcnew System::Windows::Forms::Label());
			this->Text4 = (gcnew System::Windows::Forms::Label());
			this->Text3 = (gcnew System::Windows::Forms::Label());
			this->EncrBox2 = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Text8 = (gcnew System::Windows::Forms::Label());
			this->Text9 = (gcnew System::Windows::Forms::Label());
			this->Text7 = (gcnew System::Windows::Forms::Label());
			this->Clear2 = (gcnew System::Windows::Forms::Button());
			this->EncrBox3 = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Text14 = (gcnew System::Windows::Forms::Label());
			this->Text15 = (gcnew System::Windows::Forms::Label());
			this->Text13 = (gcnew System::Windows::Forms::Label());
			this->Clear3 = (gcnew System::Windows::Forms::Button());
			this->Text5 = (gcnew System::Windows::Forms::Label());
			this->Key2 = (gcnew System::Windows::Forms::TextBox());
			this->Text6 = (gcnew System::Windows::Forms::Label());
			this->Key3 = (gcnew System::Windows::Forms::TextBox());
			this->Text11 = (gcnew System::Windows::Forms::Label());
			this->Key5 = (gcnew System::Windows::Forms::TextBox());
			this->Text10 = (gcnew System::Windows::Forms::Label());
			this->Key4 = (gcnew System::Windows::Forms::TextBox());
			this->Text12 = (gcnew System::Windows::Forms::Label());
			this->Key6 = (gcnew System::Windows::Forms::TextBox());
			this->Enc1 = (gcnew System::Windows::Forms::Button());
			this->Dec1 = (gcnew System::Windows::Forms::Button());
			this->Move1 = (gcnew System::Windows::Forms::Button());
			this->Move2 = (gcnew System::Windows::Forms::Button());
			this->Dec2 = (gcnew System::Windows::Forms::Button());
			this->Enc2 = (gcnew System::Windows::Forms::Button());
			this->Move3 = (gcnew System::Windows::Forms::Button());
			this->Dec3 = (gcnew System::Windows::Forms::Button());
			this->Enc3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TxtBox1
			// 
			this->TxtBox1->BackColor = System::Drawing::SystemColors::Window;
			this->TxtBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxtBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TxtBox1->Location = System::Drawing::Point(15, 65);
			this->TxtBox1->MaxLength = 1000;
			this->TxtBox1->Multiline = true;
			this->TxtBox1->Name = L"TxtBox1";
			this->TxtBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TxtBox1->Size = System::Drawing::Size(225, 72);
			this->TxtBox1->TabIndex = 0;
			// 
			// Key1
			// 
			this->Key1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Key1->Location = System::Drawing::Point(128, 13);
			this->Key1->MaxLength = 7;
			this->Key1->Name = L"Key1";
			this->Key1->Size = System::Drawing::Size(112, 24);
			this->Key1->TabIndex = 2;
			// 
			// Text1
			// 
			this->Text1->AutoSize = true;
			this->Text1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text1->Location = System::Drawing::Point(12, 16);
			this->Text1->Name = L"Text1";
			this->Text1->Size = System::Drawing::Size(110, 18);
			this->Text1->TabIndex = 3;
			this->Text1->Text = L"Введите ключ:";
			// 
			// EncrBox1
			// 
			this->EncrBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->EncrBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->EncrBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->EncrBox1->Location = System::Drawing::Point(318, 65);
			this->EncrBox1->MaxLength = 1000;
			this->EncrBox1->Multiline = true;
			this->EncrBox1->Name = L"EncrBox1";
			this->EncrBox1->ReadOnly = true;
			this->EncrBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->EncrBox1->Size = System::Drawing::Size(225, 72);
			this->EncrBox1->TabIndex = 4;
			// 
			// Clear1
			// 
			this->Clear1->Location = System::Drawing::Point(178, 43);
			this->Clear1->Name = L"Clear1";
			this->Clear1->Size = System::Drawing::Size(62, 23);
			this->Clear1->TabIndex = 5;
			this->Clear1->Text = L"Очистить";
			this->Clear1->UseVisualStyleBackColor = true;
			this->Clear1->Click += gcnew System::EventHandler(this, &Form1::Clear1_Click);
			// 
			// Text2
			// 
			this->Text2->AutoSize = true;
			this->Text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text2->Location = System::Drawing::Point(12, 48);
			this->Text2->Name = L"Text2";
			this->Text2->Size = System::Drawing::Size(121, 18);
			this->Text2->TabIndex = 6;
			this->Text2->Text = L"Исходный текст";
			// 
			// Text4
			// 
			this->Text4->AutoSize = true;
			this->Text4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text4->Location = System::Drawing::Point(315, 48);
			this->Text4->Name = L"Text4";
			this->Text4->Size = System::Drawing::Size(80, 18);
			this->Text4->TabIndex = 7;
			this->Text4->Text = L"Результат";
			// 
			// Text3
			// 
			this->Text3->AutoSize = true;
			this->Text3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text3->Location = System::Drawing::Point(268, 48);
			this->Text3->Name = L"Text3";
			this->Text3->Size = System::Drawing::Size(39, 18);
			this->Text3->TabIndex = 8;
			this->Text3->Text = L"DES";
			// 
			// EncrBox2
			// 
			this->EncrBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->EncrBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->EncrBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->EncrBox2->Location = System::Drawing::Point(318, 192);
			this->EncrBox2->MaxLength = 1000;
			this->EncrBox2->Multiline = true;
			this->EncrBox2->Name = L"EncrBox2";
			this->EncrBox2->ReadOnly = true;
			this->EncrBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->EncrBox2->Size = System::Drawing::Size(225, 72);
			this->EncrBox2->TabIndex = 10;
			// 
			// TxtBox2
			// 
			this->TxtBox2->BackColor = System::Drawing::SystemColors::Window;
			this->TxtBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxtBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TxtBox2->Location = System::Drawing::Point(15, 192);
			this->TxtBox2->MaxLength = 1000;
			this->TxtBox2->Multiline = true;
			this->TxtBox2->Name = L"TxtBox2";
			this->TxtBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TxtBox2->Size = System::Drawing::Size(225, 72);
			this->TxtBox2->TabIndex = 9;
			// 
			// Text8
			// 
			this->Text8->AutoSize = true;
			this->Text8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text8->Location = System::Drawing::Point(260, 175);
			this->Text8->Name = L"Text8";
			this->Text8->Size = System::Drawing::Size(47, 18);
			this->Text8->TabIndex = 14;
			this->Text8->Text = L"2DES";
			// 
			// Text9
			// 
			this->Text9->AutoSize = true;
			this->Text9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text9->Location = System::Drawing::Point(315, 175);
			this->Text9->Name = L"Text9";
			this->Text9->Size = System::Drawing::Size(80, 18);
			this->Text9->TabIndex = 13;
			this->Text9->Text = L"Результат";
			// 
			// Text7
			// 
			this->Text7->AutoSize = true;
			this->Text7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text7->Location = System::Drawing::Point(12, 175);
			this->Text7->Name = L"Text7";
			this->Text7->Size = System::Drawing::Size(121, 18);
			this->Text7->TabIndex = 12;
			this->Text7->Text = L"Исходный текст";
			// 
			// Clear2
			// 
			this->Clear2->Location = System::Drawing::Point(178, 170);
			this->Clear2->Name = L"Clear2";
			this->Clear2->Size = System::Drawing::Size(62, 23);
			this->Clear2->TabIndex = 11;
			this->Clear2->Text = L"Очистить";
			this->Clear2->UseVisualStyleBackColor = true;
			this->Clear2->Click += gcnew System::EventHandler(this, &Form1::Clear2_Click);
			// 
			// EncrBox3
			// 
			this->EncrBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->EncrBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->EncrBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->EncrBox3->Location = System::Drawing::Point(318, 318);
			this->EncrBox3->MaxLength = 1000;
			this->EncrBox3->Multiline = true;
			this->EncrBox3->Name = L"EncrBox3";
			this->EncrBox3->ReadOnly = true;
			this->EncrBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->EncrBox3->Size = System::Drawing::Size(225, 72);
			this->EncrBox3->TabIndex = 16;
			// 
			// TxtBox3
			// 
			this->TxtBox3->BackColor = System::Drawing::SystemColors::Window;
			this->TxtBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxtBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->TxtBox3->Location = System::Drawing::Point(15, 318);
			this->TxtBox3->MaxLength = 1000;
			this->TxtBox3->Multiline = true;
			this->TxtBox3->Name = L"TxtBox3";
			this->TxtBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TxtBox3->Size = System::Drawing::Size(225, 72);
			this->TxtBox3->TabIndex = 15;
			// 
			// Text14
			// 
			this->Text14->AutoSize = true;
			this->Text14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text14->Location = System::Drawing::Point(260, 301);
			this->Text14->Name = L"Text14";
			this->Text14->Size = System::Drawing::Size(47, 18);
			this->Text14->TabIndex = 20;
			this->Text14->Text = L"3DES";
			// 
			// Text15
			// 
			this->Text15->AutoSize = true;
			this->Text15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text15->Location = System::Drawing::Point(315, 301);
			this->Text15->Name = L"Text15";
			this->Text15->Size = System::Drawing::Size(80, 18);
			this->Text15->TabIndex = 19;
			this->Text15->Text = L"Результат";
			// 
			// Text13
			// 
			this->Text13->AutoSize = true;
			this->Text13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text13->Location = System::Drawing::Point(12, 301);
			this->Text13->Name = L"Text13";
			this->Text13->Size = System::Drawing::Size(121, 18);
			this->Text13->TabIndex = 18;
			this->Text13->Text = L"Исходный текст";
			// 
			// Clear3
			// 
			this->Clear3->Location = System::Drawing::Point(178, 296);
			this->Clear3->Name = L"Clear3";
			this->Clear3->Size = System::Drawing::Size(62, 23);
			this->Clear3->TabIndex = 17;
			this->Clear3->Text = L"Очистить";
			this->Clear3->UseVisualStyleBackColor = true;
			this->Clear3->Click += gcnew System::EventHandler(this, &Form1::Clear3_Click);
			// 
			// Text5
			// 
			this->Text5->AutoSize = true;
			this->Text5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text5->Location = System::Drawing::Point(12, 147);
			this->Text5->Name = L"Text5";
			this->Text5->Size = System::Drawing::Size(58, 18);
			this->Text5->TabIndex = 22;
			this->Text5->Text = L"Ключ 1";
			// 
			// Key2
			// 
			this->Key2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Key2->Location = System::Drawing::Point(76, 144);
			this->Key2->MaxLength = 7;
			this->Key2->Name = L"Key2";
			this->Key2->Size = System::Drawing::Size(96, 24);
			this->Key2->TabIndex = 21;
			// 
			// Text6
			// 
			this->Text6->AutoSize = true;
			this->Text6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text6->Location = System::Drawing::Point(182, 147);
			this->Text6->Name = L"Text6";
			this->Text6->Size = System::Drawing::Size(58, 18);
			this->Text6->TabIndex = 24;
			this->Text6->Text = L"Ключ 2";
			// 
			// Key3
			// 
			this->Key3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Key3->Location = System::Drawing::Point(246, 144);
			this->Key3->MaxLength = 7;
			this->Key3->Name = L"Key3";
			this->Key3->Size = System::Drawing::Size(98, 24);
			this->Key3->TabIndex = 23;
			// 
			// Text11
			// 
			this->Text11->AutoSize = true;
			this->Text11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text11->Location = System::Drawing::Point(182, 277);
			this->Text11->Name = L"Text11";
			this->Text11->Size = System::Drawing::Size(58, 18);
			this->Text11->TabIndex = 28;
			this->Text11->Text = L"Ключ 2";
			// 
			// Key5
			// 
			this->Key5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Key5->Location = System::Drawing::Point(246, 274);
			this->Key5->MaxLength = 7;
			this->Key5->Name = L"Key5";
			this->Key5->Size = System::Drawing::Size(98, 24);
			this->Key5->TabIndex = 27;
			// 
			// Text10
			// 
			this->Text10->AutoSize = true;
			this->Text10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text10->Location = System::Drawing::Point(12, 277);
			this->Text10->Name = L"Text10";
			this->Text10->Size = System::Drawing::Size(58, 18);
			this->Text10->TabIndex = 26;
			this->Text10->Text = L"Ключ 1";
			// 
			// Key4
			// 
			this->Key4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Key4->Location = System::Drawing::Point(76, 274);
			this->Key4->MaxLength = 7;
			this->Key4->Name = L"Key4";
			this->Key4->Size = System::Drawing::Size(96, 24);
			this->Key4->TabIndex = 25;
			// 
			// Text12
			// 
			this->Text12->AutoSize = true;
			this->Text12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Text12->Location = System::Drawing::Point(359, 277);
			this->Text12->Name = L"Text12";
			this->Text12->Size = System::Drawing::Size(58, 18);
			this->Text12->TabIndex = 30;
			this->Text12->Text = L"Ключ 3";
			// 
			// Key6
			// 
			this->Key6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->Key6->Location = System::Drawing::Point(423, 274);
			this->Key6->MaxLength = 7;
			this->Key6->Name = L"Key6";
			this->Key6->Size = System::Drawing::Size(102, 24);
			this->Key6->TabIndex = 29;
			// 
			// Enc1
			// 
			this->Enc1->Location = System::Drawing::Point(240, 65);
			this->Enc1->Name = L"Enc1";
			this->Enc1->Size = System::Drawing::Size(80, 24);
			this->Enc1->TabIndex = 31;
			this->Enc1->Text = L"Encrypt";
			this->Enc1->UseVisualStyleBackColor = true;
			this->Enc1->Click += gcnew System::EventHandler(this, &Form1::Enc1_Click);
			// 
			// Dec1
			// 
			this->Dec1->Location = System::Drawing::Point(240, 89);
			this->Dec1->Name = L"Dec1";
			this->Dec1->Size = System::Drawing::Size(80, 24);
			this->Dec1->TabIndex = 32;
			this->Dec1->Text = L"Decrypt";
			this->Dec1->UseVisualStyleBackColor = true;
			this->Dec1->Click += gcnew System::EventHandler(this, &Form1::Dec1_Click);
			// 
			// Move1
			// 
			this->Move1->Location = System::Drawing::Point(240, 113);
			this->Move1->Name = L"Move1";
			this->Move1->Size = System::Drawing::Size(80, 24);
			this->Move1->TabIndex = 33;
			this->Move1->Text = L"<----";
			this->Move1->UseVisualStyleBackColor = true;
			this->Move1->Click += gcnew System::EventHandler(this, &Form1::Move1_Click);
			// 
			// Move2
			// 
			this->Move2->Location = System::Drawing::Point(240, 240);
			this->Move2->Name = L"Move2";
			this->Move2->Size = System::Drawing::Size(80, 24);
			this->Move2->TabIndex = 36;
			this->Move2->Text = L"<----";
			this->Move2->UseVisualStyleBackColor = true;
			this->Move2->Click += gcnew System::EventHandler(this, &Form1::Move2_Click);
			// 
			// Dec2
			// 
			this->Dec2->Location = System::Drawing::Point(240, 216);
			this->Dec2->Name = L"Dec2";
			this->Dec2->Size = System::Drawing::Size(80, 24);
			this->Dec2->TabIndex = 35;
			this->Dec2->Text = L"Decrypt";
			this->Dec2->UseVisualStyleBackColor = true;
			this->Dec2->Click += gcnew System::EventHandler(this, &Form1::Dec2_Click);
			// 
			// Enc2
			// 
			this->Enc2->Location = System::Drawing::Point(240, 192);
			this->Enc2->Name = L"Enc2";
			this->Enc2->Size = System::Drawing::Size(80, 24);
			this->Enc2->TabIndex = 34;
			this->Enc2->Text = L"Encrypt";
			this->Enc2->UseVisualStyleBackColor = true;
			this->Enc2->Click += gcnew System::EventHandler(this, &Form1::Enc2_Click);
			// 
			// Move3
			// 
			this->Move3->Location = System::Drawing::Point(240, 366);
			this->Move3->Name = L"Move3";
			this->Move3->Size = System::Drawing::Size(80, 24);
			this->Move3->TabIndex = 39;
			this->Move3->Text = L"<----";
			this->Move3->UseVisualStyleBackColor = true;
			this->Move3->Click += gcnew System::EventHandler(this, &Form1::Move3_Click);
			// 
			// Dec3
			// 
			this->Dec3->Location = System::Drawing::Point(240, 342);
			this->Dec3->Name = L"Dec3";
			this->Dec3->Size = System::Drawing::Size(80, 24);
			this->Dec3->TabIndex = 38;
			this->Dec3->Text = L"Decrypt";
			this->Dec3->UseVisualStyleBackColor = true;
			this->Dec3->Click += gcnew System::EventHandler(this, &Form1::Dec3_Click);
			// 
			// Enc3
			// 
			this->Enc3->Location = System::Drawing::Point(240, 318);
			this->Enc3->Name = L"Enc3";
			this->Enc3->Size = System::Drawing::Size(80, 24);
			this->Enc3->TabIndex = 37;
			this->Enc3->Text = L"Encrypt";
			this->Enc3->UseVisualStyleBackColor = true;
			this->Enc3->Click += gcnew System::EventHandler(this, &Form1::Enc3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(555, 415);
			this->Controls->Add(this->Move3);
			this->Controls->Add(this->Dec3);
			this->Controls->Add(this->Enc3);
			this->Controls->Add(this->Move2);
			this->Controls->Add(this->Dec2);
			this->Controls->Add(this->Enc2);
			this->Controls->Add(this->Move1);
			this->Controls->Add(this->Dec1);
			this->Controls->Add(this->Text12);
			this->Controls->Add(this->Key6);
			this->Controls->Add(this->Text11);
			this->Controls->Add(this->Key5);
			this->Controls->Add(this->Text10);
			this->Controls->Add(this->Key4);
			this->Controls->Add(this->Text6);
			this->Controls->Add(this->Key3);
			this->Controls->Add(this->Text5);
			this->Controls->Add(this->Key2);
			this->Controls->Add(this->EncrBox3);
			this->Controls->Add(this->TxtBox3);
			this->Controls->Add(this->Text14);
			this->Controls->Add(this->Text15);
			this->Controls->Add(this->Text13);
			this->Controls->Add(this->Clear3);
			this->Controls->Add(this->EncrBox2);
			this->Controls->Add(this->TxtBox2);
			this->Controls->Add(this->Text8);
			this->Controls->Add(this->Text9);
			this->Controls->Add(this->Text7);
			this->Controls->Add(this->Clear2);
			this->Controls->Add(this->EncrBox1);
			this->Controls->Add(this->TxtBox1);
			this->Controls->Add(this->Text3);
			this->Controls->Add(this->Text4);
			this->Controls->Add(this->Text2);
			this->Controls->Add(this->Clear1);
			this->Controls->Add(this->Text1);
			this->Controls->Add(this->Key1);
			this->Controls->Add(this->Enc1);
			this->Name = L"Form1";
			this->Text = L"Des Encryptor";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Clear1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->TxtBox1->Text=L"";
		 }
private: System::Void Clear2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->TxtBox2->Text=L"";
		 }
private: System::Void Clear3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->TxtBox3->Text=L"";
		 }
private: System::Void Move1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->TxtBox1->Text=this->EncrBox1->Text;
		 }
private: System::Void Move2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->TxtBox2->Text=this->EncrBox2->Text;
		 }
private: System::Void Move3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->TxtBox3->Text=this->EncrBox3->Text;
		 }
private: System::Void Enc1_Click(System::Object^  sender, System::EventArgs^  e) {
			 strncpy(keyWord, and_SysStringToChar(this->Key1->Text), 7);
			 String^ str = gcnew String(encryption(and_SysStringToChar(this->TxtBox1->Text)));
			 EncrBox1->Text = str;
		 }
private: System::Void Dec1_Click(System::Object^  sender, System::EventArgs^  e) {
			 strncpy(keyWord, and_SysStringToChar(this->Key1->Text), 7);
			 String^ str = gcnew String(decryption(and_SysStringToChar(this->TxtBox1->Text)));
			 EncrBox1->Text = str;
		 }
private: System::Void Enc2_Click(System::Object^  sender, System::EventArgs^  e) {
			 strncpy(keyWord, and_SysStringToChar(this->Key2->Text), 7);
			 String^ str = gcnew String(encryption(and_SysStringToChar(this->TxtBox2->Text)));
			 strncpy(keyWord, and_SysStringToChar(this->Key3->Text), 7);
			 str = gcnew String(encryption(and_SysStringToChar(str)));
			 EncrBox2->Text = str;
		 }
private: System::Void Dec2_Click(System::Object^  sender, System::EventArgs^  e) {
			 strncpy(keyWord, and_SysStringToChar(this->Key3->Text), 7);
			 String^ str = gcnew String(decryption(and_SysStringToChar(this->TxtBox2->Text)));
			 strncpy(keyWord, and_SysStringToChar(this->Key2->Text), 7);
			 str = gcnew String(decryption(and_SysStringToChar(str)));
			 EncrBox2->Text = str;
		 }
private: System::Void Enc3_Click(System::Object^  sender, System::EventArgs^  e) {
			 strncpy(keyWord, and_SysStringToChar(this->Key4->Text), 7);
			 String^ str = gcnew String(encryption(and_SysStringToChar(this->TxtBox3->Text)));
			 strncpy(keyWord, and_SysStringToChar(this->Key5->Text), 7);
			 str = gcnew String(encryption(and_SysStringToChar(str)));
			 strncpy(keyWord, and_SysStringToChar(this->Key6->Text), 7);
			 str = gcnew String(encryption(and_SysStringToChar(str)));
			 EncrBox3->Text = str;
		 }
private: System::Void Dec3_Click(System::Object^  sender, System::EventArgs^  e) {
			 strncpy(keyWord, and_SysStringToChar(this->Key6->Text), 7);
			 String^ str = gcnew String(decryption(and_SysStringToChar(this->TxtBox3->Text)));
			 strncpy(keyWord, and_SysStringToChar(this->Key5->Text), 7);
			 str = gcnew String(decryption(and_SysStringToChar(str)));
			 strncpy(keyWord, and_SysStringToChar(this->Key4->Text), 7);
			 str = gcnew String(decryption(and_SysStringToChar(str)));
			 EncrBox3->Text = str;
		 }
};
}

