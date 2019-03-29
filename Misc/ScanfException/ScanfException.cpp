#include <stdio.h>

int main(void) {
  char fname[ 40 ];
  char sname[ 40 ];
  printf("Please enter your first name:");
  scanf_s("%s" , fname, sizeof(fname));
  printf("Please enter your second name:");
  scanf_s("%s" , sname, sizeof(sname));
  getchar();
  getchar();
  return 0;
}