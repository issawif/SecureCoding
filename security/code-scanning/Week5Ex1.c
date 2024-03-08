#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
  
  char cmd[BUFSIZE] = "wc -c < ";
  int i = BUFSIZE - sizeof(cmd);

  // check if input is longer than buffer
  // Check if input is sanitized. (Would need to call something here to check if input is sanitized)
  if (sizeof(argv[1] >= i) || !strcmp(argv[1], ";rm")) 
  {
    return 0;
  }
  else 
  {
    strncat(cmd, argv[1], BUFSIZE-1);
    clearenv();
    system(cmd);  
  }

}
