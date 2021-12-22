#pragma once
#include "DLL.h" // DLL 
#include <iostream>
#include <fstream>
#include <string>
#include "VectorLib.h"
#include <thread>
#include <windows.h>
using namespace std;


namespace EdPrac {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; 
	using namespace System::Threading; 

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;





	protected:

	private:
		
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(497, 397);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(30, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 21);
			this->label1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(30, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 21);
			this->label2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(481, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 21);
			this->label3->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(481, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 21);
			this->label4->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(260, 278);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 23);
			this->label6->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(34, 397);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 58);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Обновить дату и время";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(34, 150);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(221, 215);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(440, 150);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox3->Size = System::Drawing::Size(215, 215);
			this->textBox3->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(30, 106);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(155, 23);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Исходный файл:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(436, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(177, 23);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Полученный файл:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(697, 511);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::InfoText;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Thread^ t1;



	public:	void csv()
	{
		vector<string> v1(10); //инициализация векторов
		string buffer = "";
		ifstream fs("../1.txt");
		v1.clear();
		getline(fs, buffer);
		for (int i = 0; i < 10; i++)
		{
			v1.push_back(buffer.substr(i * 10, 10)); 
			
		}
		fs.close();
	}

	public: Thread^ t2;

    public:	void csv2()
	{
		vector<string> v1(10); //инициализация векторов
		string buffer = "";
		ifstream fs("../1.txt");
		v1.clear();
		getline(fs, buffer);
		for (int i = 0; i < 10; i++)
		{
			writeToFile2(v1);
		}
		fs.close();
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		t1 = gcnew Thread(gcnew ThreadStart(this, &MyForm::csv));
		t2 = gcnew Thread(gcnew ThreadStart(this, &MyForm::csv2));
		t1->Start();
		t1->Join();
		t2->Start();
		t2->Join();
		
		String^ file3Path = "../2.csv";
		try
		{
			this->label6->Text = "Файл 2.csv создан";
			String^ file2 = File::ReadAllText(file3Path, System::Text::Encoding::GetEncoding(1251));
			textBox3->Text = file2;
		}
		catch (Exception^ e)
		{
			MessageBox::Show(this, "Файл не был открыт", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		SYSTEMTIME lt;
		GetLocalTime(&lt);
		this->label1->Text = "Фио: Самойлов Евгений Александрович";
		this->label2->Text = "Группа: 501";
		this->label3->Text = Convert::ToString("Дата: " + lt.wDay + "." + lt.wMonth + "." + lt.wYear);
		this->label4->Text = Convert::ToString("Время: " + lt.wHour + ":" + lt.wMinute + ":" + lt.wSecond);

		
		String^ file2Path = "../1.txt";
		String^ file = File::ReadAllText(file2Path, System::Text::Encoding::GetEncoding(1251)); 
		textBox2->Text = file;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		SYSTEMTIME lt;
		GetLocalTime(&lt);
		this->label3->Text = Convert::ToString("Дата: " + lt.wDay + "." + lt.wMonth + "." + lt.wYear);
		this->label4->Text = Convert::ToString("Время: " + lt.wHour + ":" + lt.wMinute + ":" + lt.wSecond);
	}

	};
}
