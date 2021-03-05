#include<stdio.h>//підключення бібліотек
#include<math.h>


float main () {
 
	const float a = -3;
	const float b = 24;
	const float c = 13;
	float y;//ведення зміних
	
	y = ((a + 4 * b - pow(c, 2)) / (2 * a * b * c));//formula

	printf("\tY =  %f \n", y);//виведеня


	return 0;//кінець програми
	
}