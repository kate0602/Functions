#include"Sort.h"

void Sort(int arr[], const int n) // счеткик 'i' выбирает элемент, в который нужно положит мин значение
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++) // счеткик 'j' перебирает элементы в поисках мини значени€.
		{// ѕеребираетс€ права€ часть массива относительно выбранного элемента
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

}
void Sort(double arr[], const int n) // счеткик 'i' выбирает элемент, в который нужно положит мин значение
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++) // счеткик 'j' перебирает элементы в поисках мини значени€.
		{// ѕеребираетс€ права€ часть массива относительно выбранного элемента
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{

					if (arr[k][l] > arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	// cout << "ћассив отсортирован за " << iterations << " итераций" << endl;
}

void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{

					if (arr[k][l] > arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	// cout << "ћассив отсортирован за " << iterations << " итераций " << endl;
}