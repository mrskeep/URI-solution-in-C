  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  int main(){
    double a, b, c;

    scanf("%lf%lf%lf",&a,&b,&c);

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",(a*c)/2.0,3.14159*(c*c),((a+b)*c)/2.0,(b*b),(a*b));

  }
