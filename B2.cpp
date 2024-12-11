#include <stdio.h>

int main(){
	printf("Moi nhap vao do Celsius : ");
	double C;	scanf("%lf", &C);
	
	double F = (C * 9/5)+32;
	printf("Doi sang nhiet do Fahrenheit la : %lf",F);
}
