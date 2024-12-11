#include <stdio.h>

int main(){
	printf("Moi nhap do dai canh ");
	int a;	scanf("%d", &a);
	printf("Moi nhap chieu cao tam giac ");
	int h;	scanf("%d", &h);
	
	float S=(float)a*h*1/2;
	printf("Dien tich tam giac do la %f", S);
}
