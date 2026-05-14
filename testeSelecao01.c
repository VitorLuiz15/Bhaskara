#include <stdio.h>

int main()
{
    int a,b,c,d;
    int somacd, somaab;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    somacd = c + d;
    somaab = a + b;
    if(b > c && d > a && somacd > somaab && somaab > 0 && somacd > 0 && a % 2 == 0){
        printf("valores aceitos\n");
    
    }else{
        printf("valores nao aceitos\n");
    }







    return 0;
}
