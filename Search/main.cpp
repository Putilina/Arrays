//Search    «адача:  ≈сть массив из 10 элементов, заполненный случайными 
            // числами в диапазоне от 0 до 7.
              //Ќужно найти в этом массиве повтор€ющиес€ значени€, 
              //вывести их на экран, и вывести
             //на экран количество повторений каждого значени€.
             //«адачу решить в проекте 'Arrays\Search'
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 8;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


	//   ѕоиск повторений:
	for (int i = 0; i < n; i++)
	{
		//arr[i-выбранный элемент
				
		bool met_before = false;     //предполагаем,что выбранное значение 
		                             //ранее не встречалось,но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;// когда отрабатывает continue мы возвращаемс€ к поиску повторений
		int counter = 0;     //счетчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])counter++;
		}
		if (counter)cout << " «начение " << arr[i] << " повтор€етс€ " << counter << " раз " << endl;
	}

}