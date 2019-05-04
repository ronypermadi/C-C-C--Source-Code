#include <stdio.h>

int main(){
	int a,b,c,i;
	
	printf("Masukan Tinggi Segitiga : ");
	scanf("%d", &a);
	
	for(i=a; i>=0;i--){
		for(c=i; c>=0; c--){
			printf(" ");
		}
		for(b=1;b<=a-i;b++){
			printf("%d",i);
		}
		for(b=1;b<=a-i;b++){
			printf("%d", i);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
