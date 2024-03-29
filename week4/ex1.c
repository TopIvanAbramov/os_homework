#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    
    int pid = fork(), n = 100;
    
    if (pid > 0) { // parent
        printf("Hello from parent [%d - %d]\n", pid, n);
    }
    else if (pid == 0) { // child
            
            printf("Hello from child [%d - %d]\n", pid, n); }
    else
            { // invalid
                return 1;
            }
    return 0;
    
}
