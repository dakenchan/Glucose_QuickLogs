#pragma once
#include <ctype.h>
#include <string>
#include <msclr\marshal_cppstd.h>

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
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->Entry->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->dataGridView1->Size = System::Drawing::Size(708, 164);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView1_CellContentClick);
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->Width = 60;
			// 
			// Time
			// 
			this->Time->HeaderText = L"Time";
			this->Time->Name = L"Time";
			this->Time->Width = 60;
			// 
			// Category
			// 
			this->Category->HeaderText = L"Category";
			this->Category->Name = L"Category";
			this->Category->Width = 70;
			// 
			// Result
			// 
			this->Result->HeaderText = L"Result";
			this->Result->Name = L"Result";
			this->Result->Width = 50;
			// 
			// Density
			// 
			this->Density->HeaderText = L"Density";
			this->Density->Name = L"Density";
			this->Density->Width = 50;
			// 
			// Medication
			// 
			this->Medication->HeaderText = L"Medication";
			this->Medication->Name = L"Medication";
			this->Medication->Width = 80;
			// 
			// Dose
			// 
			this->Dose->HeaderText = L"Dose";
			this->Dose->Name = L"Dose";
			this->Dose->Width = 45;
			// 
			// Memo
			// 
			this->Memo->HeaderText = L"Memo";
			this->Memo->Name = L"Memo";
			this->Memo->Width = 250;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(577, 126);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Settings";
			this->tabPage3->UseVisualStyleBackColor = true;
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
			this->ClientSize = System::Drawing::Size(598, 167);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		densityPick->SelectedIndex = 0;
		timeCatPick->SelectedIndex = 0;

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
		this->ClientSize = System::Drawing::Size(598, 167);
		this->Entry->ClientSize = System::Drawing::Size(585, 152);
	} else if (holder == 1) // 1 is the logbook
	{
		this->ClientSize = System::Drawing::Size(763, 522);
		this->Entry->ClientSize = System::Drawing::Size(750, 508);
		this->dataGridView1->ClientSize = System::Drawing::Size(728, 470);

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
	press.month = datePick->Value.Month;
	press.hour = timePick->Value.Hour;
	press.minute = timePick->Value.Minute;
	/*press.ampm = timePick->Value. not sure on how to retrieve ampm*/
	
	if (resultBox->Text == "")
	{
		MessageBox::Show("Result Box cannot be left empty!");
	}
	else
	{
		press.result = int::Parse(resultBox->Text);
		press.dens = densityPick->SelectedIndex;
		press.cat = timeCatPick->SelectedIndex;


		//if programming for medication checkbox
		if (medCheck->Checked == true)
		{
			press.medU = Convert::ToInt32(medUText->Text);
			press.medicine = medPicker->SelectedIndex;
		}

		// if progamming for memo
		if (memoCheck->Checked == true)
		{
			String^ memoHolder;
			memoHolder = gcnew String(memoTextbox->Text);
			press.memo = msclr::interop::marshal_as<std::string>(memoHolder);
		}
	}

}
};
}
