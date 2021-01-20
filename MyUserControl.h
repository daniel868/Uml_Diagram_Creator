#pragma once
#include <list>
#include "linie_input.h"
#include <list>
#include <list>
#include "DataClass.h"
#include <map>
#include <cliext/map>
#include "MyMap.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

typedef cliext::map<String^, String^>HasMap;

namespace UMLTest {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
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
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ className;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;

	private: int seconds = 0;




	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		/// 
		Point itemPosition = Point(30, 40);
		Point functionPosition = Point(30, 40);
		ArrayList^ myClasses = gcnew ArrayList;

		int defaultPosition = 20;
	public:
		ArrayList^ itemItemList = gcnew ArrayList();
		ArrayList^ functionItemList = gcnew ArrayList();
		ArrayList^ inheritanceList = gcnew ArrayList();
		ArrayList^ dataInheritanceList = gcnew ArrayList();

		linie_input^ lineInput;

		Point mouseLocation;





	private: System::Windows::Forms::Button^ moveButton;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Timer^ timer1;



	public:

	public:
		Point MouseLocation;
		ArrayList^ nameArrayList = gcnew ArrayList();

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->moveButton = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->className = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->moveButton);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(341, 242);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyUserControl::panel1_Paint);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Location = System::Drawing::Point(4, 138);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(310, 69);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Function list";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(181, 21);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 27);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyUserControl::button2_Click);
			// 
			// moveButton
			// 
			this->moveButton->Location = System::Drawing::Point(140, 214);
			this->moveButton->Name = L"moveButton";
			this->moveButton->Size = System::Drawing::Size(61, 25);
			this->moveButton->TabIndex = 1;
			this->moveButton->Text = L"Move";
			this->moveButton->UseVisualStyleBackColor = true;
			this->moveButton->Click += gcnew System::EventHandler(this, &MyUserControl::moveButton_Click);
			this->moveButton->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyUserControl::moveButton_MouseDown);
			this->moveButton->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyUserControl::moveButton_MouseMove);
			this->moveButton->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyUserControl::moveButton_MouseUp);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(4, 63);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(310, 75);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Variable list";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(181, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 27);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyUserControl::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->className);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(310, 54);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(277, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(28, 26);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyUserControl::button3_Click);
			// 
			// className
			// 
			this->className->Location = System::Drawing::Point(93, 18);
			this->className->Name = L"className";
			this->className->Size = System::Drawing::Size(178, 22);
			this->className->TabIndex = 0;
			this->className->TextChanged += gcnew System::EventHandler(this, &MyUserControl::className_TextChanged);
			this->className->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &MyUserControl::className_Validating);
			this->className->Validated += gcnew System::EventHandler(this, &MyUserControl::className_Validated);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Class name";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			this->contextMenuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyUserControl::contextMenuStrip1_ItemClicked);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyUserControl::timer1_Tick);
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(348, 247);
			this->panel1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//TODO: handle first button -add click at the items field
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		lineInput = gcnew linie_input();
		lineInput->Location = Point(itemPosition);
		itemPosition.Y += defaultPosition;
		//TODO: add a new item text-box input field 
		this->groupBox2->Height += defaultPosition;
		this->groupBox3->Top += defaultPosition;
		this->panel1->Height += defaultPosition;
		this->Height += defaultPosition;
		this->moveButton->Top += defaultPosition;

		//TODO: add to the items field 
		this->groupBox2->Controls->Add(lineInput);

		//TODO: rename in order to identity them
		lineInput->getTextBox()->Name = "txt" + itemItemList->Count;
		lineInput->getXButton()->Name = "btn" + itemItemList->Count;
		itemItemList->Add(lineInput); //TODO: add to the itemItemList 

		Button^ deleteButton = lineInput->getXButton();
		deleteButton->Click += gcnew System::EventHandler(this, &MyUserControl::delete_button_Click);
		TextBox^ currentTextBox = lineInput->getTextBox();


	}

		   //TODO: handle the delete button from the item class textBox
	private: System::Void delete_button_Click(System::Object^ sender, System::EventArgs^ e) {
		//TODO: reshape the graphics object items
		itemPosition.Y -= defaultPosition;
		this->groupBox2->Height -= defaultPosition;
		this->groupBox3->Top -= defaultPosition;
		this->panel1->Height -= defaultPosition;
		this->Height -= defaultPosition;
		this->moveButton->Top -= defaultPosition;

		Button^ this_btn = safe_cast<Button^>(sender);
		//TODO: handle delete the first textBox Position for item list properties
		if (this_btn->Name == "btn0" && itemItemList->Count > 1) {
			itemItemList->RemoveAt(0);

			for each (Object ^ obj in itemItemList) {
				linie_input^ currentLine = safe_cast<linie_input^> (obj);

				String^ currentLineName = currentLine->getTextBox()->Name;

				String^ number = currentLineName->Substring(3);
				int nmb = System::Convert::ToInt32(number);
				this->groupBox2->Controls->Remove(currentLine);


				itemPosition.Y -= defaultPosition;
				this->groupBox2->Height -= defaultPosition;
				this->groupBox3->Top -= defaultPosition;
				this->panel1->Height -= defaultPosition;
				this->Height -= defaultPosition;
				this->moveButton->Top -= defaultPosition;
			}
			int count = 0;
			for each (Object ^ obj in itemItemList) {
				linie_input^ currentLine = safe_cast<linie_input^> (obj);

				currentLine->Location = Point(itemPosition);
				currentLine->getXButton()->Name = "btn" + count;
				currentLine->getTextBox()->Name = "txt" + count;
				count++;
				this->groupBox2->Controls->Add(currentLine);


				itemPosition.Y += defaultPosition;
				this->groupBox2->Height += defaultPosition;
				this->groupBox3->Top += defaultPosition;
				this->panel1->Height += defaultPosition;
				this->Height += defaultPosition;
				this->moveButton->Top += defaultPosition;

			}

		}


		//TODO: handle delete the last one textBox postion for item list properties
		int last_item_count = itemItemList->Count - 1;
		if (this_btn->Name == ("btn" + last_item_count)) {
			itemItemList->RemoveAt(last_item_count);
		}


		//TODO: handle delete the middle textBox position for item list properties
		if (this_btn->Name != "btn0" && this_btn->Name != ("btn" + last_item_count)) {
			int currentIndex = System::Convert::ToInt32(this_btn->Name->Substring(3));
			//MessageBox::Show(currentIndex);
			itemItemList->RemoveAt(currentIndex);
			int count = 0;

			for each (Object ^ obj in itemItemList) {
				if (count >= currentIndex) {
					linie_input^ currentLine = safe_cast<linie_input^>(obj);
					this->groupBox2->Controls->Remove(currentLine);
					itemPosition.Y -= defaultPosition;
					this->groupBox2->Height -= defaultPosition;
					this->groupBox3->Top -= defaultPosition;
					this->panel1->Height -= defaultPosition;
					this->Height -= defaultPosition;
					this->moveButton->Top -= defaultPosition;
				}
				count++;
			}
			int count2 = 0;
			for each (Object ^ obj in itemItemList) {
				if (count2 >= currentIndex) {
					linie_input^ currentLine = safe_cast<linie_input^>(obj);
					currentLine->getTextBox()->Name = ("txt" + count2);
					currentLine->getXButton()->Name = ("btn" + count2);
					currentLine->Location = Point(itemPosition);
					this->groupBox2->Controls->Add(currentLine);

					itemPosition.Y += defaultPosition;
					this->groupBox2->Height += defaultPosition;
					this->groupBox3->Top += defaultPosition;
					this->panel1->Height += defaultPosition;
					this->Height += defaultPosition;
					this->moveButton->Top += defaultPosition;

					//	MessageBox::Show(currentLine->getTextBox()->Name);
				}
				count2++;
			}

		}




	}

		   //TODO: handle the delete button from the function class textBox
	private: System::Void delete_button_Click_2(System::Object^ sender, System::EventArgs^ e) {
		functionPosition.Y -= defaultPosition;
		this->groupBox3->Height -= defaultPosition;
		this->panel1->Height -= defaultPosition;
		this->Height -= defaultPosition;
		this->moveButton->Top -= defaultPosition;


		Button^ this_btn = safe_cast<Button^>(sender);
		//TODO: handle to delete the first textbox at the function input field
		if (this_btn->Name == "btn0" && functionItemList->Count > 1) {
			//	MessageBox::Show("You deleted first input function line");
			functionItemList->RemoveAt(0);

			for each (Object ^ obj in functionItemList) {
				linie_input^ currentLine = safe_cast<linie_input^> (obj);
				//	MessageBox::Show(currentLine->Location+" ");
				String^ currentLineName = currentLine->getTextBox()->Name;

				String^ number = currentLineName->Substring(3);
				int nmb = System::Convert::ToInt32(number);
				this->groupBox3->Controls->Remove(currentLine);

				functionPosition.Y -= defaultPosition;

				this->groupBox3->Height -= defaultPosition;
				this->panel1->Height -= defaultPosition;
				this->Height -= defaultPosition;
				this->moveButton->Top -= defaultPosition;

				//currentLine->getTextBox()->Name = ("txt" + (nmb - 1));
			}
			int count = 0;
			for each (Object ^ obj in functionItemList) {
				linie_input^ currentLine = safe_cast<linie_input^> (obj);

				currentLine->Location = Point(functionPosition);
				currentLine->getXButton()->Name = "btn" + count;
				currentLine->getTextBox()->Name = "txt" + count;
				count++;
				this->groupBox3->Controls->Add(currentLine);

				functionPosition.Y += defaultPosition;

				this->groupBox3->Height += defaultPosition;
				this->panel1->Height += defaultPosition;
				this->Height += defaultPosition;
				this->moveButton->Top += defaultPosition;

				//	MessageBox::Show(currentLine->getTextBox()->Name);

			}
		}

		//TODO: handle to delete the last one textbox at the function input field
		int last_item_count = functionItemList->Count;
		if (this_btn->Name == ("btn" + last_item_count) && functionItemList->Count == 1) {
			functionItemList->RemoveAt(last_item_count);
		}

		//TODO: handle to delete the middle textbox at the function input field
		if (this_btn->Name != "btn0" && this_btn->Name != ("btn" + last_item_count)) {
			int currentIndex = System::Convert::ToInt32(this_btn->Name->Substring(3));
			//			MessageBox::Show(currentIndex+"");
			functionItemList->RemoveAt(currentIndex);
			int count = 0;

			for each (Object ^ obj in functionItemList) {
				if (count >= currentIndex) {
					linie_input^ currentLine = safe_cast<linie_input^>(obj);
					this->groupBox3->Controls->Remove(currentLine);

					functionPosition.Y -= defaultPosition;
					this->groupBox3->Height -= defaultPosition;
					this->panel1->Height -= defaultPosition;
					this->Height -= defaultPosition;
					this->moveButton->Top -= defaultPosition;
				}
				count++;
			}
			int count2 = 0;
			for each (Object ^ obj in functionItemList) {
				if (count2 >= currentIndex) {
					linie_input^ currentLine = safe_cast<linie_input^>(obj);
					currentLine->getTextBox()->Name = ("txt" + count2);
					currentLine->getXButton()->Name = ("btn" + count2);
					currentLine->Location = Point(functionPosition);
					this->groupBox3->Controls->Add(currentLine);

					functionPosition.Y += defaultPosition;
					this->groupBox3->Height += defaultPosition;
					this->panel1->Height += defaultPosition;
					this->Height += defaultPosition;
					this->moveButton->Top += defaultPosition;

					//	MessageBox::Show(currentLine->getTextBox()->Name);
				}
				count2++;
			}

		}






	}

		   //TODO: handle second button -add click at the function field
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		linie_input^ function_line = gcnew linie_input();
		function_line->Location = Point(functionPosition);
		functionPosition.Y += defaultPosition;

		this->groupBox3->Height += defaultPosition;
		this->panel1->Height += defaultPosition;
		this->Height += defaultPosition;
		this->moveButton->Top += defaultPosition;

		//TODO: add to the function groupBox in the class
		this->groupBox3->Controls->Add(function_line);

		//TODO: rename the items in order to identify them
		function_line->getTextBox()->Name = "txt" + functionItemList->Count;
		function_line->getXButton()->Name = "btn" + functionItemList->Count;
		//TODO: add to the function_list
		functionItemList->Add(function_line);



		Button^ deleteButton = function_line->getXButton();
		deleteButton->Click += gcnew System::EventHandler(this, &MyUserControl::delete_button_Click_2);

		TextBox^ currentTextBox = function_line->getTextBox();
		currentTextBox->Click += gcnew System::EventHandler(this, &MyUserControl::textBoxClick);


	}


	private:System::Void textBoxClick(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void moveButton_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   //TODO: point the location of the mouse when we click first time on the "Move" button
	private: System::Void moveButton_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			MouseLocation = e->Location;
		}

	}
		   //TODO: move the UML Class Form while we keep left -click and follown the mouse point
	private: System::Void moveButton_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->Left = e->X + this->Left - MouseLocation.X;
			this->Top = e->Y + this->Top - MouseLocation.Y;
		}
	};
	private: System::Void moveButton_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	}

	public:Button^ getMoveButton() {
		return this->moveButton;
	}

	public:ArrayList^ getItemList() {
		return itemItemList;
	}
	public: void setItemList(ArrayList^ itemList) {
		this->itemItemList = itemList;
	}
	public:ArrayList^ getFunctionList() {
		return functionItemList;
	}
	public: void setFunctionList(ArrayList^ functionList) {
		this->functionItemList = functionList;
	}
	public:TextBox^ getClassNameTextBox() {
		return this->className;
	}
	public: System::Windows::Forms::ContextMenuStrip^ getContextMenuStrip() {
		return this->contextMenuStrip1;
	}

	public: ArrayList^ getInheritanceList() {
		return this->inheritanceList;
	}

	public: void setInheritanceList(ArrayList^ inheritanceList) {
		this->inheritanceList = inheritanceList;
	}
	public: ArrayList^ getDataInheritanceList() {
		return this->dataInheritanceList;
	}
	public: GroupBox^ getItemGroupBox() {
		return this->groupBox2;
	}
	public: GroupBox^ getFunctionGroupBox() {
		return this->groupBox3;
	}

	public: Panel^ getPanel1() {
		return this->panel1;
	}

	public: void setPoint1(Point point) {
		this->itemPosition = point;
	}
	public: void setPoint2(Point point) {
		this->functionPosition = point;
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->contextMenuStrip1->Show(System::Windows::Forms::Control::MousePosition.X, System::Windows::Forms::Control::MousePosition.Y);
	}
	private: System::Void contextMenuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
		System::Windows::Forms::ToolStrip^ item = safe_cast<ToolStrip^>(sender);


		bool isFound = false;
		String^ inheritanceFrom = this->className->Text;
		String^ inheritanceTo = e->ClickedItem->Text;

		String^ finalInteritance = inheritanceFrom + "-" + inheritanceTo;
		for each (String ^ currentString in inheritanceList) {
			if (finalInteritance == currentString)
				isFound = true;
		}
		if (isFound == false) {
			inheritanceList->Add(finalInteritance);
			DataClass^ dataClass = gcnew DataClass(finalInteritance, this->className->Location, Point(350, 200));
			dataInheritanceList->Add(dataClass);
		}
		else if (isFound == true) {
			inheritanceList->Remove(finalInteritance);
			MessageBox::Show("Removed " + finalInteritance + "\n");
		}




		for each (Control ^ currentControl in this->Parent->Controls) {
			if (currentControl->Name == "MyUserControl") {
				UMLTest::MyUserControl^ cR = safe_cast<UMLTest::MyUserControl^>(currentControl);
				myClasses->Add(cR);
			}
		}
		
		Pen^ pen = gcnew Pen(Color::Black);
		Graphics^ g = this->Parent->CreateGraphics();
		g->Clear(Color::White);
		
		System::Drawing::Drawing2D::AdjustableArrowCap^ head = gcnew System::Drawing::Drawing2D::AdjustableArrowCap(5, 5);
		pen->CustomEndCap = head;

		Pen^ pen2 = gcnew Pen(Color::Black);


		for each (Object ^ objClass in myClasses) {
			MyUserControl^ currentClass = safe_cast<MyUserControl^>(objClass);

			for each (String ^ itemInheritance in currentClass->getInheritanceList()) {
				String^ finalDestinationName = itemInheritance->Substring(itemInheritance->IndexOf('-') + 1);
				String^ startDestinationName = itemInheritance->Substring(0,
					itemInheritance->Length - finalDestinationName->Length + 1);

				for each (Object ^ objClass2 in myClasses) {
					MyUserControl^ currentClass2 = safe_cast<MyUserControl^>(objClass2);
					if (currentClass2->getClassNameTextBox()->Text == finalDestinationName) {
						Point p1 = currentClass2->PointToScreen(currentClass2->getClassNameTextBox()->Location);
						Point p2 = currentClass->PointToScreen(currentClass->getClassNameTextBox()->Location);

						int x1 = p1.X;
						int y1 = p1.Y;

						int x2 = p2.X;
						int y2 = p2.Y;

						int x_middle = (x1 + 0.5 * (x2 - x1));
						int y_middle = (y1 + 0.5 * (y2 - y1));

						//g->DrawLine(pen, Point(PointToScreen(Point(x1,y1))), Point(PointToScreen(Point(x_middle, y_middle))));
						g->DrawLine(pen, Point(x1, y1), Point(x_middle, y_middle));
						g->DrawLine(pen2, Point(x_middle, y_middle), Point(x2, y2));

						/*

						g->DrawLine(pen,
							currentClass->PointToScreen(currentClass->getClassNameTextBox()->Location),
							currentClass2->PointToScreen(currentClass2->getClassNameTextBox()->Location));*/
					}
				}
			}

		};
		

		String^ currentRow = "";
		for each (Object ^ obj in myClasses) {
			MyUserControl^ myClass = safe_cast<MyUserControl^>(obj);
			for each (String ^ currentString in myClass->getInheritanceList()) {
				currentRow += currentString + "\n";
			}
		}

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void className_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void className_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		TextBox^ thisTextBox = safe_cast<TextBox^>(sender);

		
		ArrayList^ umlClasses = gcnew ArrayList();
		for each (Control ^ currentControl in this->Parent->Controls) {
			if (currentControl->Name == "MyUserControl") {
				UMLTest::MyUserControl^ cR = safe_cast<UMLTest::MyUserControl^>(currentControl);
				umlClasses->Add(cR);
			}
		}

		for each (Object ^ currentObj in umlClasses) {
			MyUserControl^ currentClass = safe_cast<MyUserControl^>(currentObj);
			for (int i = currentClass->getContextMenuStrip()->Items->Count - 1; i >= 0; i--) {
				currentClass->getContextMenuStrip()->Items->RemoveAt(i);
			}
		}


		
		ArrayList^ maps = gcnew ArrayList();
		for each (Object ^ currentObj in umlClasses) {
			MyUserControl^ currentClass = safe_cast<MyUserControl^>(currentObj);
			MyMap^ myMap = gcnew MyMap(currentClass->getClassNameTextBox()->Name, currentClass->getClassNameTextBox()->Text);
			maps->Add(myMap);
		}

	
		//Replace All from begin part
		for each (Object ^ currentObj in umlClasses) {
			MyUserControl^ currentClass = safe_cast<MyUserControl^>(currentObj);
			ArrayList^ newInheritannceList = gcnew ArrayList();
			for each (String ^ currentString in currentClass->getInheritanceList()) {
				for each (MyMap ^ currentMap in maps) {
					if (currentClass->getClassNameTextBox()->Name == currentMap->getTxtBoxName()) {
						String^ finalDestinationName = currentString->Substring(currentString->IndexOf('-') + 1);
						String^ startDestinationName = currentString->Substring(0,
							currentString->Length - finalDestinationName->Length + 1);
						if (startDestinationName != currentMap->getTxtBoxText()) {
							startDestinationName = currentMap->getTxtBoxText();
						}

						String^ newString = startDestinationName + "-" + finalDestinationName;
						newInheritannceList->Add(newString);
					}
				}
			}
			currentClass->setInheritanceList(newInheritannceList);
		}

		//Replace all from end part
		


		if (umlClasses->Count >= 1) {
		for each (Object ^ currentObj in umlClasses) {
			MyUserControl^ currentClass = safe_cast<MyUserControl^>(currentObj);
			for each (Object ^ secondObj in umlClasses) {
				MyUserControl^ secondClass = safe_cast<MyUserControl^>(secondObj);
				if (currentClass->getClassNameTextBox()->Text != secondClass->getClassNameTextBox()->Text) {
					currentClass->getContextMenuStrip()->Items->Add(secondClass->getClassNameTextBox()->Text);
				}
			}
		}
	}


}
private: System::Void className_Validated(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
