#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
  
  char cmd[BUFSIZE] = "wc -c < ";
  
  int i = BUFSIZE - sizeof(cmd) - 1;
  char userFile[i] = argv[1];
  
  strncat(cmd, argv[1], sizeof(cmd)-1);

  int i = clearenv();


  if (!strcmp(cmd, ";rm")) {
     return 0;
  } else {
    system(cmd);
  }
  
  
}
