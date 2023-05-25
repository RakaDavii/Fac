/*
Desenvolver um programa que, dados dois números
inteiros n1 e n2, determine o maior algarismo
comum entre eles.
*/

#include <stdio.h>

int main(){
	
	int num1,num2,resto1,c,u,d,m,dm,cm,u2,c2,d2,m2,dm2,cm2,resto2;
	
	printf("Entre com um numero:\n");
	scanf("%d",&num1);
	
	printf("Entre com mais um numero:\n");
	scanf("%d",&num2);
	
		resto1 = num1%100000;		
		cm = resto1/100000;
		dm = resto1/10000;	
		m = resto1/1000;
		c =resto1/100;
		d = resto1/10;
		u = resto1%10;
		
		resto2 = num2%100000;		
		cm2 = resto2/100000;
		dm2 = resto2/10000;	
		m2 = resto2/1000;
		c2 =resto2/100;
		d2 = resto2/10;
		u2 = resto2%10;
		
	if(u2< u){
		printf("esse numero e maior %d",u);
	}else{
		printf("esse numero e maior %d",u2);
	}
	if(d2<d){
		printf("esse numero e maior %d",d);
	}else{
		printf("esse numero e maior %d",d2);
	}
	if(c2<c){
		printf("esse numero e maior %d",c);
	}else{
		printf("esse numero e maior %d",c2);
	}
	if(d2<d){
		printf("esse numero e maior %d",d);
	}else{
		printf("esse numero e maior %d",d2);
	}
	if(m2<m){
		printf("esse numero e maior %d",m);
	}else{
		printf("esse numero e maior %d",m2);
	}
	if(dm2<dm){
		printf("esse numero e maior %d",dm);
	}else{
		printf("esse numero e maior %d",dm2);
	}
	if(cm2<cm){
		printf("esse numero e maior %d",cm);
	}else{
		printf("esse numero e maior %d",cm2);
	}
	if(resto2<resto1){
		printf("esse numero e maior %d",resto1);
	}else{
		printf("esse numero e maior %d",resto2);
	}
	
	
}
