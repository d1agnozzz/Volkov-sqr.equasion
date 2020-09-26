#pragma once
#include <cmath>
namespace SquareEquasionSolution {

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
	private: System::Windows::Forms::TextBox^  tBa;
	private: System::Windows::Forms::TextBox^  tBb;
	private: System::Windows::Forms::TextBox^  tBc;
	private: System::Windows::Forms::TextBox^  tBx1;
	private: System::Windows::Forms::TextBox^  tBx2;
	protected: 

	protected: 




	private: System::Windows::Forms::Label^  lblA;
	private: System::Windows::Forms::Label^  lblB;
	private: System::Windows::Forms::Label^  lblC;
	private: System::Windows::Forms::Label^  lblX1;






	private: System::Windows::Forms::Label^  lblX2;
	private: System::Windows::Forms::Button^  btnSolve;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblComm;

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
			this->tBa = (gcnew System::Windows::Forms::TextBox());
			this->tBb = (gcnew System::Windows::Forms::TextBox());
			this->tBc = (gcnew System::Windows::Forms::TextBox());
			this->tBx1 = (gcnew System::Windows::Forms::TextBox());
			this->tBx2 = (gcnew System::Windows::Forms::TextBox());
			this->lblA = (gcnew System::Windows::Forms::Label());
			this->lblB = (gcnew System::Windows::Forms::Label());
			this->lblC = (gcnew System::Windows::Forms::Label());
			this->lblX1 = (gcnew System::Windows::Forms::Label());
			this->lblX2 = (gcnew System::Windows::Forms::Label());
			this->btnSolve = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblComm = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tBa
			// 
			this->tBa->Location = System::Drawing::Point(71, 56);
			this->tBa->Name = L"tBa";
			this->tBa->Size = System::Drawing::Size(84, 20);
			this->tBa->TabIndex = 0;
			// 
			// tBb
			// 
			this->tBb->Location = System::Drawing::Point(71, 92);
			this->tBb->Name = L"tBb";
			this->tBb->Size = System::Drawing::Size(84, 20);
			this->tBb->TabIndex = 0;
			// 
			// tBc
			// 
			this->tBc->Location = System::Drawing::Point(71, 126);
			this->tBc->Name = L"tBc";
			this->tBc->Size = System::Drawing::Size(84, 20);
			this->tBc->TabIndex = 0;
			// 
			// tBx1
			// 
			this->tBx1->Location = System::Drawing::Point(219, 55);
			this->tBx1->Name = L"tBx1";
			this->tBx1->Size = System::Drawing::Size(84, 20);
			this->tBx1->TabIndex = 0;
			// 
			// tBx2
			// 
			this->tBx2->Location = System::Drawing::Point(351, 55);
			this->tBx2->Name = L"tBx2";
			this->tBx2->Size = System::Drawing::Size(84, 20);
			this->tBx2->TabIndex = 0;
			// 
			// lblA
			// 
			this->lblA->AutoSize = true;
			this->lblA->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblA->Location = System::Drawing::Point(33, 55);
			this->lblA->Name = L"lblA";
			this->lblA->Size = System::Drawing::Size(31, 19);
			this->lblA->TabIndex = 1;
			this->lblA->Text = L"a =";
			// 
			// lblB
			// 
			this->lblB->AutoSize = true;
			this->lblB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblB->Location = System::Drawing::Point(32, 91);
			this->lblB->Name = L"lblB";
			this->lblB->Size = System::Drawing::Size(32, 19);
			this->lblB->TabIndex = 1;
			this->lblB->Text = L"b =";
			// 
			// lblC
			// 
			this->lblC->AutoSize = true;
			this->lblC->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblC->Location = System::Drawing::Point(32, 125);
			this->lblC->Name = L"lblC";
			this->lblC->Size = System::Drawing::Size(30, 19);
			this->lblC->TabIndex = 1;
			this->lblC->Text = L"c =";
			// 
			// lblX1
			// 
			this->lblX1->AutoSize = true;
			this->lblX1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblX1->Location = System::Drawing::Point(174, 54);
			this->lblX1->Name = L"lblX1";
			this->lblX1->Size = System::Drawing::Size(39, 19);
			this->lblX1->TabIndex = 2;
			this->lblX1->Text = L"x1 =";
			// 
			// lblX2
			// 
			this->lblX2->AutoSize = true;
			this->lblX2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblX2->Location = System::Drawing::Point(306, 56);
			this->lblX2->Name = L"lblX2";
			this->lblX2->Size = System::Drawing::Size(39, 19);
			this->lblX2->TabIndex = 2;
			this->lblX2->Text = L"x2 =";
			// 
			// btnSolve
			// 
			this->btnSolve->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btnSolve->Location = System::Drawing::Point(182, 171);
			this->btnSolve->Name = L"btnSolve";
			this->btnSolve->Size = System::Drawing::Size(107, 30);
			this->btnSolve->TabIndex = 3;
			this->btnSolve->Text = L"Решить";
			this->btnSolve->UseVisualStyleBackColor = true;
			this->btnSolve->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(45, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 30);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Сброс";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(319, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 30);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Закрыть";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(37, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 47);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Коэфициенты\r\nуравнения";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(242, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Корни уравнения";
			// 
			// lblComm
			// 
			this->lblComm->AutoSize = true;
			this->lblComm->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lblComm->Location = System::Drawing::Point(178, 104);
			this->lblComm->Name = L"lblComm";
			this->lblComm->Size = System::Drawing::Size(0, 20);
			this->lblComm->TabIndex = 6;
			this->lblComm->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 222);
			this->Controls->Add(this->lblComm);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnSolve);
			this->Controls->Add(this->lblX2);
			this->Controls->Add(this->lblX1);
			this->Controls->Add(this->lblC);
			this->Controls->Add(this->lblB);
			this->Controls->Add(this->lblA);
			this->Controls->Add(this->tBc);
			this->Controls->Add(this->tBb);
			this->Controls->Add(this->tBx2);
			this->Controls->Add(this->tBx1);
			this->Controls->Add(this->tBa);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 float a, b, c, x1, x2, D, sqD;
				 a = Convert::ToSingle(tBa->Text);
				 b = Convert::ToSingle(tBb->Text);
				 c = Convert::ToSingle(tBc->Text);
				 D = b*b - 4*a*c;
				 sqD = std::sqrt(D);
				 if (a == 0&&b == 0&&c == 0) {
					 tBx1->Text = "";
					 tBx2->Text = "";
					 lblComm->Text = "Все коэфициенты - нули";
				 }
				 else if (a==0) {
					 tBx1->Text = "";
					 tBx2->Text = "";
					 x1 = -c / b;
					 tBx1->Text = Convert::ToString(x1);
					 lblComm->Text = "Линейное уравнение\nОдин корень";
				 }
				 else if (D > 0) {
					 x1 = (-b + sqD) / (2*a);
					 x2 = (-b - sqD) / (2*a);
					 tBx1->Text = Convert::ToString(x1);
					 tBx2->Text = Convert::ToString(x2);
					 lblComm->Text = "Дискриминант > 0\nУравнение имеет два корня"; 
				 }
				 else if (D == 0) {
					 x1 = -b / (2*a);
					 tBx1->Text = Convert::ToString(x1);
					 tBx2->Text = "";
					 lblComm->Text = "Дискриминант = 0\nУравнение имеет один корень";
				 }
				 else {
					 tBx1->Text = "";
					 tBx2->Text = "";
					 lblComm->Text = "Дискриминант < 0\nДействительных корней нет";
				 }

			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 lblComm->Text = "";
			 tBx1->Text = "";
			 tBx2->Text = "";
			 tBa->Text = "";
			 tBb->Text = "";
			 tBc->Text = "";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
};
}

