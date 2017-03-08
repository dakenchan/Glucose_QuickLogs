#pragma once
#include <ctype.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <sstream>

struct entryHolder
{
	int month;
	int day;
	int year;
	int hour;
	int minute;
	int ampm;
	int result;
	int dens;
	int cat;
	double medU;
	int medicine;
	std::string memo;
};

struct settingsHolder
{
	int density, time, date, low, normal, high;
	bool useColors;
};

namespace Glucose_QuickLogs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DateTimePicker^  timePick;
	private: System::Windows::Forms::TextBox^  resultBox;
	protected:
	private: System::Windows::Forms::DateTimePicker^  datePick;
	private: System::Windows::Forms::ComboBox^  timeCatPick;
	private: System::Windows::Forms::ComboBox^  densityPick;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RichTextBox^  memoTextbox;
	private: System::Windows::Forms::CheckBox^  memoCheck;
	private: System::Windows::Forms::TextBox^  medUText;
	private: System::Windows::Forms::ComboBox^  medPicker;
	private: System::Windows::Forms::CheckBox^  medCheck;
	private: System::Windows::Forms::TabControl^  Entry;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Category;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Result;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Density;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Medication;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Dose;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Memo;
	private: bool med = false;
	private: bool mem = false;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  dateFormat;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  timeFormat;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  highTextBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  normalTextBox;
	private: System::Windows::Forms::TextBox^  lowTextBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  densitySetting;
	private: System::Windows::Forms::Button^  setApply;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::CheckBox^  useRange;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->timeCatPick = (gcnew System::Windows::Forms::ComboBox());
			this->densityPick = (gcnew System::Windows::Forms::ComboBox());
			this->resultBox = (gcnew System::Windows::Forms::TextBox());
			this->datePick = (gcnew System::Windows::Forms::DateTimePicker());
			this->timePick = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->memoCheck = (gcnew System::Windows::Forms::CheckBox());
			this->memoTextbox = (gcnew System::Windows::Forms::RichTextBox());
			this->medUText = (gcnew System::Windows::Forms::TextBox());
			this->medPicker = (gcnew System::Windows::Forms::ComboBox());
			this->medCheck = (gcnew System::Windows::Forms::CheckBox());
			this->Entry = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Category = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Result = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Density = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Medication = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dose = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Memo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->setApply = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->useRange = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateFormat = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timeFormat = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->highTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->normalTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lowTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->densitySetting = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->Entry->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->timeCatPick);
			this->groupBox1->Controls->Add(this->densityPick);
			this->groupBox1->Controls->Add(this->resultBox);
			this->groupBox1->Controls->Add(this->datePick);
			this->groupBox1->Controls->Add(this->timePick);
			this->groupBox1->Location = System::Drawing::Point(6, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(211, 114);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Quick Entry";
			// 
			// timeCatPick
			// 
			this->timeCatPick->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->timeCatPick->FormattingEnabled = true;
			this->timeCatPick->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Breakfast", L"Lunch", L"Dinner", L"Snack",
					L"Bedtime"
			});
			this->timeCatPick->Location = System::Drawing::Point(114, 78);
			this->timeCatPick->Name = L"timeCatPick";
			this->timeCatPick->Size = System::Drawing::Size(91, 21);
			this->timeCatPick->TabIndex = 4;
			this->timeCatPick->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox2_SelectedIndexChanged);
			// 
			// densityPick
			// 
			this->densityPick->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->densityPick->FormattingEnabled = true;
			this->densityPick->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"mg/dl", L"mmol/L" });
			this->densityPick->Location = System::Drawing::Point(114, 47);
			this->densityPick->Name = L"densityPick";
			this->densityPick->Size = System::Drawing::Size(91, 21);
			this->densityPick->TabIndex = 3;
			this->densityPick->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// resultBox
			// 
			this->resultBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultBox->Location = System::Drawing::Point(7, 46);
			this->resultBox->Name = L"resultBox";
			this->resultBox->Size = System::Drawing::Size(100, 53);
			this->resultBox->TabIndex = 2;
			this->resultBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->resultBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::resultBox_KeyPress);
			// 
			// datePick
			// 
			this->datePick->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->datePick->Location = System::Drawing::Point(7, 20);
			this->datePick->Name = L"datePick";
			this->datePick->Size = System::Drawing::Size(100, 20);
			this->datePick->TabIndex = 1;
			// 
			// timePick
			// 
			this->timePick->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->timePick->Location = System::Drawing::Point(113, 20);
			this->timePick->Name = L"timePick";
			this->timePick->ShowUpDown = true;
			this->timePick->Size = System::Drawing::Size(92, 20);
			this->timePick->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->memoCheck);
			this->groupBox2->Controls->Add(this->memoTextbox);
			this->groupBox2->Controls->Add(this->medUText);
			this->groupBox2->Controls->Add(this->medPicker);
			this->groupBox2->Controls->Add(this->medCheck);
			this->groupBox2->Location = System::Drawing::Point(223, 7);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(248, 114);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Advanced Entry";
			// 
			// memoCheck
			// 
			this->memoCheck->AutoSize = true;
			this->memoCheck->Location = System::Drawing::Point(6, 43);
			this->memoCheck->Name = L"memoCheck";
			this->memoCheck->Size = System::Drawing::Size(55, 17);
			this->memoCheck->TabIndex = 3;
			this->memoCheck->Text = L"Memo";
			this->memoCheck->UseVisualStyleBackColor = true;
			this->memoCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::memoCheck_CheckedChanged);
			// 
			// memoTextbox
			// 
			this->memoTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->memoTextbox->Enabled = false;
			this->memoTextbox->Location = System::Drawing::Point(67, 46);
			this->memoTextbox->Name = L"memoTextbox";
			this->memoTextbox->Size = System::Drawing::Size(175, 62);
			this->memoTextbox->TabIndex = 4;
			this->memoTextbox->Text = L"";
			this->memoTextbox->TextChanged += gcnew System::EventHandler(this, &MyForm1::richTextBox1_TextChanged);
			// 
			// medUText
			// 
			this->medUText->Enabled = false;
			this->medUText->Location = System::Drawing::Point(92, 20);
			this->medUText->Name = L"medUText";
			this->medUText->Size = System::Drawing::Size(51, 20);
			this->medUText->TabIndex = 2;
			this->medUText->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::medUText_KeyPress);
			// 
			// medPicker
			// 
			this->medPicker->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->medPicker->Enabled = false;
			this->medPicker->FormattingEnabled = true;
			this->medPicker->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Humalog", L"Novolog", L"Lantus", L"Humalog 70/30" });
			this->medPicker->Location = System::Drawing::Point(149, 19);
			this->medPicker->Name = L"medPicker";
			this->medPicker->Size = System::Drawing::Size(93, 21);
			this->medPicker->TabIndex = 1;
			// 
			// medCheck
			// 
			this->medCheck->AutoSize = true;
			this->medCheck->Location = System::Drawing::Point(6, 20);
			this->medCheck->Name = L"medCheck";
			this->medCheck->Size = System::Drawing::Size(78, 17);
			this->medCheck->TabIndex = 0;
			this->medCheck->Text = L"Medication";
			this->medCheck->UseVisualStyleBackColor = true;
			this->medCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox1_CheckedChanged);
			// 
			// Entry
			// 
			this->Entry->Controls->Add(this->tabPage1);
			this->Entry->Controls->Add(this->tabPage2);
			this->Entry->Controls->Add(this->tabPage3);
			this->Entry->Controls->Add(this->tabPage4);
			this->Entry->Controls->Add(this->tabPage5);
			this->Entry->Location = System::Drawing::Point(12, 12);
			this->Entry->Name = L"Entry";
			this->Entry->SelectedIndex = 0;
			this->Entry->Size = System::Drawing::Size(585, 152);
			this->Entry->TabIndex = 2;
			this->Entry->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::Entry_SelectedIndexChanged);
			this->Entry->TabIndexChanged += gcnew System::EventHandler(this, &MyForm1::Entry_TabIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(577, 126);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Entry";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(477, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 114);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add Entry to Logbook";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(577, 126);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Logbook";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Date, this->Time,
					this->Category, this->Result, this->Density, this->Medication, this->Dose, this->Memo
			});
			this->dataGridView1->Location = System::Drawing::Point(7, 7);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->Size = System::Drawing::Size(708, 164);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView1_CellContentClick);
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->ReadOnly = true;
			this->Date->Width = 60;
			// 
			// Time
			// 
			this->Time->HeaderText = L"Time";
			this->Time->Name = L"Time";
			this->Time->ReadOnly = true;
			this->Time->Width = 60;
			// 
			// Category
			// 
			this->Category->HeaderText = L"Category";
			this->Category->Name = L"Category";
			this->Category->ReadOnly = true;
			this->Category->Width = 70;
			// 
			// Result
			// 
			this->Result->HeaderText = L"Result";
			this->Result->Name = L"Result";
			this->Result->ReadOnly = true;
			this->Result->Width = 50;
			// 
			// Density
			// 
			this->Density->HeaderText = L"Density";
			this->Density->Name = L"Density";
			this->Density->ReadOnly = true;
			this->Density->Width = 50;
			// 
			// Medication
			// 
			this->Medication->HeaderText = L"Medication";
			this->Medication->Name = L"Medication";
			this->Medication->ReadOnly = true;
			this->Medication->Width = 80;
			// 
			// Dose
			// 
			this->Dose->HeaderText = L"Dose";
			this->Dose->Name = L"Dose";
			this->Dose->ReadOnly = true;
			this->Dose->Width = 45;
			// 
			// Memo
			// 
			this->Memo->HeaderText = L"Memo";
			this->Memo->Name = L"Memo";
			this->Memo->ReadOnly = true;
			this->Memo->Width = 250;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(577, 126);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Settings";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->setApply);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->useRange);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->dateFormat);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->timeFormat);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->highTextBox);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->normalTextBox);
			this->groupBox3->Controls->Add(this->lowTextBox);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->densitySetting);
			this->groupBox3->Location = System::Drawing::Point(6, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(280, 156);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Defaults";
			// 
			// setApply
			// 
			this->setApply->Location = System::Drawing::Point(9, 127);
			this->setApply->Name = L"setApply";
			this->setApply->Size = System::Drawing::Size(263, 23);
			this->setApply->TabIndex = 1;
			this->setApply->Text = L"Apply Settings";
			this->setApply->UseVisualStyleBackColor = true;
			this->setApply->Click += gcnew System::EventHandler(this, &MyForm1::setApply_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(159, 91);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"to color logbook.";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm1::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(156, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Use designated ranges";
			// 
			// useRange
			// 
			this->useRange->AutoSize = true;
			this->useRange->Location = System::Drawing::Point(135, 78);
			this->useRange->Name = L"useRange";
			this->useRange->Size = System::Drawing::Size(15, 14);
			this->useRange->TabIndex = 11;
			this->useRange->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(132, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Date Format:";
			// 
			// dateFormat
			// 
			this->dateFormat->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->dateFormat->FormattingEnabled = true;
			this->dateFormat->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"M/D/Y", L"D/M/Y" });
			this->dateFormat->Location = System::Drawing::Point(206, 46);
			this->dateFormat->Name = L"dateFormat";
			this->dateFormat->Size = System::Drawing::Size(68, 21);
			this->dateFormat->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(132, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Time Format:";
			// 
			// timeFormat
			// 
			this->timeFormat->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->timeFormat->FormattingEnabled = true;
			this->timeFormat->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Standard", L"Military" });
			this->timeFormat->Location = System::Drawing::Point(206, 19);
			this->timeFormat->Name = L"timeFormat";
			this->timeFormat->Size = System::Drawing::Size(68, 21);
			this->timeFormat->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"High:";
			// 
			// highTextBox
			// 
			this->highTextBox->Location = System::Drawing::Point(57, 99);
			this->highTextBox->Name = L"highTextBox";
			this->highTextBox->Size = System::Drawing::Size(69, 20);
			this->highTextBox->TabIndex = 5;
			this->highTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::highTextBox_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Normal:";
			// 
			// normalTextBox
			// 
			this->normalTextBox->Location = System::Drawing::Point(57, 72);
			this->normalTextBox->Name = L"normalTextBox";
			this->normalTextBox->Size = System::Drawing::Size(69, 20);
			this->normalTextBox->TabIndex = 4;
			this->normalTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::normalTextBox_KeyPress);
			// 
			// lowTextBox
			// 
			this->lowTextBox->Location = System::Drawing::Point(57, 46);
			this->lowTextBox->Name = L"lowTextBox";
			this->lowTextBox->Size = System::Drawing::Size(69, 20);
			this->lowTextBox->TabIndex = 3;
			this->lowTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::lowTextBox_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Low:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Density:";
			// 
			// densitySetting
			// 
			this->densitySetting->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->densitySetting->FormattingEnabled = true;
			this->densitySetting->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"mg\\dl", L"mmol\\L" });
			this->densitySetting->Location = System::Drawing::Point(57, 19);
			this->densitySetting->Name = L"densitySetting";
			this->densitySetting->Size = System::Drawing::Size(69, 21);
			this->densitySetting->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(577, 126);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Import";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(577, 126);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Export";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 167);
			this->Controls->Add(this->Entry);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->Text = L"Glucose Quicklogs";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm1::MyForm1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->Entry->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		densityPick->SelectedIndex = 0;
		timeCatPick->SelectedIndex = 0;
		timeFormat->SelectedIndex = 0;
		dateFormat->SelectedIndex = 0;
		densitySetting->SelectedIndex = 0;

		std::string temp;
		std::ifstream importFileWork;

		importFileWork.open("settings.dat");


		settingsHolder import;

		// time for some filework!
		// grabbing density from settings.

		importFileWork >> import.density >> import.low >> import.normal >> import.high >> import.time >> import.date >> import.useColors;

		this->densitySetting->SelectedIndex = import.density;
		this->lowTextBox->Text = Convert::ToString(import.low);
		this->normalTextBox->Text = Convert::ToString(import.normal);
		this->highTextBox->Text = Convert::ToString(import.high);
		this->timeFormat->SelectedIndex = import.time;
		this->dateFormat->SelectedIndex = import.date;

		if (import.useColors = 1)
			this->useRange->Checked = false;
		else
			this->useRange->Checked = true;
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (med == false)
		{
			this->medUText->Enabled = true;
			this->medPicker->Enabled = true;
			med=true;
		}
		else
		{
			med=false;
			this->medUText->Enabled = false;
			this->medPicker->Enabled = false;
		}

	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}

	private: System::Void MyForm1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();
	}

	private: System::Void resultBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
		{
			e->Handled = false;
		}
		else
		{
			e->Handled = true;
		}
}
private: System::Void memoCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (mem == false)
	{
		this->memoTextbox->Enabled = true;
		mem = true;
	}
	else
	{
		mem = false;
		this->memoTextbox->Enabled = false;
	}
}
private: System::Void Entry_TabIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	int holder = this->Entry->SelectedIndex;
	

	if (holder == 1)
	{
		/*this->ClientSize = System::Drawing::Size(743, 222);*/

	}
}
private: System::Void Entry_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	int holder = this->Entry->SelectedIndex;
	
	if (holder == 0) // 0 is default
	{
		this->ClientSize = System::Drawing::Size(602, 167);
		this->Entry->ClientSize = System::Drawing::Size(585, 152);
	} 
	
	else if (holder == 1) // 1 is the logbook
	{
		this->ClientSize = System::Drawing::Size(768, 522);
		this->Entry->ClientSize = System::Drawing::Size(750, 508);
		this->dataGridView1->ClientSize = System::Drawing::Size(728, 470);
	}

	else if (holder == 2) //2 is for settings
	{
		this->ClientSize = System::Drawing::Size(316, 211);
		this->Entry->ClientSize = System::Drawing::Size(298,195);
	}
}
private: System::Void medUText_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
	{
		e->Handled = false;
	}
	else
	{
		e->Handled = true;
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	entryHolder press;
	press.month = datePick->Value.Month;
	press.day = datePick->Value.Day;
	press.year = datePick->Value.Year;
	press.hour = timePick->Value.Hour;
	press.minute = timePick->Value.Minute;
	/*press.ampm = timePick->Value. no need!*/
	
	if (resultBox->Text == "")
	{
		MessageBox::Show("Result Box cannot be left empty!");
	}
	else
	{
		press.result = int::Parse(resultBox->Text);
		press.dens = densityPick->SelectedIndex;
		press.cat = timeCatPick->SelectedIndex;

		std::ofstream entry;
		entry.open("logbook.dat", std::ios::app);

		entry << press.month << "\n" << press.day << "\n" << press.year << "\n";

		if (press.hour >= 12)
		{
			entry << press.hour - 12 << "\n" << press.minute << "\n" << 1 << "\n";
		}
		else
		{
			entry << press.hour << "\n" << press.minute << "\n" << 0 << "\n";
		}

		entry << press.result << "\n" << press.dens << "\n" << press.cat << "\n";

		//if programming for medication checkbox
		if (medCheck->Checked == true)
		{
			press.medU = Convert::ToInt32(medUText->Text);
			press.medicine = medPicker->SelectedIndex;
			entry << press.medU << "\n" << press.medicine << "\n";
		}
		else
		{
			entry << "-\n-\n";
		}

		// if progamming for memo
		if (memoCheck->Checked == true)
		{
			String^ memoHolder;
			memoHolder = gcnew String(memoTextbox->Text);
			press.memo = msclr::interop::marshal_as<std::string>(memoHolder);
			entry << press.memo << "\n\n";

		}
		else
		{
			entry << "-\n\n";
		}

		entry.close();
	}

}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lowTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
	{
		e->Handled = false;
	}
	else
	{
		e->Handled = true;
	}
}
private: System::Void normalTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
	{
		e->Handled = false;
	}
	else
	{
		e->Handled = true;
	}
}
private: System::Void highTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (isdigit(e->KeyChar) || iscntrl(e->KeyChar))
	{
		e->Handled = false;
	}
	else
	{
		e->Handled = true;
	}
}
private: System::Void setApply_Click(System::Object^  sender, System::EventArgs^  e) {
	std::ofstream fileWork;

	fileWork.open("settings.dat");

	fileWork << this->densitySetting->SelectedIndex << "\n";

	if (this->lowTextBox->Text == "")
		fileWork << "-\n";
	else
		fileWork << Convert::ToInt32(this->lowTextBox->Text) << "\n";
	
	if (this->normalTextBox->Text == "")
		fileWork << "-\n";
	else
		fileWork << Convert::ToInt32(this->normalTextBox->Text) << "\n";

	if (this->highTextBox->Text == "")
		fileWork << "-\n";
	else
		fileWork << Convert::ToInt32(this->highTextBox->Text) << "\n";

	fileWork << this->timeFormat->SelectedIndex << "\n";
	fileWork << this->dateFormat->SelectedIndex << "\n";

	if (this->useRange->Checked)
	{
		fileWork << "1";
	}
	else
	{
		fileWork << "0";
	}

	fileWork.close();
}
};
}
