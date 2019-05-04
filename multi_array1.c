#include <stdio.h>

int main(){
	
//	int a[][]={{7,5,11,0},{4,9,2,3},{12,5,7,8},{1,3,9,2}};
//	int len = sizeof(a)/sizeof(int);
	int i,j,b;
	char x;
	printf("Masukan Inputan : ");
	scanf("%c", &x);
	
	for(i=0;i<4;i++){
		for(j=4;j>0;j--){
			printf("%c",x,x);
		}
		for(b=1;b<=x-i;b++){
			printf("%d",i);
		}
		printf("\n");
	}
	

	
	return 0;
}
