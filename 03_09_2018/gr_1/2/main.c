#include <stdio.h>
#include "matematicas.h"
#include "mensajes.h"

int mess = 0;

int main() {
  printMess();
  printf("\n");
  printf("Hola...\n");
  hola(1);
  hola(2);
  printMess();
  printf("\n");
  todobien();
  double p = pot2(10);
  printf("2^10 = %.1lf\n",p);
  printMess();
  printf("\n");
  return 0;
}

