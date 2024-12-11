#include <stdio.h>

int main(){
	printf("Moi nhap vao mot so nguyen co 4 chu so ");
	int n,tmp;	scanf("%d", &n);
	
	while(n){
		int x=n%10;
		tmp =tmp*10+x;
		n/=10;
	}
	
	printf("Day so lat nguoc la %d", tmp);
}
