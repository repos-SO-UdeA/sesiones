#include "mensajes.h"

void hola(int opc) {
  if(opc == 1) {
    printf("Hola!!!\n");
    mess++;
  }
  else if(opc == 2) {
    printf("Hi!!!\n");
    mess++;
  }
  else {
    printf("ERROR: Opcion invalida!!!\n");
  }
}

void todobien(void) {
  printf("Todo bien, todo bonito!!!\n");
  mess++;
}

void printMess(void) {
  printf("Numero de mess: %d\n",mess);
}

