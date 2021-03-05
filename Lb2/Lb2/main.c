#include <stdio.h>//підключення бібліотек
#include<locale.h>
#include<math.h>



int main() {

	int a; int b;
	float ser; int rizn; int dobutok;//ведення зміних
	setlocale(LC_ALL, "Rus");//підкл кирилицю
	printf("введ1ть ц1ле число а:   ");//виведеня
	scanf("%d", &a);//введеня
	printf("введ1ть ц1ле число b:   ");//виведеня
	scanf("%d", &b);//введеня
	ser = (float)(a + b) / 2;//середнє арифметичне 1-го і 2-го;
	rizn = a - b;//різницю  1-го і 2-го;
	dobutok = b * a;//добуток 2-го і 1-го.

	printf("\n\t ser \t rizn \t dobutok \n");
	printf("\n\t %.2f \t %d \t %d \n", ser, rizn, dobutok);//виведеня



	return 0;//кінець програми
}
