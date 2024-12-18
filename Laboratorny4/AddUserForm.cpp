#include "AddUserForm.h"
#include "MainForm.h"



System::Void Laboratorny4::AddUserForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {
        String^ name = textBox1->Text;
        int cost = Convert::ToInt32(textBox2->Text);
        int trafic = Convert::ToInt32(textBox3->Text);
        listCus->Add(gcnew Household(name, cost, trafic));
        this->Close();
    }
    catch (Exception^ e) {
        MessageBox::Show("Данные введены неверно. Проверьте поля на наличие ошибок.", "Ошибка");
    }
    
}

System::Void Laboratorny4::AddUserForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {
        Household^ chosenUser = (Household^)comboBox1->SelectedItem;
        String^ name = textBox1->Text;
        int cost = Convert::ToInt32(textBox2->Text);
        int trafic = Convert::ToInt32(textBox3->Text);
        chosenUser->changeInformation(name, cost, trafic);
        this->Close();
    }
    catch (Exception^ e) {
        MessageBox::Show("Данные введены неверно. Проверьте поля на наличие ошибок.", "Ошибка");
    }
    
}

System::Void Laboratorny4::AddUserForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    Household^ chosenUser = (Household^)comboBox1->SelectedItem;
    textBox1->Text = chosenUser->Name;
    textBox2->Text = Convert::ToString(chosenUser->sellofElectric);
    textBox3->Text = Convert::ToString(chosenUser->sellOfWater);
}
