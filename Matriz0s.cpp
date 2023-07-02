#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main (){
	int et13,i,j;
	int mat13[100][100];
	printf("\nIngrese el tamano de la matriz, (debe ser mayor a 3): ");
	scanf("%i",&et13);
	for(i=0;i<et13;i++){
		for(j=0;j<et13;j++){
			mat13[i][i]=0;		
		}
	}
	for(i=0;i<=0;i++){
		for(j=0;j<et13;j++){
			mat13[i][j]=1;
			mat13[j][i]=1;
		}
	}
	et13=et13-1;
	for(i=et13;i<et13+1;i++){
	    for(j=0;j<et13+1;j++){
		    mat13[i][j]=1;
			mat13[j][i]=1;
		}
	}
	et13=et13+1;
	for(i=0;i<et13;i++){
	    for(j=0;j<et13;j++){
		    printf("[%i]",mat13[i][j]);
		}
		printf("\n");
	}
}
