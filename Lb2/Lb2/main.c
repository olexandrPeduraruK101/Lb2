#include <stdio.h>//���������� �������
#include<locale.h>
#include<math.h>



int main() {

	int a; int b;
	float ser; int rizn; int dobutok;//������� �����
	setlocale(LC_ALL, "Rus");//���� ��������
	printf("����1�� �1�� ����� �:   ");//��������
	scanf("%d", &a);//�������
	printf("����1�� �1�� ����� b:   ");//��������
	scanf("%d", &b);//�������
	ser = (float)(a + b) / 2;//������ ����������� 1-�� � 2-��;
	rizn = a - b;//������  1-�� � 2-��;
	dobutok = b * a;//������� 2-�� � 1-��.

	printf("\n\t ser \t rizn \t dobutok \n");
	printf("\n\t %.2f \t %d \t %d \n", ser, rizn, dobutok);//��������



	return 0;//����� ��������
}
