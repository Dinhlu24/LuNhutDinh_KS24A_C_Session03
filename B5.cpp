#include <stdio.h>
// Sr thay em bi OCD :, ) + phuc tap hoa van de
int main(){
	int tuoi;
	printf("			DANH SACH SINH VIEN\n");
	printf("-----------------------------------------------------------------------------------------\n");
	printf("| STT	| Ho va ten	| Tuoi	| So dien thoai		| Email				|\n");
	
	for(int i=1;i<=10;i++){
		printf("-----------------------------------------------------------------------------------------\n");
		if(i == 1)	tuoi = 20;
		else if(i == 2 || i == 6 || i == 10)	tuoi = 21;
		else if(i == 3 || i == 9)	tuoi = 18;
		else if(i == 4 || i == 8)	tuoi =19;
		else if(i == 5)	tuoi = 22;
		else	tuoi = 23;
		printf("| %d",i);
		if(i == 10)	i++;
		printf("	| Nguyen Van %c	| %d	| 090448848%d		| %cnv@rikkeiacademy.com		|\n",i+64,tuoi,i%11,i+96);
	}
	printf("-----------------------------------------------------------------------------------------\n");
}
