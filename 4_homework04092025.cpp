#include <iostream>
using namespace std;

class Laptop
{
	char* model;
	char* colour;
	double size;
	double price;
public:
	Laptop();
	Laptop(const char* m, const char* c, double s, double pr);
	Laptop(const char* c, double s, double pr);
	Laptop(double s, double pr);
	Laptop(double pr);
	
	void Init(const char* m, const char* c, double s, double pr);
	void EnterValue();
	void Print();

	const char* GetModel();
	const char* GetColour();
	double GetSize();
	double GetPrice();

	void SetModel(const char* m);
	void SetColour(const char* c);
	void SetSize(double s);
	void SetPrice(double pr);
	
	~Laptop();
};

Laptop::Laptop()
{
	model = nullptr;
	colour = nullptr;
	size = 0.0;
	price = 0.0;
}

Laptop::Laptop(double pr)
{
	price = pr;
}
Laptop::Laptop(double s, double pr) :Laptop(pr)
{
	size = s;
}
Laptop::Laptop(const char* c, double s, double pr) :Laptop(s, pr)
{
	colour = new char[strlen(c) + 1];
	strcpy_s(colour, strlen(c) + 1, c);
}
Laptop::Laptop(const char* m, const char* c, double s, double pr) :Laptop(c, s, pr)
{
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

void Laptop::Init(const char* m, const char* c, double s, double pr)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);

	if (colour != nullptr)
	{
		delete[] colour;
	}
	colour = new char[strlen(c) + 1];
	strcpy_s(colour, strlen(c) + 1, c);

	size = s;
	price = pr;
}
void Laptop::EnterValue()
{
	const int N = 256;
	char data[N];

	cout << "Enter model: ";
	cin.getline(data, N);
	model = new char[strlen(data) + 1];
	strcpy_s(model, strlen(data) + 1, data);

	cout << "Enter colour: ";
	cin.getline(data, N);
	colour = new char[strlen(data) + 1];
	strcpy_s(colour, strlen(data) + 1, data);

	cout << "Enter size: ";
	cin >> size;

	cout << "Enter price: ";
	cin >> price;
	cout << endl;
}
void Laptop::Print()
{
	cout << "Model: " << model << endl;
	cout << "Colour: " << colour << endl;
	cout << "Size: " << size << " inches" << endl;
	cout << "Price: " << price << " euro" << endl;
}

const char* Laptop::GetModel()
{
	return model;
}
const char* Laptop::GetColour()
{
	return colour;
}
double Laptop::GetSize()
{
	return size;
}
double Laptop::GetPrice()
{
	return price;
}

void Laptop::SetModel(const char* m)
{
	delete[] model;
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}
void Laptop::SetColour(const char* c)
{
	delete[] colour;
	colour = new char[strlen(c) + 1];
	strcpy_s(colour, strlen(c) + 1, c);
}
void Laptop::SetSize(double s)
{
	size = s;
}
void Laptop::SetPrice(double pr)
{
	price = pr;
}

Laptop::~Laptop()
{
	delete[] model;
	delete[] colour;
}

int main()
{
	Laptop n1;
	n1.Init("HP Spectre x360 14", "Nightfal Black", 13.5, 1.499);
	cout << "- FIRST LAPTOP -" << endl;
	n1.Print();
	cout << endl;
	n1.SetColour("Natural Silver");
	cout << "Colour has been changed to " << n1.GetColour() << endl << endl;
	n1.Print();
	cout << "------------------" << endl << endl;

	Laptop n2("Apple Macbook Air M2", "Midnight", 13.6, 1.399);
	cout << "- SECOND LAPTOP -" << endl;
	n2.Print();
	cout << endl;
	n2.SetSize(13.3);
	cout << "Size has been changed to " << n1.GetSize() << endl << endl;
	n1.Print();
	cout << "------------------" << endl << endl;

	Laptop n3;
	cout << "- THIRD LAPTOP -" << endl;
	n3.EnterValue();
	n3.Print();
}
