
#define _GNU_SOURCE 1 
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/uio.h>
#include <seccomp.h> 
#include <string.h> 
#include <stdlib.h> 
#include <stdint.h> 
#include <assert.h> 
#include <unistd.h> 
#include <stdio.h> 
#include <errno.h> 
#include <fontl.h> 
#include <time.h>
int main(int argc, char **argv){
	scmp_filter_ctx ctx;
	ctx = seccomp_init(SCMP_ACT_ALLOW);
	seccomp_rule_add(ctx, SCMP_ACT_KILL, SCMP_SYS(execve), 0);
	seccomp_load(ctx);
	execl("/bin/cat", "cat", "/flag", (char *)0);
}
