#include<iostream>
#include<windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

#define delimeter "\n--------------------------------------------------------------------------------------------\n"
void FillRand(int arr[], const int n, int minRand, int maxRand);
void FillRand(double arr[], const int n, int minRand, int maxRand);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
int Summ(int arr[], const int n);
double Avg(int arr[], const int n);
int MaxVal(int arr[], const int n);
int MinVal(int arr[], const int n);
void ArrLeft(int arr[], const int n);
void ArrRight(int arr[], const int n);
void SortBig(int arr[], const int n);
void SortMin(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	/*int a, b;
	a = b = 0;
	int min, max;
	min = max = arr[0];*/
	FillRand(arr, n, -100, 200);
	Print(arr, n); cout << endl;
	cout << "Summ of Array: " << Summ(arr, n) << endl << endl;
	cout << "Average of Array: " << Avg(arr, n) << endl << endl;
	cout << "Max Value: " << MaxVal(arr, n) << endl;
	cout << "Min Value: " << MinVal(arr, n) << endl;
	ArrLeft(arr, n); 
	Print(arr, n); cout << endl;
	ArrRight(arr, n);
	Print(arr, n); cout << endl;
	SortBig(arr, n); 
	Print(arr, n); cout << endl;
	SortMin(arr, n);
	Print(arr, n); cout << endl;
	
	cout << delimeter << endl;
	
	const int SIZE = 8;
	double brr[SIZE] = {};
	FillRand(brr, SIZE, 0, 200);
	Print(brr, SIZE); cout << endl;
	//cout << "Summ of Array: " << Summ(brr, SIZE) << endl << endl;
	//cout << "Average of Array: " << Avg(brr, SIZE) << endl << endl;
	//cout << "Max Value: " << MaxVal(brr, SIZE) << endl;
	//cout << "Min Value: " << MinVal(brr, SIZE) << endl;
}

void FillRand(int arr[], const int n,int minRand, int maxRand)
{
	srand(time(NULL));
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	for (int i = 0; i < n; i++) //заполняем массив
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
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
int Summ(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Summ(arr, n) / n;
}
int MaxVal(int arr[], const int n)
{   
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int MinVal(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
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
	//for (int i = 0; i < n; i++) { cout << arr[i] << "\t"; }
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
	//for (int i = 0; i < n; i++) { cout << arr[i] << "\t"; }
}
void SortBig(int arr[], const int n) 
{
	int buffer = arr[0];
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n ; j++)
		{
			if (arr[i] < arr [j])
			{   
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}

}
void SortMin(int arr[], const int n)
{
	int buffer = arr[0];
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;

			}
		}

	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	srand(time(NULL));
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++) //заполняем массив
	{   
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++) //вывод массива на экран
	{
		cout << arr[i] / 100<< "\t";
	}
	cout << endl;
}