#include <stdio.h>

void hola(int opc);
void adios1(void);
void adios2(void);
void adios3(void);

int main() {
  printf("Saludos: \n");
  hola(1);
  hola(2);
  hola(3);
  printf("\nDespedidas: \n");
  adios1();
  adios2();
  adios3();
  return 0;
}

void hola(int opc) {
  if(opc == 1) {
    printf("Hola!!!\n");
  }
  else if(opc == 2) {
    printf("Hi!!!\n");
  }
  else {
    printf("ERROR: Opcion invalida!!!\n");
  }
}

void adios1(void) {
  printf("Adios!!!\n");
}

void adios2(void) {
  printf("Bye!!!\n");
}

void adios3(void) {
  printf("Ciao!!!\n");
}

