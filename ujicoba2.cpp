#include <stdio.h>

int main(){
	int a,x,y,c;
	
	printf("Masukan Lama Parkir : ");
	scanf("%d", &a);
	
	if(a<=2){
		x=2000;
		c=x;
	}else if(a>2){
		y=1000;
		y=(a*y);
		c=y;
	}
	
	printf("Total Biaya : %d", c);
	return 0;
}
