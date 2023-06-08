#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int languageChoice(vector <string>);
int specialtyChoice(vector<string>);

int main()
{
	vector<vector<string>> countries 
	{
		{ "Colombia", "El Salvador", "Honduras", "Nicaragua" }, //Spanish
		{ "France", "Belgium", "Haiti", "Niger" }, //French
		{ "Russian Federation", "Belarus", "Kyrgyzstan" }, //Russian
		{ "Egypt", "Iraq", "Lebanon", "Jordan" }, //Arabic
		{ "India", "Bangladesh", "Uganda", } //Hindi
	};

	vector<string>language 
	{ "Spanish", "French", "Russian", "Arabic", "Hindi" };

	int langChoice = languageChoice(language);

	vector<string>specialty 
	{ "Psychology", "Obstetrics & Gynaecology", "Pathology", "Neurology", "Immunology" };

	int specilization = specialtyChoice(specialty);

	cout << "Thank you for your response!" << endl;
	cout << "You choose " << language[langChoice - 1] << " as the language that you are comfortable speaking & "
		<< specialty[specilization - 1] << " as your preferred specialty." << endl;

	srand(time(0));
	int n = rand() % countries[langChoice - 1].size();

	cout << "The country that you will be assigned to is " << countries[langChoice - 1][n] << endl; 

	return 0;
}

int languageChoice(vector<string>language)
{
	int langChoice;
	int langNum = language.size();

	do
	{
		cout << "Please select one of the below languages so that a country can be assigned." << endl;

		for (int i = 0; i < langNum; i++)
		{
			cout << i + 1 << "." << language[i] << endl;
		}

		cin >> langChoice;

		if (langChoice > langNum || langChoice < 1)
		{
			cout << "Invalid Selection. Please select one of the below choices." << endl;
		}
	} while (langChoice > langNum || langChoice < 1);

	return langChoice;
}

int specialtyChoice(vector<string>specialty)
{
	int specialization;
	int specialtyNum = specialty.size();

	do
	{
		cout << "Please select one of the below specialties." << endl;

		for (int i = 0; i < specialtyNum; i++)
		{
			cout << i + 1 << "." << specialty[i] << endl;
		}

		cin >> specialization;

		if (specialization > specialtyNum || specialization < 1)
		{
			cout << "Invalid Selection. Please select one of the below choices." << endl;
		}
	} while (specialization > specialtyNum || specialization < 1);

	return specialization;
}