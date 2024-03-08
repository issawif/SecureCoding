#include <stdio.h>
#include <stdlib.h>
#include <env.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
  
  char cmd[BUFSIZE] = "wc -c < ";

  
  
  
  strncat(cmd, argv[1], BUFSIZE);

  clearenv();
  system(cmd);
  
}
