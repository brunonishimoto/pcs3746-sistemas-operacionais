#include <stdio.h>
#include <signal.h>

void bypass_sigint(int sig_no) {
  printf("divide by zero\n");
}

int main() {
  int a,b,c;
  struct sigaction sa;
  memset(&sa, 0, sizeof(sa));
  sa.sa_handler = &bypass_sigint;
  sigaction(SIGFPE, &sa,NULL);
  a = 1;
  b = 0;
  while (1) {
    sleep(1);
    c = a / b;
  }
  return 0;
}
