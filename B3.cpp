#include <stdio.h>
#define Pi 3.14

int main(){
	printf("Moi nhap vao ban kinh hinh tron : ");
	double r;	scanf("%lf", &r);
	
	double C = 2 * Pi * r, S = Pi*r*r;
	printf("Chu vi hinh tron la %.2lf\nDien tich hinh tron la %.2lf",C,S);
}
