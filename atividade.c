#include<stdio.h>
int main(){
	
	float notas[2][3];	// vetores para dois nomes
	char alunos[2][200];	// matriz com 3 notas para dois alunos.
	int i,j;
	
		
			for(i=0;i<2;i++){
				
				printf("Digite o nome do %iº Aluno: ",i+1);
				scanf("%s",&alunos[i]);
				
				for(j=0;j<3; j++){
					
					printf("Digite a %iª Nota: ",j+1);
					scanf("%f",&notas[i][j]);
				}
				
				
			}
				printf("\n"); // Somente para pular linha
			
				printf("Exibindo os resultados\n");
			
			for(i=0;i<2;i++){
				
				printf("Nome do %iº Aluno: %s\n",i+1,alunos[i]);
								
				for(j=0;j<3; j++){
					
					printf("A %iª Nota: %.1f\n",j+1,notas[i][j]);
					
				}
				
			}	
				
return 0;	
}
