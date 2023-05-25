#include <stdio.h>

int main(){
	
	int x,z,y,i;
	
	printf("Entre com o numero x:\n");
	scanf("%d",&x);
	printf("Entre com o numero z:\n");
	scanf("%d",&z);
	printf("Divisiveis por y:\n");
	scanf("%d",&y);
	
	i=x;
	
	while(i<=z){
	
		if(y % i == 0){
			
			printf("*,");
		}
		else{
			printf("%d,",i);
		}
		i++;
	
	}
}
