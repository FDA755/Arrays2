#include<iostream>
using namespace std;

void elevator(int floor);
void Factorial(double n, double fact = 1);
void Power(double n, double stepen, double res = 1);
int Factorial_class(int n);
double Pow(double a, double b);
void Fibonachi(int n, int a =0, int b =1);
void Fibonachi2(int n, int i = 0, long long int a = 0, long long int b = 1);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Recursion" << endl << endl;
	int n, a ,b;
	double res=1;
	double fact =1;
	double stepen;
	//cout << "Type floor number "; cin >> n;
	//elevator(n);
	cout << "type factorial number: "; cin >> n;
	/*Factorial(n, fact); cout << endl;
	cout << "type number and power: "; cin >> n >> stepen;
	Power(n, stepen, res); cout << endl;*/
	Factorial_class(n); cout << Factorial_class(n) << endl;
	cout << "type number and power: "; cin >> a >> b;
	Pow(a, b); cout << Pow(a, b) << endl;
	cout << "type predel for Fibonachi: "; cin >> n;
	Fibonachi(n); cout << endl;
	cout << "type predel for Fibonachi2: "; cin >> n;
	Fibonachi2(n); cout << endl;
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "You are in a basement" << endl;
		return;
	}
	cout << "You are at the " << floor << " floor" << endl;
	elevator(floor -1 );
	cout << "You are at the " << floor << " floor" << endl;
}
void Factorial(double n, double fact)
{
	 if (n < 2)
	{
		cout << "Factorial: "<<fact << endl;
		return;
	}
	fact = fact * n;
	Factorial(n-1,fact);
}
void Power(double n, double stepen, double res)
{
	
	if (stepen == 0)
	{
		cout << "Power:" << " = " << res << endl;
		return;
	}
	res = res * n;
	Power(n, stepen-1, res);
}
int Factorial_class(int n)
{
	/*if (n == 0) return 1;
	else return n * Factorial_class(n - 1);*/
	return (n == 0) ? 1 : n * Factorial_class(n - 1);
}
double Pow(double a, double b)
{
	return (b == 0) ? 1 : (b > 0) ? a * Pow(a, b - 1) : a / Pow(a, -b);
}
void Fibonachi(int n, int a, int b)
{
	if (a >= n)return;
	cout << a   << "\t";
	Fibonachi(n,b, a + b);
}
void Fibonachi2(int n, int i, long long int a, long long int b)
{
	if (i > n)return;
	cout << i << "\t" << a<<"\n";
	Fibonachi2(n,i+1, b, a + b);
}