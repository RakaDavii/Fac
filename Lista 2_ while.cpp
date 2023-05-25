/*QUESTÃO 02: Faça um programa que exiba
todos os elementos da seguinte série, assim
como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1
*/

#include <stdio.h>

int main(){
	
	int i=1 , j=50,soma=0;

	while(i<=50,j>0){
		
		printf("%d,%d,", i,j);
		
		i++;
		j--;
		soma+= i+j;
	}	
	printf("\n%d soma de todos os numeros.",soma);
}
