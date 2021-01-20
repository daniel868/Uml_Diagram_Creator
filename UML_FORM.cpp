#include "UML_FORM.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void second_main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	UMLTest::UML_FORM form;
	Application::Run(% form);
}

