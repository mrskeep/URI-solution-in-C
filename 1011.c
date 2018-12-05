  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  int main(){
    double pi,raio;

    pi = 3.14159;

    scanf("%lf",&raio);

    raio = (4.0/3.0) * pi * (raio*raio*raio);

    printf("VOLUME = %.3lf\n",raio);
  }
