#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void print_PCB() {
    pid_t ppid = getppid();
    pid_t pid = getpid();
    uid_t uid = getuid();
    gid_t gid = getgid();
    printf("PCB | PPID : %d\n\t| PID : %d\n\t| UID : %d\n\t| GID : %d", ppid, pid, uid, gid);
}

int main() {
    pid_t ret = fork();
    printf(”fork() has returned: %d\n”, ret);
    print_PCB();
    exit(EXIT_SUCCESS);
}