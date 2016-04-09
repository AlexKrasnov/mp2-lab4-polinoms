#pragma once
#include "polinom.h"
#include <iostream>
#include <sstream>
using namespace std;

namespace WinForm 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;


	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button9;




	protected: 

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::ForestGreen;
			this->button1->Location = System::Drawing::Point(640, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(32, 28);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(23, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(87, 29);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(23, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(142, 29);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(23, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"X^";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(116, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Y^";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(171, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Z^";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(197, 29);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(23, 20);
			this->textBox6->TabIndex = 13;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(32, 128);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(23, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(87, 128);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(23, 20);
			this->textBox8->TabIndex = 15;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(142, 128);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(23, 20);
			this->textBox9->TabIndex = 16;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::ForestGreen;
			this->textBox10->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox10->Location = System::Drawing::Point(32, 83);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(683, 20);
			this->textBox10->TabIndex = 17;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(197, 128);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(23, 20);
			this->textBox11->TabIndex = 18;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"X^";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(116, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Y^";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(171, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Z^";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::ForestGreen;
			this->textBox12->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox12->Location = System::Drawing::Point(32, 189);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(683, 20);
			this->textBox12->TabIndex = 22;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(29, 67);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Полином p1:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(29, 173);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Полином p2:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::ForestGreen;
			this->button3->Location = System::Drawing::Point(241, 11);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 52);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Добавить моном";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::ForestGreen;
			this->button4->Location = System::Drawing::Point(241, 111);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 52);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Добавить моном";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::ForestGreen;
			this->button5->Location = System::Drawing::Point(152, 227);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(68, 36);
			this->button5->TabIndex = 27;
			this->button5->Text = L"p1 + p2";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::ForestGreen;
			this->button6->Location = System::Drawing::Point(241, 227);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(66, 36);
			this->button6->TabIndex = 28;
			this->button6->Text = L"p1 - p2";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::ForestGreen;
			this->button7->Location = System::Drawing::Point(331, 227);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(62, 36);
			this->button7->TabIndex = 29;
			this->button7->Text = L"p2 - p1";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::ForestGreen;
			this->button8->Location = System::Drawing::Point(416, 227);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(62, 36);
			this->button8->TabIndex = 30;
			this->button8->Text = L"p1 * p2";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::ForestGreen;
			this->textBox13->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox13->Location = System::Drawing::Point(32, 296);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(580, 20);
			this->textBox13->TabIndex = 33;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox13_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 277);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 13);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Результат операции:";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(29, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(93, 13);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Введите данные:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(29, 106);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(93, 13);
			this->label12->TabIndex = 37;
			this->label12->Text = L"Введите данные:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::ForestGreen;
			this->button2->Location = System::Drawing::Point(331, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 52);
			this->button2->TabIndex = 38;
			this->button2->Text = L"ввести полином p1 заново";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::ForestGreen;
			this->button9->Location = System::Drawing::Point(331, 111);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(147, 52);
			this->button9->TabIndex = 39;
			this->button9->Text = L"ввести полином p2 заново";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(733, 336);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"Арифметические операции с полиномами";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Polinom *p;
		Polinom *q;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
			 {
				 this->Text = "Арифметические операции с полиномами";
				 button1->Text = "EXIT";
				 p = new Polinom;
				 q = new Polinom;
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Application::Exit();
				 delete p;
				 delete q;
			 }
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e){}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 try
				 {
					 double a = Convert::ToDouble(textBox3->Text);
					 int s1 = Convert::ToInt32(textBox4->Text);
					 int s2 = Convert::ToInt32(textBox5->Text);
					 int s3 = Convert::ToInt32(textBox6->Text);
					 if (s1<0||s2<0||s3<0) throw "Степень < 0 ";
					 if (s1>19||s2>19||s3>19) throw "Степень >= 20 ";
					 int N=s1*400+s2*20+s3;
					 p->AddMonom(a,N);
					 string str;
					 stringstream s;
					 s<<(*p);
					 getline(s,str);
					 textBox10->Text = gcnew String(str.c_str());
				 }
				 catch(const char* error)
				 {
					 textBox10->Text=gcnew String(error);
				 }
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 try
				 {
					 double a = Convert::ToDouble(textBox7->Text);
					 int s1 = Convert::ToInt32(textBox8->Text);
					 int s2 = Convert::ToInt32(textBox9->Text);
					 int s3 = Convert::ToInt32(textBox11->Text);
					 if (s1<0||s2<0||s3<0) throw "Степень < 0 ";
					 if (s1>19||s2>19||s3>19) throw "Степень >= 20 ";
					 int N=s1*400+s2*20+s3;
					 q->AddMonom(a,N);
					 string str;
					 stringstream s;
					 s<<(*q);
					 getline(s, str);
					 textBox12->Text = gcnew String(str.c_str());
				 }
				 catch(const char* error)
				 {
					 textBox12->Text=gcnew String(error);
				 }
			 }
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Polinom res = (*p)+(*q);
				 string str;
				 stringstream s;
				 s<<res;
				 getline(s, str);
				 textBox13->Text = gcnew String(str.c_str());
			 }
	private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Polinom res = (*p)-(*q);
				 string str;
				 stringstream s;
				 s<<res;
				 getline(s, str);
				 textBox13->Text = gcnew String(str.c_str());
			 }
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Polinom res = (*q)-(*p);
				 string str;
				 stringstream s;
				 s<<res;
				 getline(s, str);
				 textBox13->Text = gcnew String(str.c_str());
			 }
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 try
				 {
					 Polinom res = (*p)*(*q);
					 string str;
					 stringstream s;
					 s<<res;
					 getline(s, str);
					 textBox13->Text = gcnew String(str.c_str());
				 }
				 catch(const char* error)
				 {
					 textBox13->Text=gcnew String(error);
				 }
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 textBox10->Text="";
				 p = new Polinom;
			 }
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 textBox12->Text="";
				 q = new Polinom;
			 }
	};
}
