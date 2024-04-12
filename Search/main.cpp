//Search    Задача:  Есть массив из 10 элементов, заполненный случайными 
            // числами в диапазоне от 0 до 7.
              //Нужно найти в этом массиве повторяющиеся значения, 
              //вывести их на экран, и вывести
             //на экран количество повторений каждого значения.
             //Задачу решить в проекте 'Arrays\Search'
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


	//   Поиск повторений:
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
				break;//break-прерывает текущую итерацию и все последующие.
			}
		}
		if (met_before)continue;// когда отрабатывает continue мы возвращаемся к поиску повторений
		int counter = 0;     //счетчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])counter++;
		}
		if (counter) printf("Значение %i повторяется %i раз\n", arr[i], counter);
		//if (counter)cout << " Значение " << arr[i] << " повторяется " << counter << " раз " << endl;

	//continue-прерывает текущую итерацию,и переходит к следующей.
	//break-прерывает текущую итерацию и все последующие.
	//Если хотим указать сколько встречается раз,то:
	//в счетчике повторений int counter = 1 меняем на 1 и в условии 
	// if (counter >1).....и вместо повторяется встречаются
	//https://legacy.cplusplus.com/reference/cstdio/printf/
	}
}
