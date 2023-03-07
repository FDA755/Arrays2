#include"stdafx.h"
#include "constants.h" 

//#define DZ_1
//#define CLASS_1
//#define CLASS_2
//#define DZ_2
//#define DEC_2_BIN
//#define DEC_2_HEX
//#define ARRAY_BIG_Int
#define ARRAY_BIG_Double

void main()
{
	setlocale(LC_ALL, "");

#ifdef DZ_1
	int sum, buff;
	sum = buff = 0;
	const int ARC = 5;
	int arr[ARC];
	cout << "Type 5 array values: ";
	for (int i = 0; i < ARC; i++) cin >> arr[i];
	for (int i = 0; i < ARC; i++)
	{
		cout << "\t" << arr[i];
	}
	cout << endl << endl;
	for (int j = ARC - 1; j >= 0; j--)
	{
		cout << "\t" << arr[j];
	}
	cout << endl << endl;
	for (int i = 0; i <= ARC; i++)
	{
		sum = buff;
		buff = sum + arr[i];
	}
	cout << "Summ: " << sum << endl << endl;
	cout << "Middle value: " << (double)(sum / ARC) << endl;
#endif

#ifdef CLASS_1
	const int SIZE = 5;
	int arr[SIZE];
	cout << "Type array of 5: ";
	for (int i = 0; i < SIZE; i++) { cin >> arr[i]; }
	for (int i = 0; i < SIZE; i++) { cout << arr[i] << "\t"; } cout << endl;
	for (int i = SIZE - 1; i >= 0; i--) { cout << arr[i] << "\t"; } cout << endl;
	int sum; sum = 0;
	for (int i = 0; i < SIZE; i++) { sum += arr[i]; } cout << "Summ: " << sum << "\t" << endl;
	cout << "Middle: " << (double)sum / SIZE << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Min value: " << min << endl;
	cout << "Max value: " << max << endl;
#endif CLASS_1
#ifdef CLASS_2 //сдвиг массива влево
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < n; i++) { cout << arr[i] << "\t"; } cout << endl;

	int shifts; 
	cout << "Type number of shifts: "; cin >> shifts;
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

#endif CLASS_2
#ifdef DZ_2 //сдвиг массива вправо
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < n; i++) { cout << arr[i] << "\t"; } cout << endl;

	int shifts;
	cout << "Type number of shifts: "; cin >> shifts;
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
#endif DZ_2
#ifdef DEC_2_BIN
	const int n = 32;
	bool bin[n] = {}; //этот массив будет хранить разр€ды двоичного числа
	int decimal;      //дес€читное число введенное с клавиатуры
	cout << "Type Demical: "; cin >> decimal;
	cout << decimal << endl;
	int i = 0; //номер разр€да
	//for (; decimal; i++, decimal /= 2)    //нижний While в виде For
	//{
	//	bin[i] = decimal % 2;
	//}
	while (decimal)
	{
		bin[i] = decimal % 2;  //ѕолучаем младший разр€д двоичного числа
		decimal /= 2;          //”бираем полученный млыдший разр€д из дес€тичного числа
		i++;					//ѕереходим к следующему разр€ду
	}
	//¬ыводим остатки от делени€ в обратном пор€дке
	for (--i /*nt i = n - 1*/; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}

#endif DEC_2_BIN
#ifdef DEC_2_HEX
	const int n = 8   ;
	int hex[n] = {}; //этот массив будет хранить 16-е число
	int decimal;      //дес€читное число введенное с клавиатуры
	cout << "Type Demical: "; cin >> decimal;
	cout << decimal << endl;
	int i = 0; //номер разр€да
	//for (; decimal; i++, decimal /= 2)    //нижний While в виде For
	//{
	//	bin[i] = decimal % 2;
	//}
	while (decimal)
	{   
		hex[i] = decimal % 16;  //ѕолучаем младший разр€д двоичного числа
		decimal /= 16;          //”бираем полученный млыдший разр€д из дес€тичного числа
		i++;					//ѕереходим к следующему разр€ду
	}
	//¬ыводим остатки от делени€ в обратном пор€дке
	for (--i /*nt i = n - 1*/; i >= 0; i--)
	{
		/*if (hex[i] == 10) cout << "A";
		if (hex[i] == 11) cout << "B";
		if (hex[i] == 12) cout << "C";
		if (hex[i] == 13) cout << "D";
		if (hex[i] == 14) cout << "E";
		if (hex[i] == 15) cout << "F";
		else cout << hex[i];*/  // if
	/*	switch (hex[i])
		{
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		default:cout << hex[i];
		}*/					// case
		/*if (hex[i] < 10)cout << hex[i];  
		else cout << char(hex[i] + 55);*/
		//(hex[i] < 10) ? cout << hex[i] : cout << char(hex[i] + 55); //тернарный оператор
		
		//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));
	}
#endif DEC_2_HEX

#ifdef ARRAY_BIG_Int
	const int ROWS = 3;
	const int COLS = 4;
	int i_arr_2[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			i_arr_2[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << i_arr_2[i][j] << "\t";
		}
		cout << endl;
	}
#endif

#ifdef ARRAY_BIG_Double
	const int ROWS = 3;
	const int COLS = 4;
	double i_arr_2[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			i_arr_2[i][j] = rand() % 10000;
			i_arr_2[i][j] /= 100;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << i_arr_2[i][j] << "\t";
		}
		cout << endl;
	}
#endif

}




