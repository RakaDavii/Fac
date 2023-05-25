#include <stdio.h>

int main(){
	
	int i,n,j,num=1;
	
	printf("entre com um numero:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		
		for(j=1 ; j<=i; j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");yth787
	}
}
