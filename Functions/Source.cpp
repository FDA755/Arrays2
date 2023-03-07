#include<iostream>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);
int Power(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Type two numbers: "; cin >> a >> b;
	int c = Add(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << " ^ " << b << " = " << Power(a, b) << endl;
}

int Add(int a, int b)
{
	int sum = a + b;  
	return sum;
}
int Sub(int a, int b) 
{
	return a - b;
}
int Mul(int a, int b) //Multiply
{
	return a * b;
}
int Div(int a, int b) //Division
{
	return a / b;
}
int Power(int a, int b)
{
	int result = 1;
	for (int  i = 0; i < b; i++)
	{   
		result *= a;
	}
	return result;
}
