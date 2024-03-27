//Numerics
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal;  //десятичное число,введенное с клавиатуры
	cout << "Введите десятичное число:"; cin >> decimal;
	const int MAX_CAPACITY = 32;   //максимально возможная разрядность двоичного числа
	bool binary[MAX_CAPACITY]{};   //этот массив будет хранить разряды двоичного числа

	int i = 0;  //номер разряда
	/*for (; decimal > 0; i++)
	{
		binary[i] = decimal % 2;   // сoхраняем младший разряд числа в массив
		decimal /= 2;    //убираем младший двоичный разряд из десятичного числа

	}*/
	for (; decimal; decimal /= 2)binary[i++]=decimal % 2;
	//Для получения конечного результата нужно переписать остатки от деления в обратном порядке,
	//начиная с последнего результата от деления:
	for (--i; i >= 0; i--)
	{
		cout << binary[i];
	}
	cout << endl;
}