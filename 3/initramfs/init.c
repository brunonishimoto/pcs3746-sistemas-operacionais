#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include "read_int.h"

int main() {
  while(1) {
    printf("Do nothing \n");
    read_int();
    wait(1);
  }
  return 0;
}
