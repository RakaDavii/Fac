#include <stdio.h>


int main(){
	
	int num, i, soma=1, num2 ;
	
	printf("entre com um numero:");
	scanf("%d",&num);
	printf("entra com o limitador:");
	scanf("%d",&num2);
	
	for(i=0; i< num2 ;i++){
		
		printf("Potencias: %d\n",soma);
		soma *= num;
		
	}
}
