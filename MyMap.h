#pragma once
ref class MyMap
{
public:
	System::String^ txtBoxName;
	System::String^ txtBoxText;
	MyMap(System::String^ txtBoxName, System::String^ txtBoxText);

	System::String^ getTxtBoxName();
	System::String^ getTxtBoxText();

	System::Void setTextBoxName(System::String^ txtBoxName);
	System::Void setTextBoxText(System::String^ txtBoxText);
};

