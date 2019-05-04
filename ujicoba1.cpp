#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("Masukan Gaji : ");
	scanf("%d", &a);
	printf("Masukan Jam Kerja : ");
	scanf("%d", &b);
	
	if(b<=7){
		c=a*b;
	}else if(b>7){
		c=a*b*1.5;
	}
	
	printf("Total Gaji : %d", c);
	return 0;
}
