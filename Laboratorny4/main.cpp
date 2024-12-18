#include "Operator.h"
#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;



[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Laboratorny4::MainForm form;
	Application::Run(% form);
}