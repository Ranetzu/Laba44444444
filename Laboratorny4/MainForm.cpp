#include "MainForm.h"
#include "AddUserForm.h"
#include "DataForm.h"






System::Void Laboratorny4::MainForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ fileName;
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		fileName = openFileDialog1->FileName;
	}
	
	

	String^ informationFromFile;
	try {
		StreamReader^ file = File::OpenText(fileName);


		while ((informationFromFile = file->ReadLine()) != nullptr) {
			array<System::String^>^ StringArray = informationFromFile->Split('\t');

			listHousehold->Add(gcnew Household(StringArray[0], Convert::ToInt32(Convert::ToString(StringArray[1])), Convert::ToInt32(Convert::ToString(StringArray[2]))));
		}
		file->Close();
		
		int comprasions = 0;
		int permutations = 0;
		int now_permutations = 0;
		int size = listHousehold->Count;
		do {
			now_permutations = 0;
			for (int i = 0; i < size - 1; i++) {

				if (listHousehold[i]->Name[0] > listHousehold[i + 1]->Name[0]) {
					Household^ first_before = listHousehold[i];
					listHousehold[i] = listHousehold[i + 1];
					listHousehold[i + 1] = first_before;
					now_permutations++;
				}
				comprasions++;
			}
			permutations += now_permutations;

			size--;
		} while (now_permutations != 0);
	
		
		dataGridView1->DataSource = nullptr;
		dataGridView1->DataSource = listHousehold;
		
	}
	catch (Exception^ e) {
		MessageBox::Show("Ошибка", "Не удалось прочитать файл");
		
	}
	
	
}

System::Void Laboratorny4::MainForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
		for (int i = 0; i < listHousehold->Count; i++) {
			sw->WriteLine(listHousehold[i]->Name + "\t" + Convert::ToInt32(listHousehold[i]->sellofElectric) + "\t" + Convert::ToInt32(listHousehold[i]->sellOfWater));
		}
		
		sw->Close();
	}

}

System::Void Laboratorny4::MainForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddUserForm^ form = gcnew AddUserForm(this, listHousehold, 0);
	
	form->ShowDialog();
	int comprasions = 0;
	int permutations = 0;
	int now_permutations = 0;
	int size = listHousehold->Count;
	do {
		now_permutations = 0;
		for (int i = 0; i < size - 1; i++) {

			if (listHousehold[i]->Name[0] > listHousehold[i + 1]->Name[0]) {
				Household^ first_before = listHousehold[i];
				listHousehold[i] = listHousehold[i + 1];
				listHousehold[i + 1] = first_before;
				now_permutations++;
			}
			comprasions++;
		}
		permutations += now_permutations;

		size--;
	} while (now_permutations != 0);
	dataGridView1->DataSource = nullptr;
	dataGridView1->DataSource = listHousehold;

}

System::Void Laboratorny4::MainForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddUserForm^ form = gcnew AddUserForm(this, listHousehold);
	
	form->ShowDialog();
	int comprasions = 0;
	int permutations = 0;
	int now_permutations = 0;
	int size = listHousehold->Count;
	do {
		now_permutations = 0;
		for (int i = 0; i < size - 1; i++) {

			if (listHousehold[i]->Name[0] > listHousehold[i + 1]->Name[0]) {
				Household^ first_before = listHousehold[i];
				listHousehold[i] = listHousehold[i + 1];
				listHousehold[i + 1] = first_before;
				now_permutations++;
			}
			comprasions++;
		}
		permutations += now_permutations;

		size--;
	} while (now_permutations != 0);
	dataGridView1->DataSource = nullptr;
	dataGridView1->DataSource = listHousehold;
}

System::Void Laboratorny4::MainForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Крутая прога", "Программа была переделана для того чтобы я её сдал.");
}
