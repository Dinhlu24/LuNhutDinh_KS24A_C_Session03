#include <stdio.h>

int main(){
	printf("Moi nhap vao mot so nguyen co 4 chu so ");
	int n,tmp;	scanf("%d", &n);
	
	printf("Day so lat nguoc la %d%d%d%d", n%10,(n/10)%10,(n/100)%10,(n/1000)%10);
}
