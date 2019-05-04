#include <stdio.h>

int main(){
	int a,b,d,n;
	
	printf("Masukan Tinggi Segitiga : ");
	scanf("%d", &n);
	
	for(a=1; a<=n; a++){
		for(b=n;b>=a;b--){
			printf(" ");
		}
		int x=a+a-1;
		for(d=1;d<=x;d++){
			printf("%d",a);
		}
		printf("\n");
	}
	
	return 0;
}
