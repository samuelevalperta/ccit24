// gcc -g -fno-stack-protector main.c -o stack
#include <stdio.h>

void function1();
void function2();

int main() {

  long int var1 = 1;
  char var2 = 'A';
  char *var3 = "Andrea";
  int var4 = 0xffffffff;

  function1();
}

void function1() {
  int var1 = 1;
  printf("Ciao da function1!\n");
  function2();
}

void function2() {
  int var1 = 2;
  printf("Ciao da function2!\n");
}
