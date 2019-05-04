#include <stdio.h>

int main(){
	int x;
	
	printf("Masukan Bilangan : ");
	scanf("%d", &x);
	
	if(x%2==0){
		printf("Genap");
	}else{
		printf("Ganjil");
	}

	return 0;
}
