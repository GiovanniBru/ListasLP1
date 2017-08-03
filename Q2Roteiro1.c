#include<stdio.h>

int main(){
        float bruto, desconto, liquido;
        
        printf("Digite o salario bruto: ");
        scanf("%f", &bruto); 
        
        if(bruto <= 420){
             desconto = bruto * 0.08;
             liquido = bruto - desconto; 
        }
        if(bruto <= 1350 && bruto > 420){
             desconto = bruto * 0.09; 
             liquido = bruto - desconto; 
        }
        if(bruto > 1350){
             desconto = bruto * 0.1;
             liquido = bruto - desconto;
        }
        
        printf("Desconto: %.2f --- Salario Liquido: %.2f\n", desconto, liquido);
        
        return 0;
        
}
