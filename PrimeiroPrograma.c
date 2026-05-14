#include <stdio.h>
 
int main() {
 
    int tempoViagem, velocidadeMedia;
    float litragemNecessaria;
    float distanciaPercorrida;
    scanf("%d", &tempoViagem);
    scanf("%d", &velocidadeMedia);
    distanciaPercorrida = velocidadeMedia * tempoViagem;
  
    
    litragemNecessaria =  distanciaPercorrida / 12;

    printf("%.3f\n", litragemNecessaria);
    
    
 
    return 0;
}