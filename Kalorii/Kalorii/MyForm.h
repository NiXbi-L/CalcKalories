#pragma once

namespace Kalorii {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ Male;
	protected:
	private: System::Windows::Forms::RadioButton^ Female;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ OldBox;

	private: System::Windows::Forms::Label^ HowOld;
	private: System::Windows::Forms::Label^ Wgtlb;
	private: System::Windows::Forms::TextBox^ Wgt;
	private: System::Windows::Forms::Label^ Up;
	private: System::Windows::Forms::TextBox^ UpBox;
	private: System::Windows::Forms::Button^ Clalc;



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
			this->Male = (gcnew System::Windows::Forms::RadioButton());
			this->Female = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->OldBox = (gcnew System::Windows::Forms::TextBox());
			this->HowOld = (gcnew System::Windows::Forms::Label());
			this->Wgtlb = (gcnew System::Windows::Forms::Label());
			this->Wgt = (gcnew System::Windows::Forms::TextBox());
			this->Up = (gcnew System::Windows::Forms::Label());
			this->UpBox = (gcnew System::Windows::Forms::TextBox());
			this->Clalc = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Male
			// 
			this->Male->AutoSize = true;
			this->Male->Location = System::Drawing::Point(0, 0);
			this->Male->Name = L"Male";
			this->Male->Size = System::Drawing::Size(34, 17);
			this->Male->TabIndex = 0;
			this->Male->TabStop = true;
			this->Male->Text = L"М";
			this->Male->UseVisualStyleBackColor = true;
			this->Male->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Male_CheckedChanged);
			// 
			// Female
			// 
			this->Female->AutoSize = true;
			this->Female->Location = System::Drawing::Point(40, 0);
			this->Female->Name = L"Female";
			this->Female->Size = System::Drawing::Size(36, 17);
			this->Female->TabIndex = 1;
			this->Female->TabStop = true;
			this->Female->Text = L"Ж";
			this->Female->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Male);
			this->groupBox1->Controls->Add(this->Female);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(73, 20);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// OldBox
			// 
			this->OldBox->Location = System::Drawing::Point(146, 12);
			this->OldBox->Name = L"OldBox";
			this->OldBox->Size = System::Drawing::Size(178, 20);
			this->OldBox->TabIndex = 3;
			// 
			// HowOld
			// 
			this->HowOld->AutoSize = true;
			this->HowOld->Location = System::Drawing::Point(91, 15);
			this->HowOld->Name = L"HowOld";
			this->HowOld->Size = System::Drawing::Size(52, 13);
			this->HowOld->TabIndex = 4;
			this->HowOld->Text = L"Возраст:";
			this->HowOld->Click += gcnew System::EventHandler(this, &MyForm::HowOld_Click);
			// 
			// Wgtlb
			// 
			this->Wgtlb->AutoSize = true;
			this->Wgtlb->Location = System::Drawing::Point(12, 41);
			this->Wgtlb->Name = L"Wgtlb";
			this->Wgtlb->Size = System::Drawing::Size(29, 13);
			this->Wgtlb->TabIndex = 6;
			this->Wgtlb->Text = L"Вес:";
			// 
			// Wgt
			// 
			this->Wgt->Location = System::Drawing::Point(47, 38);
			this->Wgt->Name = L"Wgt";
			this->Wgt->Size = System::Drawing::Size(116, 20);
			this->Wgt->TabIndex = 5;
			// 
			// Up
			// 
			this->Up->AutoSize = true;
			this->Up->Location = System::Drawing::Point(169, 44);
			this->Up->Name = L"Up";
			this->Up->Size = System::Drawing::Size(34, 13);
			this->Up->TabIndex = 8;
			this->Up->Text = L"Рост:";
			// 
			// UpBox
			// 
			this->UpBox->Location = System::Drawing::Point(209, 41);
			this->UpBox->Name = L"UpBox";
			this->UpBox->Size = System::Drawing::Size(115, 20);
			this->UpBox->TabIndex = 7;
			// 
			// Clalc
			// 
			this->Clalc->Location = System::Drawing::Point(15, 75);
			this->Clalc->Name = L"Clalc";
			this->Clalc->Size = System::Drawing::Size(309, 45);
			this->Clalc->TabIndex = 9;
			this->Clalc->Text = L"Расчитать";
			this->Clalc->UseVisualStyleBackColor = true;
			this->Clalc->Click += gcnew System::EventHandler(this, &MyForm::Clalc_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(336, 125);
			this->Controls->Add(this->Clalc);
			this->Controls->Add(this->Up);
			this->Controls->Add(this->UpBox);
			this->Controls->Add(this->Wgtlb);
			this->Controls->Add(this->Wgt);
			this->Controls->Add(this->HowOld);
			this->Controls->Add(this->OldBox);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"Калькулятор калорий";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Male_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void HowOld_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Clalc_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->OldBox->Text == "" || this->UpBox->Text == "" || this->Wgt->Text == "")
		return;
	int old = System::Convert::ToInt32(this->OldBox->Text);
	int up = System::Convert::ToInt32(this->UpBox->Text);
	int wgt = System::Convert::ToInt32(this->Wgt->Text);
	if (this->Male->Checked == true)this->Clalc->Text = System::Convert::ToString((665 + 9.6 * wgt + 1.8 * up + 4.7 * old) * 1.4) + "Ккал/Сут.";
	else if (this->Female->Checked == true)Clalc->Text = System::Convert::ToString((66 + 13.7 * wgt + 5 * up + 6.76 * old) * 1.4) + "Ккал/Сут.";
}
};
}
