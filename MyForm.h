#pragma once
#include <string>
#include "UML_FORM.h"
#include "MyUserControl.h"
#include <math.h>
#include "DataClass.h"
#include "MyMap.h"
namespace UMLTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
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
		int left, top;

	public:




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;







	public:

	public:

	public:

	public:

	public:


	public:
	private: System::Windows::Forms::Button^ button1;
	public:

	public:

	public:



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

	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ testButton;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Point MouseDownLocation, beginPosition;
		int number_of_forms = 0;
	public:ArrayList^ classesList = gcnew ArrayList;
			String^ loadFile=nullptr;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(12, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 52);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button3_MouseDown);
			this->button3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button3_MouseMove);
			this->button3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button3_MouseUp);
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(12, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 57);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(12, 133);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 53);
			this->button2->TabIndex = 3;
			this->button2->TabStop = false;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 192);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(59, 56);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Save";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 254);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 51);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Load";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1210, 672);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Name = L"MyForm";
			this->Text = L"UML";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::MyForm_Scroll);
			this->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Click);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion




		int state;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (state == 0) {
			this->BackColor = Color::Yellow;
			state = 1;
		}
		else
		{
			this->BackColor = Color::Green;
			state = 0;
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
		beginPosition = Point(12, 112);
		left = this->button3->Left;
		top = this->button3->Top;

		classesList = gcnew ArrayList();
		
		this->AutoScroll = true;
		
		this->AutoScrollMargin = System::Drawing::Size(5, 5);
		

		
	}
	private: System::Void MyForm_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Invalidate();
		testButton = gcnew Button();
		testButton->Location = Point(278, 189);
		testButton->Size = System::Drawing::Size(115, 44);
		testButton->Text = L"Test";
		testButton->BackColor = Color::White;
		testButton->Click += gcnew System::EventHandler(this, &UMLTest::MyForm::btnClick);

	}
	private: void  btnClick(Object^ sender, EventArgs^ e) {
		MessageBox::Show("You clicked the test button");
	}


	private: System::Void button3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			MouseDownLocation = e->Location;
		}
	}

	private: System::Void button3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			button3->Left = e->X + button3->Left - MouseDownLocation.X;
			button3->Top = e->Y + button3->Top - MouseDownLocation.Y;
		}
	}
	private: System::Void button3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		button3->Location = System::Drawing::Point(beginPosition);
		button3->Left = left;
		button3->Top = top;

		MyUserControl^ uml_class = gcnew MyUserControl();
		Point mousePosition = Point(PointToClient(System::Windows::Forms::Control::MousePosition));
		uml_class->Location = Point(mousePosition);
		uml_class->getMoveButton()->Name = "btn" + classesList->Count;
		uml_class->getClassNameTextBox()->Text = "Class" + classesList->Count;
		uml_class->getClassNameTextBox()->Name = "TextBox" + classesList->Count;


		for each (Object ^ currentObj in classesList) {
			MyUserControl^ currentClass = safe_cast<MyUserControl^>(currentObj);
			for (int i = currentClass->getContextMenuStrip()->Items->Count - 1; i >= 0; i--) {
				currentClass->getContextMenuStrip()->Items->RemoveAt(i);
			}
		}

		classesList->Add(uml_class);

		if (classesList->Count >= 1) {
			for each (Object ^ currentObj in classesList) {
				MyUserControl^ currentClass = safe_cast<MyUserControl^>(currentObj);
				for each (Object ^ secondObj in classesList) {
					MyUserControl^ secondClass = safe_cast<MyUserControl^>(secondObj);
					if (currentClass->getClassNameTextBox()->Text != secondClass->getClassNameTextBox()->Text) {
						currentClass->getContextMenuStrip()->Items->Add(secondClass->getClassNameTextBox()->Text);
					}
				}
			}
		}

		this->Controls->Add(uml_class);
		number_of_forms++;

		Button^ moveButton = uml_class->getMoveButton();
		moveButton->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &UMLTest::MyForm::UmlClass_MoveButton);

		button2_Click(sender,e);
	}
	public:ArrayList^ getUMLClasses() {
		return this->classesList;
	}
	private: System::Void UmlClass_MoveButton(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Button^ this_btn = safe_cast<Button^>(sender);
		//	MessageBox::Show(this_btn->Name);
		int currentX, currentY;

		MyUserControl^ currentSelectedClass = nullptr;

		for each (Object ^ currentClass in classesList) {
			MyUserControl^ umlClass = safe_cast<MyUserControl^>(currentClass);
			if (umlClass->getMoveButton()->Name == this_btn->Name) {
				currentX = umlClass->Location.X;
				currentY = umlClass->Location.Y;
				currentSelectedClass = umlClass;
			}
		}


		for each (Object ^ currentClass in classesList) {
			MyUserControl^ umlClass = safe_cast<MyUserControl^>(currentClass);

			if (umlClass->getMoveButton()->Name != this_btn->Name) {
				//	MessageBox::Show(umlClass->getMoveButton()->Name);
				if ((currentSelectedClass->Location.X > umlClass->Location.X)
					&&
					((abs(currentSelectedClass->Location.Y - umlClass->Location.Y)) < currentSelectedClass->Height)
					&&
					(currentSelectedClass->Location.X - umlClass->Location.X) < currentSelectedClass->Width) {
					currentSelectedClass->Location = System::Drawing::Point(umlClass->Location.X + umlClass->Width, currentSelectedClass->Location.Y);

				}

				if ((currentSelectedClass->Location.X < umlClass->Location.X)
					&&
					((abs(currentSelectedClass->Location.Y - umlClass->Location.Y)) < currentSelectedClass->Height)
					&&
					(umlClass->Location.X - currentSelectedClass->Location.X) < currentSelectedClass->Width) {
					currentSelectedClass->Location = System::Drawing::Point(umlClass->Location.X - umlClass->Width, currentSelectedClass->Location.Y);
				}

				if ((currentY - umlClass->Location.Y) < umlClass->Height && (currentY > umlClass->Location.Y)
					&& (abs(currentX - umlClass->Location.X) < currentSelectedClass->Width)) {
					currentSelectedClass->Location = System::Drawing::Point(currentX, umlClass->Location.Y + umlClass->Height);
				}
				if ((umlClass->Location.Y - currentY) < umlClass->Height && (umlClass->Location.Y > currentY)
					&& (abs(currentX - umlClass->Location.X) < currentSelectedClass->Width)) {
					currentSelectedClass->Location = System::Drawing::Point(currentX, umlClass->Location.Y - umlClass->Height);
				}
			}

		}
		button2_Click(sender, e);
	}
	
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ currentString = nullptr;
		for each (Object ^ obj in classesList)
		{
			MyUserControl^ currentClass = safe_cast<MyUserControl^>(obj);

			ArrayList^ currentClassItemFunction = currentClass->getItemList();
			ArrayList^ currentClassListFunction = currentClass->getFunctionList();
			//MessageBox::Show("Items" + currentClassItemFunction->Count + " Function: " + currentClassListFunction->Count);
			int count = currentClass->getInheritanceList()->Count;
			if (count > 0) {
				currentString += "class " + currentClass->getClassNameTextBox()->Text + " : ";
			}
			else
			{
				currentString += "class " + currentClass->getClassNameTextBox()->Text+" ";
			}
			for each (String ^ currentInheritance in currentClass->getInheritanceList()) {
				String^ finalDestinationName = currentInheritance->Substring(currentInheritance->IndexOf('-') + 1);
				String^ startDestinationName = currentInheritance->Substring(0,
					currentInheritance->Length - finalDestinationName->Length + 1);
				currentString += " private " + finalDestinationName;
				if (count != 1) {
					currentString += " , ";
				}
				count--;
			}
			currentString += " { " + "\n";

			currentString += "private:\n";

			for each (Object ^ obj1 in currentClassItemFunction) {
				linie_input^ line = safe_cast<linie_input^>(obj1);
				TextBox^ lineTextBox = line->getTextBox();
				if (lineTextBox->Text != "") {
					currentString += "\t " + line->getComboBox()->Text + " " + lineTextBox->Text + ";";
					currentString += "\n";
				}
				else {
					//MessageBox::Show("Empty imput fields:\n");
				}
			}
			currentString += "public: " + "\n";
			
			for each (Object ^ obj1 in currentClassListFunction) {
				linie_input^ line = safe_cast<linie_input^>(obj1);
				TextBox^ lineTextBox = line->getTextBox();

				if (lineTextBox->Text != "") {
					currentString += "\t"+ line->getComboBox()->Text + " " + lineTextBox->Text + "();" + "\n";
				}
			}

			currentString += "};" + "\n";
			for each (Object ^ obj2 in currentClassListFunction) {
				linie_input^ line = safe_cast<linie_input^>(obj2);
				TextBox^ lineTextBox = line->getTextBox();
				if (lineTextBox->Text != "") {
					//	currentString += lineTextBox->Text +"() : "+ line->getComboBox()->Text+ "\n";
					currentString += line->getComboBox()->Text + " " + currentClass->getClassNameTextBox()->Text
						+ "::" + lineTextBox->Text + "() {" + "\n";
					currentString += " } " + "\n";
				}
				else {
					//MessageBox::Show("Empty imput fields:\n");
				}
			}

		}
		currentString += "int main() {"+"\n";
		currentString += "}";
		//MessageBox::Show(currentString);
	
		saveFileDialog1->Title = "Select where to SAVE CPP file";
		saveFileDialog1->Filter = "(*.cpp)|*.cpp";
		saveFileDialog1->ShowDialog();

		if (saveFileDialog1->FileName != "") {
			String^ fileName = saveFileDialog1->FileName;
			StreamWriter^ sw = gcnew StreamWriter(fileName);
			sw->Write(currentString);
			sw->Close();
			MessageBox::Show("File was successfully generate");
		}
		else {
			MessageBox::Show("File was not generate ");
		}
		}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Pen^ pen = gcnew Pen(Color::Black);
		Graphics^ g = this->CreateGraphics();
		g->Clear(Color::White);

		Pen^ pen2 = gcnew Pen(Color::Black);

		System::Drawing::Drawing2D::AdjustableArrowCap^ head = gcnew System::Drawing::Drawing2D::AdjustableArrowCap(5, 5);
		pen->CustomEndCap = head;

		for each (Object ^ objClass in classesList) {
			MyUserControl^ currentClass = safe_cast<MyUserControl^>(objClass);
	
			for each (String ^ itemInheritance in currentClass->getInheritanceList()) {
				String^ finalDestinationName = itemInheritance->Substring(itemInheritance->IndexOf('-') + 1);
				String^ startDestinationName = itemInheritance->Substring(0,
					itemInheritance->Length - finalDestinationName->Length + 1);
			
				for each (Object ^ objClass2 in classesList) {
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

						g->DrawLine(pen, Point(x1, y1), Point(x_middle, y_middle));
						g->DrawLine(pen2, Point(x_middle, y_middle), Point(x2, y2));
						
					}
				}
			}
		};
		
	}
	public: ArrayList^ getClassesList() {
			return this->classesList;
	}
	private: System::Void MyForm_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		
		Pen^ pen = gcnew Pen(Color::Black);
		Graphics^ g = this->CreateGraphics();
		g->Clear(Color::White);

		Pen^ pen2 = gcnew Pen(Color::Black);

		System::Drawing::Drawing2D::AdjustableArrowCap^ head = gcnew System::Drawing::Drawing2D::AdjustableArrowCap(5, 5);
		pen->CustomEndCap = head;

		for each (Object ^ objClass in classesList) {
			MyUserControl^ currentClass = safe_cast<MyUserControl^>(objClass);

			for each (String ^ itemInheritance in currentClass->getInheritanceList()) {
				String^ finalDestinationName = itemInheritance->Substring(itemInheritance->IndexOf('-') + 1);
				String^ startDestinationName = itemInheritance->Substring(0,
					itemInheritance->Length - finalDestinationName->Length + 1);

				for each (Object ^ objClass2 in classesList) {
					MyUserControl^ currentClass2 = safe_cast<MyUserControl^>(objClass2);
					if (currentClass2->getClassNameTextBox()->Text == finalDestinationName) {

						Point p1 = currentClass->PointToScreen(currentClass->getClassNameTextBox()->Location);
						Point p2 = currentClass2->PointToScreen(currentClass2->getClassNameTextBox()->Location);

						int x1 = p1.X;
						int y1 = p1.Y;

						int x2 = p2.X;
						int y2 = p2.Y;

						int x_middle = (x1 + 0.5 * (x2 - x1));
						int y_middle = (y1 + 0.5 * (y2 - y1));

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
	
	}
	
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ outputFile="";
	for each (Control ^ currentControl in this->Controls) {
		if (currentControl->Name == "MyUserControl") {
			UMLTest::MyUserControl^ cR = safe_cast<UMLTest::MyUserControl^>(currentControl);
			outputFile += cR->Location.X + " " + cR->Location.Y + " " + cR->getClassNameTextBox()->Text+" ";
			
			outputFile += cR->getItemList()->Count + " ";
			for each (Control ^ linesControl in cR->getItemGroupBox()->Controls) {
				if (linesControl->Name != "label2" && linesControl->Name != "button1") {
					outputFile += linesControl->Location.X + " " + linesControl->Location.Y + " ";
					UMLTest::linie_input^ currentLine = safe_cast<linie_input^>(linesControl);
					outputFile += currentLine->getTextBox()->Text+" "+currentLine->getComboBox()->Text+" ";
				}
			}
			outputFile += cR->getFunctionList()->Count + " ";

			for each (Control ^ linesControls in cR->getFunctionGroupBox()->Controls) {
				if (linesControls->Name != "label3" && linesControls->Name != "button2") {
					UMLTest::linie_input^ currentLine = safe_cast<linie_input^>(linesControls);
					outputFile += linesControls->Location.X + " " + linesControls->Location.Y + " ";
					outputFile += currentLine->getTextBox()->Text + " " + currentLine->getComboBox()->Text + " ";
				}
			}
		
			for each (String ^ currentInheritance in cR->getInheritanceList()) {
				outputFile += currentInheritance->Substring(currentInheritance->IndexOf('-')+1)+" ";
			}
			outputFile += "\n";
		
		}
	}

	saveFileDialog1->Filter = "(*.txt)|*.txt";
	saveFileDialog1->Title = "Save current diagram";
	saveFileDialog1->ShowDialog();
	
	if (saveFileDialog1->FileName != "") {
		String^ fileName = saveFileDialog1->FileName;
		StreamWriter^ streamWriter = gcnew StreamWriter(fileName);
		streamWriter->Write(outputFile);
		streamWriter->Close();
		MessageBox::Show("Saved");
	}
	else {
		MessageBox::Show("Cancel saved");
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	ArrayList^ inheritanceList = gcnew ArrayList();
	ArrayList^ itemFunctionList;
	ArrayList^ functionList;
	Point itemPosition;
	Point functionPosition;
	ArrayList^ secondInheritanceList;

	openFileDialog1->ShowDialog();
	try
	{
		StreamReader^ streamReader = gcnew StreamReader(openFileDialog1->FileName);
		//MessageBox::Show(streamReader->ReadToEnd());
		loadFile = streamReader->ReadToEnd();
		streamReader->Close();
	}
	catch (Exception ^e)
	{
		e->StackTrace;
	}
	Array^ split = loadFile->Split('\n');
	IEnumerator^ myEnum = split->GetEnumerator();
	
	ArrayList^ loadLinesString = gcnew ArrayList();
	while (myEnum->MoveNext())
	{
		String^ currentString = safe_cast<String^>(myEnum->Current);
		loadLinesString->Add(currentString);
	}
	for each (String ^ currentLine in loadLinesString) {
		itemFunctionList = gcnew ArrayList();
		functionList = gcnew ArrayList();
		itemPosition = Point(30, 40);
		functionPosition = Point(30, 40);
		secondInheritanceList = gcnew ArrayList();

		if (currentLine != "") {
			Array^ split2 = currentLine->Split(' ');
			String^ sXNumber = safe_cast<String^>(split2->GetValue(0));
			String^ sYNumber = safe_cast<String^>(split2->GetValue(1));

			int x = System::Convert::ToInt32(sXNumber);
			int y = System::Convert::ToInt32(sYNumber);

			String^ sItemCount = safe_cast<String^>(split2->GetValue(3));
			int itemCount = System::Convert::ToInt32(sItemCount);
			MyUserControl^ loadClass = gcnew MyUserControl();


			loadClass->Location = Point(x, y);
			loadClass->getClassNameTextBox()->Text = safe_cast<String^>(split2->GetValue(2));

			for (int i = 4; i <= 3 + itemCount * 4; i += 4) {
				String^ yNumber = safe_cast<String^>(split2->GetValue(i + 1));
				int x = 30;
				int y = System::Convert::ToInt32(yNumber);
				String^ variableName = safe_cast<String^>(split2->GetValue(i + 2));
				String^ variableType = safe_cast<String^>(split2->GetValue(i + 3));
				//MessageBox::Show(variableName+" "+variableType);



				linie_input^ lineInput = gcnew linie_input();
				lineInput->getTextBox()->Text = variableName;
				lineInput->getComboBox()->Text = variableType;
				lineInput->Location = Point(x, y);
				loadClass->getItemGroupBox()->Controls->Add(lineInput);
				loadClass->getItemGroupBox()->Height += 20;
				loadClass->getFunctionGroupBox()->Top += 20;
				loadClass->getPanel1()->Height += 20;
				loadClass->Height += 20;
				loadClass->getMoveButton()->Top += 20;
				itemPosition.Y += 20;

				itemFunctionList->Add(lineInput);

			}
			
			String^ sFunctionCount = safe_cast<String^>(split2->GetValue((itemCount + 1) * 4));
			int functionCount = System::Convert::ToInt32(sFunctionCount);

			for (int i = (itemCount + 1) * 4 + 1; i <= 4 * (itemCount + functionCount + 1); i += 4) {
				String^ yNumber = safe_cast<String^>(split2->GetValue(i + 1));
				int x = 30;
				int y = System::Convert::ToInt32(yNumber);

				String^ variableName = safe_cast<String^>(split2->GetValue(i + 2));
				String^ variableType = safe_cast<String^>(split2->GetValue(i + 3));

				linie_input^ lineInput = gcnew linie_input();
				lineInput->Location = Point(x, y);
				lineInput->getTextBox()->Text = variableName;
				lineInput->getComboBox()->Text = variableType;

				loadClass->getFunctionGroupBox()->Height += 20;
				loadClass->getPanel1()->Height += 20;
				loadClass->Height += 20;
				loadClass->getMoveButton()->Top += 20;

				loadClass->getFunctionGroupBox()->Controls->Add(lineInput);
				functionPosition.Y += 20;
				functionList->Add(lineInput);
			
			}


				for (int i = 4 * (itemCount + functionCount + 1) + 1; i < split2->Length; i++) {
					String^ superClassName = safe_cast<String^>(split2->GetValue(i));
					if (superClassName != "") {
						inheritanceList->Add(superClassName + " " + split2->GetValue(2));
						secondInheritanceList->Add(loadClass->getClassNameTextBox()->Name+"-"+superClassName);
					}
				}
			classesList->Add(loadClass);
			loadClass->setItemList(itemFunctionList);
			loadClass->setFunctionList(functionList);
			loadClass->setPoint1(itemPosition);
			loadClass->setPoint2(functionPosition);
			loadClass->setInheritanceList(secondInheritanceList);
			this->Controls->Add(loadClass);
		}
	}
	


		for each (Control^ currentControl in this->Controls) {
			if(currentControl->Name=="MyUserControl"){
			UMLTest::MyUserControl^ currentClass = safe_cast<MyUserControl^>(currentControl);
			for each (Control ^ secondControl in this->Controls) {
				if (secondControl->Name == "MyUserControl") {
					UMLTest::MyUserControl^ secondClass = safe_cast<MyUserControl^>(secondControl);
					if (currentClass->getClassNameTextBox()->Text != secondClass->getClassNameTextBox()->Text) {
						currentClass->getContextMenuStrip()->Items->Add(secondClass->getClassNameTextBox()->Text);
					}
				}
			}
		}
		}

	int count = 0;
	Pen^ pen = gcnew Pen(Color::Black);
	Graphics^ g = this->CreateGraphics();
	System::Drawing::Drawing2D::AdjustableArrowCap^ head = gcnew System::Drawing::Drawing2D::AdjustableArrowCap(5, 5);
	
	pen->CustomEndCap = head;
	Pen^ pen2 = gcnew Pen(Color::Black);

	for each (String ^ currentString in inheritanceList) {
		String^ className = currentString->Substring(currentString->IndexOf(" ") + 1);
		String^ superClassName = currentString->Substring(0, currentString->Length - className->Length - 1);
			for each (Control ^ currentControl in this->Controls) {
		if (currentControl->Name == "MyUserControl") {
			UMLTest::MyUserControl^ currentClass = safe_cast<MyUserControl^>(currentControl);
				if (currentClass->getClassNameTextBox()->Text == superClassName) {
					//MessageBox::Show(superClassName + "->" + className);
				for each (Control ^ secondControl in this->Controls) {
					if (secondControl->Name == "MyUserControl") {
						UMLTest::MyUserControl^ secondClass = safe_cast<UMLTest::MyUserControl^>(secondControl);
						if (secondClass->getClassNameTextBox()->Text == className) {
							Point p1 = currentClass->PointToScreen(currentClass->getClassNameTextBox()->Location);
							Point p2 = secondClass->PointToScreen(secondClass->getClassNameTextBox()->Location);
							int x1 = p1.X;
							int y1 = p1.Y;

							int x2 = p2.X;
							int y2 = p2.Y;

							int x_middle = (x1 + 0.5 * (x2 - x1));
							int y_middle = (y1 + 0.5 * (y2 - y1));

							g->DrawLine(pen, Point(x1, y1), Point(x_middle, y_middle));
							g->DrawLine(pen2, Point(x_middle, y_middle), Point(x2, y2));

						}
					}
				}

				}

				
				
			}
		}
	}
	

}

private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
	button2_Click(sender, e);
}
};
};
