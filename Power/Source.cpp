#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void SummArr(int arr[], const int n,  int a , int b );
void Middle(int arr[], const int n, int a, int b);
void MaxVal(int arr[], const int n, int max);
void MinVal(int arr[], const int n, int min);
void ArrLeft(int arr[], const int n);
void ArrRight(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {1,2,3,4,5};
	int a, b;
	a = b = 0;
	int min, max;
	min = max = arr[0];
		FillRand(arr, n);
		Print(arr, n);
		SummArr(arr, n, a, b);
		Middle(arr, n, a, b);
		MaxVal(arr, n, max);
		MinVal(arr, n, min);
		ArrLeft(arr, n);
		ArrRight(arr, n);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++) //заполняем массив
	{
		arr[i] = rand() % 100 ;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) //вывод массива на экран
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void SummArr (int arr[], const int n , int a , int b )
{
	for (int i = 0; i < n; i++)
	{
		a = b;
		b = a + arr[i];
	}
	cout << "Summ: " << b << endl;
}
void Middle(int arr[], const int n, int a, int b)
{
	for (int i = 0; i < n; i++)
	{
		a = b;
		b = a + arr[i];
	}
	cout << "\Middle: "<<(double)b / n << endl;
}
void MaxVal(int arr[], const int n, int max)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	cout << "Max value: " << max << endl;
}
void MinVal(int arr[], const int n, int min)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	cout << "Min value: " << min << endl;
}
void ArrLeft(int arr[], const int n)
{
	int shifts;
	cout << "Type number of shifts to left: "; cin >> shifts;
	for (int i = 0; i < shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	for (int i = 0; i < n; i++) { cout << arr[i] << "\t"; }
	cout << endl << endl;
}
void ArrRight(int arr[], const int n)
{
	int shifts;
	cout << "Type number of shifts to right: "; cin >> shifts;
	shifts = n - shifts;
	for (int i = 0; i < shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	for (int i = 0; i < n; i++) { cout << arr[i] << "\t"; }
	cout << endl << endl;
}

