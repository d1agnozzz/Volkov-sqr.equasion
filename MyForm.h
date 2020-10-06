#pragma once
#include <cmath>

namespace sqr2019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblComm;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnSolve;
	private: System::Windows::Forms::Button^ btnCLose;
	private: System::Windows::Forms::TextBox^ txta;

	private: System::Windows::Forms::TextBox^ txtb;
	private: System::Windows::Forms::TextBox^ txtc;
	private: System::Windows::Forms::TextBox^ txtx1;
	private: System::Windows::Forms::TextBox^ txtx2;











	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblComm = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnSolve = (gcnew System::Windows::Forms::Button());
			this->btnCLose = (gcnew System::Windows::Forms::Button());
			this->txta = (gcnew System::Windows::Forms::TextBox());
			this->txtb = (gcnew System::Windows::Forms::TextBox());
			this->txtc = (gcnew System::Windows::Forms::TextBox());
			this->txtx1 = (gcnew System::Windows::Forms::TextBox());
			this->txtx2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Коэфициенты уравнения:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(26, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"a =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(26, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"b =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(26, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"c =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(227, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 21);
			this->label5->TabIndex = 4;
			this->label5->Text = L"x1 =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(394, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 21);
			this->label6->TabIndex = 5;
			this->label6->Text = L"x2 =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(330, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(138, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Корни уравнения";
			// 
			// lblComm
			// 
			this->lblComm->AutoSize = true;
			this->lblComm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblComm->Location = System::Drawing::Point(227, 128);
			this->lblComm->Name = L"lblComm";
			this->lblComm->Size = System::Drawing::Size(0, 20);
			this->lblComm->TabIndex = 7;
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnReset->Location = System::Drawing::Point(73, 189);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(82, 28);
			this->btnReset->TabIndex = 8;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnSolve
			// 
			this->btnSolve->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSolve->Location = System::Drawing::Point(236, 189);
			this->btnSolve->Name = L"btnSolve";
			this->btnSolve->Size = System::Drawing::Size(93, 28);
			this->btnSolve->TabIndex = 9;
			this->btnSolve->Text = L"Решить";
			this->btnSolve->UseVisualStyleBackColor = true;
			this->btnSolve->Click += gcnew System::EventHandler(this, &MyForm::btnSolve_Click);
			// 
			// btnCLose
			// 
			this->btnCLose->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCLose->Location = System::Drawing::Point(444, 189);
			this->btnCLose->Name = L"btnCLose";
			this->btnCLose->Size = System::Drawing::Size(93, 28);
			this->btnCLose->TabIndex = 10;
			this->btnCLose->Text = L"Закрыть";
			this->btnCLose->UseVisualStyleBackColor = true;
			this->btnCLose->Click += gcnew System::EventHandler(this, &MyForm::btnCLose_Click);
			// 
			// txta
			// 
			this->txta->Location = System::Drawing::Point(73, 61);
			this->txta->Name = L"txta";
			this->txta->Size = System::Drawing::Size(82, 20);
			this->txta->TabIndex = 11;
			this->txta->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtb
			// 
			this->txtb->Location = System::Drawing::Point(73, 101);
			this->txtb->Name = L"txtb";
			this->txtb->Size = System::Drawing::Size(82, 20);
			this->txtb->TabIndex = 12;
			this->txtb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtc
			// 
			this->txtc->Location = System::Drawing::Point(73, 139);
			this->txtc->Name = L"txtc";
			this->txtc->Size = System::Drawing::Size(82, 20);
			this->txtc->TabIndex = 13;
			this->txtc->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtx1
			// 
			this->txtx1->Location = System::Drawing::Point(270, 61);
			this->txtx1->Name = L"txtx1";
			this->txtx1->ReadOnly = true;
			this->txtx1->Size = System::Drawing::Size(100, 20);
			this->txtx1->TabIndex = 14;
			this->txtx1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtx2
			// 
			this->txtx2->Location = System::Drawing::Point(437, 61);
			this->txtx2->Name = L"txtx2";
			this->txtx2->ReadOnly = true;
			this->txtx2->Size = System::Drawing::Size(100, 20);
			this->txtx2->TabIndex = 15;
			this->txtx2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 229);
			this->Controls->Add(this->txtx2);
			this->Controls->Add(this->txtx1);
			this->Controls->Add(this->txtc);
			this->Controls->Add(this->txtb);
			this->Controls->Add(this->txta);
			this->Controls->Add(this->btnCLose);
			this->Controls->Add(this->btnSolve);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->lblComm);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ifblank() {
			if (txta->Text == L"") {
				txta->Text = L"0";
			}
			if (txtb->Text == L"") {
				txtb->Text = L"0";
			}
			if (txtc->Text == L"") {
				txtc->Text = L"0";
			}
		}

		double convert(String^ str) {
			return Convert::ToDouble(str);
		}

		bool checkInput() {
			try
			{
				convert(txta->Text);
				convert(txtb->Text);
				convert(txtc->Text);
			}
			catch (...)
			{
				lblComm->Text = L"Ошибка в воде коэфициентов";
				txtx2->Text = L"";
				txtx1->Text = L"";
				return 0;
			}
			lblComm->Text = L"";
			return 1;
		}


	private: System::Void btnCLose_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		txta->Text = L"";
		txtb->Text = L"";
		txtc->Text = L"";
		txtx1->Text = L"";
		txtx2->Text = L"";
		lblComm->Text = L"";
	}
	private: System::Void btnSolve_Click(System::Object^ sender, System::EventArgs^ e) {
		double a, b, c, D, x1, x2;
		ifblank();
		if (checkInput()) {
			a = convert(txta->Text);
			b = convert(txtb->Text);
			c = convert(txtc->Text);

			if (a == 0 && b == 0 && c == 0) {
				lblComm->Text = L"Тождество\nРешение - любое число";
				txtx1->Text = L"";
				txtx2->Text = L"";
			}
			else if (a == 0 && b == 0) {
				lblComm->Text = L"Неверное равенство";
				txtx2->Text = L"";
				txtx1->Text = L"";
			}
			else if (a == 0) {
				lblComm->Text = L"Линейное уравнение — один корень";
				x1 = -c / b;
				txtx1->Text = Convert::ToString(x1);
				txtx2->Text = L"";
			}
			else {
				D = b * b - 4 * a * c;
				if (D > 0) {
					x1 = (-b + sqrt(D)) / (2 * a);
					x2 = (-b - sqrt(D)) / (2 * a);
					txtx1->Text = Convert::ToString(x1);
					txtx2->Text = Convert::ToString(x2);
					lblComm->Text = L"Дискриминант больше нуля\nУравнение имеет два корня";
				}
				else if (D == 0) {
					x1 = (-b) / (2 * a);
					txtx1->Text = Convert::ToString(x1);
					txtx2->Text = Convert::ToString(x1);
					lblComm->Text = L"Дискриминант равен нулю\nУравнение имеет два одинаковых корня";
				}
				else {
					lblComm->Text = L"Дискриминант меньше нуля\nДействительных корней нет";
					txtx2->Text = L"";
					txtx1->Text = L"";
				}
			}
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}