/*
Fazer um programa que escreva na tela os números
de 1 a 1000, respeitando às seguintes regras:
1. O programa deve solicitar ao usuário dois
números inteiros, a e b, que, obrigatoriamente,
devem estar no intervalo de 1 a 1000 e, além
disso, a deve ser menor ou igual a b;
2. Caso os valores de a e b não atendam ao
especificado no item anterior, uma mensagem de
erro deverá ser exibida e, em seguida, a execução
do programa terminada;
3. Uma vez válidos os valores lidos, os números no
intervalo de a a b deverão ser exibidos
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
