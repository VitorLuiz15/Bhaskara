#include <stdio.h>
#include <stdlib.h>

int main(){
    double entrada;
    int  cem,restoDeCem, cinquenta, vinte, dez, cinco, dois, um;
    int  restoDeCinquenta, restoDeVinte, restoDeDez, restoDeCinco, restoDeDois,restodeUm;
    int cinquentaCent, vinteCent ,dezCent, cincoCent, umCent;
    int restoCinquentaCent,restoVinteCent,restoDezCent,RestoCincoCent,RestoUmCent;

    scanf("%lf", &entrada);
    int entradacentavos = round(entrada * 100);

    cem = entradacentavos / 10000; 
    restoDeCem = entradacentavos % 10000;

    cinquenta = restoDeCem / 5000;
    restoDeCinquenta = restoDeCem % 5000;

    vinte = restoDeCinquenta / 2000;
    restoDeVinte = restoDeCinquenta % 2000;

    dez = restoDeVinte / 1000;
    restoDeDez = restoDeVinte % 1000;

    cinco = restoDeDez / 500;
    restoDeCinco = restoDeDez % 500;

    dois = restoDeCinco / 200;
    restoDeDois = restoDeCinco % 200;

    um = restoDeDois / 100;
    restodeUm = restoDeDois % 100;

    cinquentaCent = restodeUm / 50;
    restoCinquentaCent = restodeUm % 50;

    vinteCent = restoCinquentaCent / 25;
    restoVinteCent = restoCinquentaCent % 25;

    dezCent = restoVinteCent / 10;
    restoDezCent = restoVinteCent % 10;

    cincoCent = restoDezCent / 5;
    RestoCincoCent = restoDezCent % 5;

    umCent = RestoCincoCent / 1;
    RestoUmCent = RestoCincoCent % 1;



printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n",  cinquenta);
    printf("%d nota(s) de R$ 20.00\n",  vinte);
    printf("%d nota(s) de R$ 10.00\n",  dez);
    printf("%d nota(s) de R$ 5.00\n",   cinco);
    printf("%d nota(s) de R$ 2.00\n",   dois);
   

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n",  cinquentaCent);
    printf("%d moeda(s) de R$ 0.25\n",  vinteCent);
    printf("%d moeda(s) de R$ 0.10\n",  dezCent);
    printf("%d moeda(s) de R$ 0.05\n",   cincoCent);
    printf("%d moeda(s) de R$ 0.01\n",   umCent);
    
    return 0;

}

