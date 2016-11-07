#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main( int argc, char **argv ) {
  (void)argc;
  sleep( atoi(argv[1]) );
  execvp(argv[2], &argv[2]);
}
