#include<stdio.h>//���������� �������
#include<math.h>


float main () {
 
	const float a = -3;
	const float b = 24;
	const float c = 13;
	float y;//������� �����
	
	y = ((a + 4 * b - pow(c, 2)) / (2 * a * b * c));//formula

	printf("\tY =  %f \n", y);//��������


	return 0;//����� ��������
	
}