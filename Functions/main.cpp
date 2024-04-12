//Functions
#include<iostream>
using namespace std;


int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	//Difference-разность 
	return a - b;

}

int Prod(int a, int b)
{
	//Product-произведение
	return a * b;
}

double Quot(int a, int b)
{
	//Quotient-частное
	return (double)a / b;
}

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions" << endl;
	int a, b;
	cout << "Введите два числа:"; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;
}