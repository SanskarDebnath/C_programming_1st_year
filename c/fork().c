#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;
    pid = fork(); // create a new process

    if (pid < 0) { // error occurred
        fprintf(stderr, "Fork failed");
        return 1;
    }
    else if (pid == 0) { // child process
        printf("This is the child process\n");
    }
    else { // parent process
        printf("This is the parent process\n");
    }

    return 0;
}

