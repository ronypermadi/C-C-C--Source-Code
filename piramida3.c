#include <stdio.h>

int main(){
	int a,b,c,d,e;
	printf("Masukan Tinggi Segitiga : ");
	scanf("%d", &a);
	for(b=1; b<=a; b++){
		for(c=1;c<=a;c++){
			printf(" ");
		}
		for(d=1;d<=b;d++){
			printf("%d",b);
			printf(" ");
		}
		printf("\n");
		a=a-1;
	}
	return 0;
}
