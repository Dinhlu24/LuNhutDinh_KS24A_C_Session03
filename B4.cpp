#include <stdio.h>

int main(){
	printf("Yeu cau nhap vao diem toan : ");
	double T;	scanf("%lf", &T);
	
	printf("Yeu cau nhap vao diem van : ");
	double V;	scanf("%lf", &V);
	
	printf("Yeu cau nhap vao diem anh : ");
	double A;	scanf("%lf", &A);
	
	double sum = T + V + A;
	printf("Tong diem : %.2lf\nDiem trung binh : %.2lf",sum,sum/3);
}
