#include"FillRand.h"

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++) //заполняем массив
	{
		arr[i] = rand() % 100;
	}
}