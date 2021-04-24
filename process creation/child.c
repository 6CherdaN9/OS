#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    printf("Hi from child.c\n");
    printf("PID of new process is: %d\n", getpid());
    return 0; 
}
