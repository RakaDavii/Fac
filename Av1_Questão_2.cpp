/*		
Desenvolver um programa que, dado um n�mero
inteiro N, exiba todas as combina��es poss�veis com 3
valores, todos no intervalo de 1 a N, de forma que cada
elemento da combina��o seja inferior ou igual ao
seguinte, conforme ilustrado no exemplo abaixo:
*/

#include <stdio.h>

int main(){
	
	int n,i,j,k;
	
	printf("de o valor de n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			for(k=1;k<=n;k++){
				printf("%d ,%d ,%d\n",i,j,k);
			}
		}
	}
	
	
}
