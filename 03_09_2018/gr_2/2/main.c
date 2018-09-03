#include <stdio.h>
#include <math.h>
#include "func.h"
#include "mate.h"

int numMess = 0;

int main() {
  printMess();
  hola(1);
  hola(2);
  hola(3);
  printMess();
  adios1();
  adios2();
  adios3();
  printMess();
  printf("10^2 = %.1lf\n",pote2(10));	
  return 0;
}

