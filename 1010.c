  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  int main(){
    float a, b, c,soma;

    scanf("%f%f%f",&a,&b,&c);
    soma = b*c;
    scanf("%f%f%f",&a,&b,&c);
    soma = soma + (b*c);

    printf("VALOR A PAGAR: R$ %0.2f\n",soma);
  }
