#include <stdio.h>

int main(){
	printf("Moi nhap vao mot so nguyen co 4 chu so ");
	int n,sum=0,num1,num2,num3;	scanf("%d", &n);
	num1 = n%10;
	n/=10;
	num2=n%10;
	n/=10;
	num3 = n%10;
	n/=10;
	sum += num1 + num2 + num3 + n;
	printf("Tong cac chu so do la %d ", sum);
}
