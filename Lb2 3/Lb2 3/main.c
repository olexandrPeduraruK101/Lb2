#include<stdio.h>
#include<locale.h>
#include<math.h>
//підключення бібліотек


int main() {
	int x; int y; float f;// ввожу змінні


	setlocale(LC_ALL, "ru");// ставлю кирилицю

	printf("Введ1ть д1йсне число x: ");//виведення 
		scanf("%f", &x);//введення
	printf("Введ1ть д1йсне число y: ");//виведення 
		scanf("%f", &y);//введення

		f = (float)(pow(x, 2) + log(x) * y - pow(y, 2)) / (1 + pow(x, 2) + pow(y, 2)); //19-ий приклад

		printf("\n\t Функц1я f = %.3f\n\n", f);// результат на екран 

	return 0;
}
