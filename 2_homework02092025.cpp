#include <iostream>
#include <windows.h>
using namespace std;

class Student
{
private:
	char* name;
	char* date;
	char* number;
	char* city;
	char* country;
	char* institution;
	char* institutionCity;
	char* institutionCountry;
	char* groupNumber;

public:
	void Init(const char* n, const char* d, const char* ph, const char* ct, const char* cnt,
		const char* inst, const char* cnt_inst, const char* ct_inst, const char* g)
	{
		// name
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);

		// date
		date = new char[strlen(d) + 1];
		strcpy_s(date, strlen(d) + 1, d);

		// phone number
		number = new char[strlen(ph) + 1];
		strcpy_s(number, strlen(ph) + 1, ph);

		// city
		city = new char[strlen(ct) + 1]; 
		strcpy_s(city, strlen(ct) + 1, ct);

		// country
		country = new char[strlen(cnt) + 1]; 
		strcpy_s(country, strlen(cnt) + 1, cnt);

		// institution
		institution = new char[strlen(inst) + 1]; 
		strcpy_s(institution, strlen(inst) + 1, inst);

		// city inst
		institutionCity = new char[strlen(ct_inst) + 1]; 
		strcpy_s(institutionCity, strlen(ct_inst) + 1, ct_inst);

		// cnt inst
		institutionCountry = new char[strlen(cnt_inst) + 1]; 
		strcpy_s(institutionCountry, strlen(cnt_inst) + 1, cnt_inst);

		// group
		groupNumber = new char[strlen(g) + 1]; 
		strcpy_s(groupNumber, strlen(g) + 1, g);
	}

	void Print()
	{
		cout << "STUDENT DATA" << endl;
		cout << "Full name: " << name << endl;
		cout << "Birth date (DD.MM.YYYY):: " << date << endl;
		cout << "Phone number (+380 XX XXX XX XX): " << number << endl;
		cout << "Place of residence: " << country << ", " << city << endl;
		cout << "Institution: " << institution << " (" << institutionCountry << ", " << institutionCity << ") " << endl;
		cout << "Group number: " << groupNumber << endl << endl;
	}

	// getters
	int GetName()
	{
		return *name;
	}
	int GetDate()
	{
		return *date;
	}
	int GetNumber()
	{
		return *number;
	}
	int GetCity()
	{
		return *city;
	}
	int GetCountry()
	{
		return *country;
	}
	int GetInstitution()
	{
		return *institution;
	}
	int GetCityInstitution()
	{
		return *institutionCity;
	}
	int GetCountryInstitution()
	{
		return *institutionCountry;
	}
	int GetGroupNumber()
	{
		return *groupNumber;
	}

	// setters
	void SetName(const char* n)
	{
		delete[] name;
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	void SetDate(const char* d)
	{
		delete[] date;
		date = new char[strlen(d) + 1];
		strcpy_s(date, strlen(d) + 1, d);
	}
	void SetNumber(const char* ph)
	{
		delete[] number;
		number = new char[strlen(ph) + 1];
		strcpy_s(number, strlen(ph) + 1, ph);
	}
	void SetCity(const char* ct)
	{
		delete[] city;
		city = new char[strlen(ct) + 1];
		strcpy_s(city, strlen(ct) + 1, ct);
	}
	void SetCountry(const char* cnt)
	{
		delete[] country;
		country = new char[strlen(cnt) + 1];
		strcpy_s(country, strlen(cnt) + 1, cnt);
	}
	void SetInstitution(const char* inst)
	{
		delete[] institution;
		institution = new char[strlen(inst) + 1];
		strcpy_s(institution, strlen(inst) + 1, inst);
	}
	void SetInstitutionCity(const char* ct_inst)
	{
		delete[] institutionCity;
		institutionCity = new char[strlen(ct_inst) + 1];
		strcpy_s(institutionCity, strlen(ct_inst) + 1, ct_inst);
	}
	void SetInstitutionCountry(const char* cnt_inst)
	{
		delete[] institutionCountry;
		institutionCountry = new char[strlen(cnt_inst) + 1];
		strcpy_s(institutionCountry, strlen(cnt_inst) + 1, cnt_inst);
	}
	void SetGroupNumber(const char* g)
	{
		delete[] groupNumber;
		groupNumber = new char[strlen(g) + 1];
		strcpy_s(groupNumber, strlen(g) + 1, g);
	}
	
	void Delete()
	{
		delete[] name;
		delete[] number;
		delete[] city;
		delete[] country;
		delete[] institution;
		delete[] institutionCity;
		delete[] institutionCountry;
		delete[] groupNumber;
	}
};

int main()
{
	Student obj1;
	obj1.Init("Katherine", "17.11.2006", "+380 99 876 54 32", "Odesa", "Ukraine", "IT STEP", "Ukraine", "Odesa", "KN-P-241");
	obj1.Print();
	obj1.SetCity("New York");
	obj1.SetCountry("USA");
	cout << "Changed city: " << obj1.GetCity() << endl;
	cout << "Changed country: " << obj1.GetCountry() << endl;
	cout << endl;
	obj1.Print();
	obj1.Delete();
}
