#include<stdio.h>

int main(){
      int i, maior = 0;
      
      while(1){
            printf("Digite um numero: ");
            scanf("%d", &i);
            
            if(i == 0){
                 break;
            }
            
            if(i > maior){
                 maior = i;
            }
      }
      
      printf("\n Maior Valor: %d\n", maior);
      
      return 0;
      
} 
