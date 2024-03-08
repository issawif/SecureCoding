#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
  
  char cmd[BUFSIZE] = "wc -c < ";
  char* file[BUFSIZE] = argv[1];
  
  strncat(cmd, argv[1], sizeof(cmd)-1);
  clearenv();


  if (!strcmp(cmd, ";rm")) {
     return 0;
  } else {
    system(cmd);
  }
  
  
}
