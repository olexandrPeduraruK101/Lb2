#include<stdio.h>
#include<locale.h>
#include<math.h>
//���������� �������


int main() {
	int x; int y; float f;// ����� ����


	setlocale(LC_ALL, "ru");// ������ ��������

	printf("����1�� �1���� ����� x: ");//��������� 
		scanf_s("%f", &x);//��������
	printf("����1�� �1���� ����� y: ");//��������� 
		scanf_s("%f", &y);//��������

		f = (float)(pow(x, 2) + log(x) * y - pow(y, 2)) / (1 + pow(x, 2) + pow(y, 2)); //19-�� �������

		printf("\n\t �����1� f = %.3f\n\n", f);// ��������� �� ����� 

	return 0;
}