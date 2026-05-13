#include<stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    double bhaskara1, bhaskara2,delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b*b) - 4*a*c;

    bhaskara1 = (-b + sqrt(delta)) / (2*a);

    bhaskara2 = (-b - sqrt(delta)) / (2*a);
    
    if( a == 0 || delta < 0){

    printf("Impossivel calcular\n");

    }else{
        printf("R1 = %.5f\n", bhaskara1);

        printf("R2 = %.5f\n", bhaskara2);
    }

    

    




    return 0;
}
