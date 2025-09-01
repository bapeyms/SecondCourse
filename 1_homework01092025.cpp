#include <iostream>
#include <windows.h>
using namespace std;

class Fraction
{
private:
	double numerator;
	double denominator;
public:
	void Init()
	{
		numerator = rand() % 30;
		denominator = rand() % 45;
	}
	void Print()
	{
		cout << numerator << "/" << denominator << endl;
	}
	void Sum(Fraction& sum)
	{
		cout << numerator + sum.numerator << " | " << denominator + sum.denominator << endl;
	}
	void Diff(Fraction& diff)
	{
		cout << numerator - diff.numerator << " | " << denominator - diff.denominator << endl;
	}
	void Add(Fraction& add)
	{
		cout << numerator * add.numerator << " | " << denominator * add.denominator << endl;
	}
	void Div(Fraction& div)
	{
		cout << numerator / div.numerator << " | " << denominator / div.denominator << endl;
	}
};

int main()
{
	srand(time(0));
	Fraction n1;
	n1.Init();
	cout << "X = ";
	n1.Print();

	Fraction n2;
	n2.Init();
	cout << "Y = ";
	n2.Print();

	cout << "SUM: ";
	n1.Sum(n2);
	cout << "DIFF: ";
	n1.Diff(n2);
	cout << "ADD: ";
	n1.Add(n2);
	cout << "DIV: ";
	n1.Div(n2);
}
