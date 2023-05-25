/*
Uma empresa de telefonia fez uma pesquisa com N
pessoas e cada uma dessas informou os seguintes
dados: se possui algum animal de estimação; caso
possuam, a quantidade; se preferem gato, cachorro
ou outro.
Implementar um programa que faça a leitura desses
dados e, ao final, exiba:
1. Considerando os entrevistados que possuem
pets, a média de animais de estimação desse
grupo;
2. Percentual de entrevistados que não possuem
pets;
3. Quantidade de entrevistados que preferem
gatos.
*/

#include <stdio.h>

#include <ctype.h>

int main(){

	int i,NumEntrevistados,quantPet=0,quantSemPet=0,Pet,contGato=0,
	quantQuePossuem=0;
	char possuiPet;
	float percDePets=0,percSemPets=0 ;
	
	printf("Numero de entrevistados:");
	scanf("%d",&NumEntrevistados);
	
	for(i=1;i<=NumEntrevistados;i++){
		
		printf("Possui Pets:[S/N]\n");
		fflush(stdin);
		scanf("%c", &possuiPet);
		possuiPet = toupper  (possuiPet);
		
		if(possuiPet == 'S'){
			
			printf("Quantos?\n");
			scanf("%d",&quantPet);	
			quantQuePossuem++;
			
		}else {
			}if(possuiPet == 'N'){
			quantSemPet++;
		}
		
		printf("Prefere Gato ou Cachorro:[G]ato/[C]achorro\n");
		fflush(stdin);
		scanf("%d",&Pet);
		Pet = toupper(Pet);
		
		if(Pet == 'G'){
			contGato++;
		}
			
	}
	percDePets = ((float)quantPet/quantQuePossuem)*100;
	printf("\nPercentual de pets %.2f\n",percDePets);
	
	percSemPets =((float)NumEntrevistados/quantSemPet)*100;
	printf("\nPercentual de pessoas sem pets %.2f\n",percSemPets);
	
	printf("pessoas que gostam de gatos: %d\n",contGato);
	
}
