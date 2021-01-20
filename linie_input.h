#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UMLTest {

	/// <summary>
	/// Summary for linie_input
	/// </summary>
	public ref class linie_input : public System::Windows::Forms::UserControl
	{
	public:
		linie_input()
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
		~linie_input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxItem;
	protected:

	private: System::Windows::Forms::Button^ delete_button;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::ComboBox^ inputTypeCB;


	public:
		Point MouseLocation;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxItem = (gcnew System::Windows::Forms::TextBox());
			this->delete_button = (gcnew System::Windows::Forms::Button());
			this->inputTypeCB = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBoxItem
			// 
			this->textBoxItem->Location = System::Drawing::Point(3, 0);
			this->textBoxItem->Name = L"textBoxItem";
			this->textBoxItem->Size = System::Drawing::Size(100, 22);
			this->textBoxItem->TabIndex = 0;
			this->textBoxItem->TextChanged += gcnew System::EventHandler(this, &linie_input::textBoxItem_TextChanged);
			this->textBoxItem->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &linie_input::textBox1_MouseDown);
			this->textBoxItem->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &linie_input::textBox1_MouseMove);
			// 
			// delete_button
			// 
			this->delete_button->Location = System::Drawing::Point(188, 1);
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(42, 23);
			this->delete_button->TabIndex = 1;
			this->delete_button->Text = L"x";
			this->delete_button->UseVisualStyleBackColor = true;
			this->delete_button->Click += gcnew System::EventHandler(this, &linie_input::delete_button_Click);
			// 
			// inputTypeCB
			// 
			this->inputTypeCB->FormattingEnabled = true;
			this->inputTypeCB->Location = System::Drawing::Point(109, 0);
			this->inputTypeCB->Name = L"inputTypeCB";
			this->inputTypeCB->Size = System::Drawing::Size(73, 24);
			this->inputTypeCB->TabIndex = 2;
			// 
			// linie_input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->inputTypeCB);
			this->Controls->Add(this->delete_button);
			this->Controls->Add(this->textBoxItem);
			this->Name = L"linie_input";
			this->Size = System::Drawing::Size(234, 25);
			this->ResumeLayout(false);
			this->PerformLayout();

			this->inputTypeCB->Items->Add("void");
			this->inputTypeCB->Items->Add("int");
			this->inputTypeCB->Items->Add("float");
			this->inputTypeCB->Items->Add("double");
			this->inputTypeCB->Items->Add("string");

			this->inputTypeCB->Text = "int";
			this->inputTypeCB->DropDownStyle = ComboBoxStyle::DropDownList;
			

		}
#pragma endregion
	private: System::Void delete_button_Click(System::Object^ sender, System::EventArgs^ e) {
		delete this;

	}

	public: Button^ getXButton() {
		return this->delete_button;
	}
	
	public: TextBox^ getTextBox() {
		return this->textBoxItem;
	}
	
	public: ComboBox^ getComboBox() {
		return this->inputTypeCB;
	}

	private: System::Void textBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			MouseLocation = e->Location;
		}

	}
	private: System::Void textBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		//	textBoxItem->Top = e->Y + textBoxItem->Top - MouseLocation.Y;
		}
	}
	private: System::Void textBoxItem_TextChanged(System::Object^ sender, System::EventArgs^ e) {
				
	}
};
}
