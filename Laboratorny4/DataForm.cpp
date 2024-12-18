#include "DataForm.h"
#include "MainForm.h"

System::Void Laboratorny4::DataForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ form = gcnew MainForm();
    this->Hide();
    form->Show();
}
