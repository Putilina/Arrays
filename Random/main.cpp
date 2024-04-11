﻿//Random
#include<iostream>
using std::cin;           //все ключевые слова подсвечиваются синим цветом
using std::cout;           
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	cout << "Введите минимальное случайное число:"; cin >> minRand;  //50
	cout << "Введите максимальное случайное число:"; cin >> maxRand;  //100

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand) + minRand;
	
	}
	//заполнение массива случайными числами:

	//для того чтобы обратиться к каждому
	//элементу массива нам нужно через цикл FOR перебрать все элементы массива

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100 + 50;// (ни одно случайное число не привысет 100)
		// Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32767 
		//  (RAND_MAX)
		//Если мы хотим,чтобы случайные числа шли не от 0,а от 50,тогда +50 

	}
	 

	//  вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	// сортировка массива
	for (int i = 0; i < n;i++)//счетчик 'i' выбирает элемент,в который нужно поместить минимальное значение
	{
		for (int j = i + 1; j < n; j++)// счетчик 'j' перебирает оставшиеся
		{
			//arr[i]- выбранный элемент
			//arr[j]-перебираемый элемент
			if (arr[j] > arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	

	// 
}