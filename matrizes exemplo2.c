#include<stdio.h>
int main{
    
    //recebendo valores numericos inteiros do usuario e inserindo na matriz.
    
    int numeros[2][2];
    int i,j;
    
    printf("Digite os elementos para matriz: \n");
    
    for(i=0;i<2;i++){
        
        for(j=0;j<2;j++){
            
            printf ("Elemento da linha %d coluna %d",i+1,j+1);
            scanf("%d",&numeros[i][j]);
        }
    }
return 0;    
}   
