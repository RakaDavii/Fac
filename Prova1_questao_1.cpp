/*
Fazer um programa que escreva na tela os n�meros
de 1 a 1000, respeitando �s seguintes regras:
1. O programa deve solicitar ao usu�rio dois
n�meros inteiros, a e b, que, obrigatoriamente,
devem estar no intervalo de 1 a 1000 e, al�m
disso, a deve ser menor ou igual a b;
2. Caso os valores de a e b n�o atendam ao
especificado no item anterior, uma mensagem de
erro dever� ser exibida e, em seguida, a execu��o
do programa terminada;
3. Uma vez v�lidos os valores lidos, os n�meros no
intervalo de a a b dever�o ser exibidos
decrescentemente; os demais, em ordem
crescente.
*/

#include <stdio.h>

#define QUANT 10

int main(){
	
	int a,b,i,j,k;
	
	printf("entre um numero inteiro A:");
	scanf("%d",&a);
	
	printf ("Entre com um numero inteiro B:");
	scanf("%d",&b);
	
	if((a=1) && (b<=1000)){
		for(i=1;i=a;i++){
		printf("%d",i);
		}
		for(j=b;j=i;j--){
		printf("%d",j);
		}
		for(k=b;k=1000;k++){
		printf("%d",k);
		}
	}
	else{
		printf("numero nao esta no limite");
	}
}
