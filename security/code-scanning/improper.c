 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
  char *userName = argv[1];
  
  char command1[1000] = {0};
  
  snprintf(command1, 1000, "ls %s", userName);
  system(command1);
   
}
