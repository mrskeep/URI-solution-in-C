#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  char nome[100];
  double salario, venda;

  scanf("%s%lf%lf",nome,&salario,&venda);
  salario = salario + (venda * 0.15);

  printf("TOTAL = R$ %.2lf\n",salario);
}
