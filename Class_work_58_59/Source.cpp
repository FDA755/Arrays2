#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"


template<typename T> void Print(T arr[], const int n);
template<typename T> T SummArr(T arr[], const int n);
template<typename T> double Middle(T arr[], const int n, int a, int b);
template<typename T> T MaxVal(T arr[], const int n);
template<typename T> T MinVal(T arr[], const int n);
template<typename T> void ArrLeft(T arr[], const int n);
template<typename T> void ArrRight(T arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	/*int a = 0; int  b = 0;
	int min, max;
	min = max = arr[0];*/
	 
	FillRand(arr, n);
	Print(arr, n);
	//SummArr(arr, n); 
	cout << "Summ: "<<SummArr(arr, n) << endl;
	cout << "Middle: " << Middle(arr, n, a, b) << endl;
	cout << "Max value: " << MaxVal(arr, n) << endl; 
	cout << "Min value: " << MinVal(arr, n) << endl;
	ArrLeft(arr, n);
	ArrRight(arr, n);
}

template<typename T> void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++) //вывод массива на экран
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T> T SummArr(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += + arr[i];
	}
	 return sum;
}
template<typename T> double Middle(T arr[], const int n, int a, int b)
{
	for (int i = 0; i < n; i++)
	{
		a = b;
		b = a + arr[i];
	}
	return (double)b / n;
}
template<typename T> T MaxVal(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
template<typename T> T MinVal(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template<typename T> void ArrLeft(T arr[], const int n)
{
	int shifts;
	cout << "Type number of shifts to left: "; cin >> shifts;
	for (int i = 0; i < shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	for (int i = 0; i < n; i++) { cout << arr[i] << "\t"; }
	cout << endl << endl;
}
template<typename T> void ArrRight(T arr[], const int n)
{
	T shifts;
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