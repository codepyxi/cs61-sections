#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <assert.h>


// USAGE: ./simplecat FILE_TO_CAT
int main(int argc, char **argv) {
    
    (void)argc;
    
    if(argc != 2){
        printf("USAGE: ./simplecat FILE_TO_CAT\n");
        exit(1);
    }
    
    pid_t p = fork();
    
    if(p == 0 ) {
        printf("I AM THE CHILD HERE'S MY FAVORITE BOOK:\n");
        char* prog[] = {"cat", argv[1],NULL};
        execvp(prog[0], prog);
    }else{
        printf("I AM THE PARENT\n");
    }
    
    
}