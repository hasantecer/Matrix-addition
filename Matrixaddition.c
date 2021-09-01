#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int matris1[3][3];
	int matris2[3][3];
	int matris3[3][3];
	int i,j;
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			printf("Birinci matrisin (%d,%d) degerini giriniz:",i+1,j+1);
			scanf("%d",&matris1[i][j]);
		}
	} 
	printf("Matris 1\n");
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			printf("%d ",matris1[i][j]);
		}
		printf("\n");}
		
		
	printf("Matris 2\n");	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			printf("Ikinci matrisin (%d,%d) degerini giriniz:",i+1,j+1);
			scanf("%d",&matris2[i][j]);
		}
	} 	
	printf("Matris 2\n");	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			printf("%d ",matris2[i][j]);
		}
		printf("\n");	
		} 
		
		
	printf("Matris Toplamlari\n");	
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			matris3[i][j] = matris1[i][j] + matris2[i][j];
			printf("%d ",matris3[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
