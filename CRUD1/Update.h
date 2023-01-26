#pragma once
#include "DB.h"


namespace CRUD1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Update
	/// </summary>
	public ref class Update : public System::Windows::Forms::Form
	{
	public:
		Update(void)
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
		~Update()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ txt_name;
	public: System::Windows::Forms::TextBox^ txt_age;
	public: System::Windows::Forms::TextBox^ txt_course;
	private: System::Windows::Forms::Button^ btn_save;
	public:
	private:


	
	private:


	

	private: System::Windows::Forms::Button^ btn_cancel;

	


	

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_age = (gcnew System::Windows::Forms::TextBox());
			this->txt_course = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(219, 99);
			this->txt_name->Multiline = true;
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(183, 29);
			this->txt_name->TabIndex = 3;
			this->txt_name->TextChanged += gcnew System::EventHandler(this, &Update::txt_name_TextChanged);
			// 
			// txt_age
			// 
			this->txt_age->Location = System::Drawing::Point(219, 150);
			this->txt_age->Multiline = true;
			this->txt_age->Name = L"txt_age";
			this->txt_age->Size = System::Drawing::Size(183, 29);
			this->txt_age->TabIndex = 4;
			// 
			// txt_course
			// 
			this->txt_course->Location = System::Drawing::Point(219, 202);
			this->txt_course->Multiline = true;
			this->txt_course->Name = L"txt_course";
			this->txt_course->Size = System::Drawing::Size(183, 29);
			this->txt_course->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(96, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			this->label1->Click += gcnew System::EventHandler(this, &Update::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(96, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Age";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(96, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Course";
			// 
			// btn_cancel
			// 
			this->btn_cancel->BackColor = System::Drawing::Color::Red;
			this->btn_cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->ForeColor = System::Drawing::Color::White;
			this->btn_cancel->Location = System::Drawing::Point(276, 286);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(110, 35);
			this->btn_cancel->TabIndex = 7;
			this->btn_cancel->Text = L"Cancel";
			this->btn_cancel->UseVisualStyleBackColor = false;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &Update::btn_cancel_Click);
			// 
			// btn_save
			// 
			this->btn_save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btn_save->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_save->ForeColor = System::Drawing::Color::White;
			this->btn_save->Location = System::Drawing::Point(100, 286);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(110, 35);
			this->btn_save->TabIndex = 6;
			this->btn_save->Text = L"Save";
			this->btn_save->UseVisualStyleBackColor = false;
			this->btn_save->Click += gcnew System::EventHandler(this, &Update::btn_save_Click);
			// 
			// Update
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(569, 357);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_course);
			this->Controls->Add(this->txt_age);
			this->Controls->Add(this->txt_name);
			this->Name = L"Update";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Update";
			this->Load += gcnew System::EventHandler(this, &Update::Update_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	
	}
private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Updated!");
	this->Close();

}

private: System::Void Update_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
