#include "func.h"

void hola(int opc) {
  if(opc == 1) {
    printf("Hola!!!\n");
    numMess++;
  }
  else if(opc == 2) {
    printf("Hi!!!\n");
    numMess++;
  }
  else {
    printf("ERROR: Opcion invalida!!!\n");
  }
}

void adios1(void) {
  printf("Adios!!!\n");
  numMess++;
}

void adios2(void) {
  printf("Bye!!!\n");
  numMess++;
}

void adios3(void) {
  printf("Ciao!!!\n");
  numMess++;
}

void printMess(void) {
  printf("Numero de mensajes hechos: %d\n", numMess);
}

