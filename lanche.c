#include <stdio.h>
 
int main() {
    int codigo, quant,total;
    
    scanf("%d %d", &codigo, &quant);
    
    if(codigo == 1){
        printf("TOTAL: R$ %.2f\n", quant*4);
    }
    if(codigo == 2){
        printf("TOTAL: R$ %.2f\n", quant*4.5);
    }
    if(codigo == 3){
        printf("TOTAL: R$ %.2f\n", quant*5);
    }
    if(codigo == 4){
        printf("TOTAL: R$ %.2f\n", quant*2);
    }
    if(codigo == 5){
        printf("TOTAL: R$ %.2f\n", quant*1.5);
    }
    
    
 

 
    return 0;
}