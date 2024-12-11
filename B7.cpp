#include <stdio.h>

int main(){
	printf("Moi nhap vao mot so nguyen co 4 chu so");
	int n,sum=0;	scanf("%d", &n);
	while(n){
		int x = n%10;
		sum += x;
		n/=10;
	}
	printf("Tong cac chu so do la %d", sum);
}
