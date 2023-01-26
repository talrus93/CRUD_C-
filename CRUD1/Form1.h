#pragma once
#include "DB.h"
#include "Update.h"

namespace CRUD1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::TextBox^ txt_age;
	private: System::Windows::Forms::TextBox^ txt_course;
	private: System::Windows::Forms::Button^ btn_save;
	protected:


	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	

	private: DB^ data;
	private: System::Windows::Forms::DataGridView^ data_grid;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Label^ label_user;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_age = (gcnew System::Windows::Forms::TextBox());
			this->txt_course = (gcnew System::Windows::Forms::TextBox());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->label_user = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_name
			// 
			this->txt_name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_name->Location = System::Drawing::Point(558, 53);
			this->txt_name->Multiline = true;
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(273, 36);
			this->txt_name->TabIndex = 0;
			// 
			// txt_age
			// 
			this->txt_age->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_age->Location = System::Drawing::Point(558, 137);
			this->txt_age->Multiline = true;
			this->txt_age->Name = L"txt_age";
			this->txt_age->Size = System::Drawing::Size(273, 36);
			this->txt_age->TabIndex = 1;
			// 
			// txt_course
			// 
			this->txt_course->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_course->Location = System::Drawing::Point(558, 225);
			this->txt_course->Multiline = true;
			this->txt_course->Name = L"txt_course";
			this->txt_course->Size = System::Drawing::Size(273, 36);
			this->txt_course->TabIndex = 2;
			// 
			// btn_save
			// 
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_save->Location = System::Drawing::Point(566, 316);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(209, 40);
			this->btn_save->TabIndex = 3;
			this->btn_save->Text = L"Save";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &Form1::btn_save_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(445, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Name";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(445, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Age";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(445, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Course";
			// 
			// data_grid
			// 
			this->data_grid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid->DefaultCellStyle = dataGridViewCellStyle6;
			this->data_grid->Location = System::Drawing::Point(38, 77);
			this->data_grid->Name = L"data_grid";
			this->data_grid->ReadOnly = true;
			this->data_grid->RowHeadersVisible = false;
			this->data_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid->Size = System::Drawing::Size(324, 215);
			this->data_grid->TabIndex = 7;
			this->data_grid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::data_grid_CellClick);
			this->data_grid->DoubleClick += gcnew System::EventHandler(this, &Form1::data_grid_DoubleClick);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Red;
			this->btn_delete->FlatAppearance->BorderSize = 0;
			this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete->ForeColor = System::Drawing::Color::White;
			this->btn_delete->Location = System::Drawing::Point(38, 316);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(176, 40);
			this->btn_delete->TabIndex = 8;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Form1::btn_delete_Click);
			// 
			// label_user
			// 
			this->label_user->AutoSize = true;
			this->label_user->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_user->ForeColor = System::Drawing::Color::White;
			this->label_user->Location = System::Drawing::Point(257, 326);
			this->label_user->Name = L"label_user";
			this->label_user->Size = System::Drawing::Size(101, 21);
			this->label_user->TabIndex = 9;
			this->label_user->Text = L"Selecting a:";
			this->label_user->Click += gcnew System::EventHandler(this, &Form1::label_user_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(919, 409);
			this->Controls->Add(this->label_user);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->data_grid);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->txt_course);
			this->Controls->Add(this->txt_age);
			this->Controls->Add(this->txt_name);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta();
}

		public: void Consulta()
		{
			this->data->Openconn();
			this->data_grid->DataSource = this->data->getData();
			this->data->Closeconn();
		}



private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->Openconn();
	this->data->Insert(this->txt_name->Text, this->txt_age->Text, this->txt_course->Text);
	this->data->Closeconn();
	this->Consulta();
}


private: System::Void data_grid_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	
	
	String^ name = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	String^ age = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	String^ course = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
	
	CRUD1::Update^ form = gcnew CRUD1::Update();

	
	form->txt_name->Text = name;
	form->txt_age->Text = age;
	form->txt_course->Text = course;
	form->ShowDialog();
	DB^ data = gcnew DB();
	data->Openconn();
	data->Update(form->txt_name->Text, form->txt_age->Text, form->txt_course->Text, name);
	data->Closeconn();
	this->Consulta();


}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	
	
	DB^ data = gcnew DB();
	data->Openconn();
	data->Delete(name);
	data->Closeconn();
	this->Consulta();

}
private: System::Void data_grid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ name = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	label_user->Text = "Select: " + name;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_user_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
