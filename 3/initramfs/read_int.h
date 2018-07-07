#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>

#define __NR_read_int 404

long read_int()
{
	return syscall(__NR_read_int);
}