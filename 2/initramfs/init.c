#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <wait.h>

int main() {
  int child_pid;

  child_pid = fork();
  if (child_pid == 0) {
    char* argv[] = { "child", NULL };
    execve("child", argv, NULL);
  } else {
    waitpid(child_pid, NULL, 0);
  }
  return 0;
}
