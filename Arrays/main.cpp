#include <iostream>
using namespace std;
void FillRand(int arr[], const int n, int minRand = 0, int maxRand=100);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
void Sum(int arr[], const int n);
void Avg(int arr[], const int n);
void minValueIn(int arr[], const int n);
void maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n);
void shiftRight(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	int minRand, maxRand;
	
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
	int brr[SIZE];
	cout << "Введите минимальное и максимальное случайное число: "; cin >> minRand >> maxRand;
	FillRand(brr, SIZE, minRand, maxRand);
	Print(brr, SIZE);
	shiftLeft(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	shiftRight(brr, SIZE);
	Print(brr, SIZE);

	
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()% (maxRand - minRand) + minRand;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "сумма элементов массива: " << sum;
	cout << endl;
}
void Avg(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	int arithmeticmean = sum / n;
	cout << "среднее арифметическое элементов массива: " << arithmeticmean;
	cout << endl;
}
void minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];

	}
	cout << "Минимальное значение: " << min << endl;
}
void maxValueIn(int arr[], const int n)
{
	int max = arr[0];

	for (int i = 1; i < n; i++)
	{

		if (max < arr[i])
			max = arr[i];
	}

	cout << "Максммальное значение: " << max << endl;
}
void shiftLeft(int arr[], const int n)
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
}