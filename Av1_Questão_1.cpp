/*
Considere o problema que, dados os valores de A e B e
N números inteiros lidos, espere determinar a média
dos valores compreendidos entre A e B (inclusive),
assim como a quantidade de números inferiores a A e a
soma daqueles superiores a B.
Pede-se o desenvolvimento de três versões do
programa que resolva o problema apresentado, cada
um utilizando uma estrutura de repetição diferente
(for, while e do..while).
*/

#include <stdio.h>


int main(){
	
	int A, B, N, i, numeros, somaDeSuperiores=0, quantidade=0, inferiores=0;
	float media=0;
	
	printf("Defina o valor de A:");
	scanf("%d",&A);
	
	printf("Defina o Valor de B:");
	scanf("%d",&B);
	
	printf("Defina os Limite de numeros:");
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
		
		printf("Entre com um numero:");
		scanf("%d",&numeros);
		
		if(numeros>B)
		{
		
		media += numeros;
		quantidade++;
		
		}
		else{
			inferiores++;
		}
	}
	media/=quantidade;
	
	printf("A media e %.2f\n",media);
	printf("\nO inferiores a A:%d",inferiores);
	
	
}

