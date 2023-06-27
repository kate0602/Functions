#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Print.cpp"//Реализация  шаблонной функции обязательно подключается на место вызова
#include"Sort.h"
#include"Sort.cpp"
#include"Statistics.h"
#include"Statistics.cpp"



/*void shiftLeft(int arr[], const int n);
void shiftRight(int arr[], const int n);*/



void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int minRand = 200, maxRand = 300;

	UniqueRand(arr, n);
	Print(arr, n);
	cout << "сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	


	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	Sort(arr, n);
	cout << endl;
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	cout << endl;

	const int SIZE = 8;
	double brr[SIZE];
	/*cout << "Введите минимальное и максимальное случайное число: "; cin >> minRand >> maxRand;
	if (minRand >= maxRand)
	{
		int bufer = minRand;
		minRand = maxRand;
		maxRand = bufer;
	}*/
	FillRand(brr, SIZE, minRand, maxRand);
	Print(brr, SIZE);
	//shiftLeft(brr, SIZE);

	cout << "сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	//shiftRight(brr, SIZE);

	
	int i_arr_2[ROWS][COLS];   //i_arr2  int array 2D
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);


	double d_arr_2[ROWS][COLS] =
	{
		{2.5, 3.14, 4.2},
		{7.8, 5.1, 2.7},
		{1.1, 2.3, 4.7}
	};
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое элементов массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;
	char c_arr[n];
	FillRand(c_arr, n);
	Print(c_arr, n);
	cout << "сумма элементов массива: " << Sum(c_arr, n) << endl;

	Sort(d_arr_2, ROWS, COLS);
	Sum(d_arr_2, ROWS, COLS);
	Avg(d_arr_2, ROWS, COLS);
	
	minValueIn(d_arr_2, ROWS, COLS);
	maxValueIn(d_arr_2, ROWS, COLS);
}











/*void shiftLeft(int arr[], const int n)
{
	int buffer = arr[0];
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = buffer;
}
void shiftRight(int arr[], const int n)
{
	int buffer = arr[n - 1];

	for (int i = n - 1; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = buffer;
}*/

