/*Pede-se o desenvolvimento de três programas (um
para cada estrutura de repetição estudada) que
exiba os números de x a y (pode considerar x = y),
exceto aqueles que forem divisores de z (neste caso,
o divisor deverá ser substituído pelo símbolo *).*/

#include <stdio.h>

int main(){
	
	int x,z,y,i;
	
	printf("Entre com o numero x:\n");
	scanf("%d",&x);
	printf("Entre com o numero z:\n");
	scanf("%d",&z);
	printf("Divisiveis por y:\n");
	scanf("%d",&y);
	
	for(i=x;i<=z;i++)
		
		if(y % i == 0){
			
			printf("*,");
		}
		else{
			printf("%d,",i);
		}
}
