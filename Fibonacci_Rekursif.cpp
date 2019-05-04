#include <stdio.h>

int fibonacci(int n){ /*Parameter boleh beda dengan variabel di fungsi MAIN*/
	if(n == 0){
		return 0;
	} else if(n == 1){
		return 1;
	} else {
		return fibonacci(n-2) + fibonacci(n-1);
	}
}

int main(){
	int ulang;

	printf("Input Perulangan : ");
	scanf("%d", &ulang);
	
	for(int i=0; i<ulang; i++){
		printf("%d ", fibonacci(i));
	}
	return 0;
}
