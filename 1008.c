  #include <stdio.h>
  #include <stdlib.h>

  int main(){
    int NUMBER, HOUR;
    float SALARY;

    scanf("%d%d%f",&NUMBER,&HOUR,&SALARY);

    SALARY = HOUR * SALARY;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER,SALARY);
  }
