// gcc -g -fno-stack-protector main.c -o simple-bof
#include <stdio.h>
#include <string.h>

int main() {

  long variable = 5;
  char name[20];
  memset(name, 0, sizeof(name));

  printf("Ciao, come ti chami? ");
  scanf("%s", name);

  if (variable) {
    printf("Well done, you won!\n");
  }

  return 0;
}
