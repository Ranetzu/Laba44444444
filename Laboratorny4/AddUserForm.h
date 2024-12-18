#pragma once
#include "MainForm.h"
#include "Operator.h"

namespace Laboratorny4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ AddUserForm
	/// </summary>
	public ref class AddUserForm : public System::Windows::Forms::Form
	{
	Generic::List<int>^ list;
	MainForm^ parent;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	Generic::List<Household^>^ listCus;
	public:
		AddUserForm(MainForm^ mForm, Generic::List<Household^>^ listCust, int state)
		{
			InitializeComponent();
			this->button1->Visible = true;

			this->button3->Visible = false;
			this->comboBox1->Visible = false;
			listCus = listCust;
			list = gcnew Generic::List<int>();
			parent = mForm;
		}

		AddUserForm(MainForm^ mForm, Generic::List<Household^>^ listCust)
		{
			InitializeComponent();
			this->button1->Visible = false;

			this->button3->Visible = true;
			this->comboBox1->Visible = true;
			listCus = listCust;
			list = gcnew Generic::List<int>();
			parent = mForm;
			comboBox1->DataSource = listCus;
			comboBox1->DisplayMember = "Name";

		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~AddUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(181, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(293, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ƒобавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddUserForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(126, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(311, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AddUserForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(45, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"¬ведите им€:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(45, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"¬ведите стоимость за электричество:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(253, 169);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(45, 232);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"¬ведите стоимость за воду:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(201, 229);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(236, 20);
			this->textBox3->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(181, 401);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(293, 52);
			this->button3->TabIndex = 8;
			this->button3->Text = L"»зменить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AddUserForm::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(85, 60);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(351, 21);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AddUserForm::comboBox1_SelectedIndexChanged);
			// 
			// AddUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(646, 614);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"AddUserForm";
			this->Text = L"AddUserForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
};
}
