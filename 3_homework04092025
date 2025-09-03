#include <iostream>
using namespace std;

class Car
{
	char* model;
	char* country;
	char* colour;
	int year;
	double price;
public:
	Car()
	{
		model = nullptr;
		country = nullptr;
		colour = nullptr;
		year = 0;
		price = 0.0;
	}
	Car(const char* m, const char* cnt, const char* cl, int y, double pr)
	{
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);

		country = new char[strlen(cnt) + 1];
		strcpy_s(country, strlen(cnt) + 1, cnt);

		colour = new char[strlen(cl) + 1];
		strcpy_s(colour, strlen(cl) + 1, cl);

		year = y;
		price = pr;
	}
	void Init(const char* m, const char* cnt, const char* cl, int y, double pr)
	{
		if (model != nullptr)
		{
			delete[] model;
		}
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);

		if (country != nullptr)
		{
			delete[] country;
		}
		country = new char[strlen(cnt) + 1];
		strcpy_s(country, strlen(cnt) + 1, cnt);

		if (colour != nullptr)
		{
			delete[] colour;
		}
		colour = new char[strlen(cl) + 1];
		strcpy_s(colour, strlen(cl) + 1, cl);

		year = y;
		price = pr;
	}
	void Print()
	{
		cout << "Model: " << model << endl;
		cout << "Country: " << country << endl;
		cout << "Colour: " << colour << endl;
		cout << "Year: " << year << endl;
		cout << "Price: " << price << endl << endl;
	}

	char* GetModel()
	{
		return model;
	}
	char* GetCountry()
	{
		return country;
	}
	char* GetColour()
	{
		return colour;
	}
	int GetYear()
	{
		return year;
	}
	double GetPrice()
	{
		return price;
	}

	void SetModel(const char* m)
	{
		delete[] model;
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
	}
	void SetCountry(const char* cnt)
	{
		delete[] country;
		country = new char[strlen(cnt) + 1];
		strcpy_s(country, strlen(cnt) + 1, cnt);
	}
	void SetColour(const char* cl)
	{
		delete[] colour;
		colour = new char[strlen(cl) + 1];
		strcpy_s(colour, strlen(cl) + 1, cl);
	}
	void SetYear(int y)
	{
		year = y;
	}
	void SetYear(double pr)
	{
		price = pr;
	}


	~Car()
	{
		delete[] model;
		delete[] country;
		delete[] colour;
	}
};

int main()
{
	Car n1;
	n1.Init("Kia Sorento", "South Korea", "Dawning Red", 2017, 23000);
	cout << "- INFO ABOUT CAR -" << endl;
	n1.Print();
	n1.SetModel("Dodge");
	cout << "Changed info: " << n1.GetModel() << endl << endl;
	n1.Print();

	Car n2("Nissan Qashqai", "Japan", "Magnetic Blue", 2022, 28000);
	cout << "- INFO ABOUT CAR -" << endl;
	n2.Print();
	n2.SetYear(9999);
	cout << "Changed info: " << n2.GetYear() << endl << endl;
	n2.Print();
}
