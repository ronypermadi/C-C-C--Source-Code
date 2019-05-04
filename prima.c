#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("Masukan Bilangan : ");
	scanf("%d", &a);
	b=0;
	for(c=1;c<=a;c++){
		if(a%c==0){
			b++;
		}
	}
		if(b==2){
			printf("Bilangan Tersebut Adalah Prima ");
		}else{
			printf("Bukan Bilangan Prima ");
		}
	return 0;
}
