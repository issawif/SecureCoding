#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
  char *userName = argv[1];
  
  char command1[1000] = {0};
  char userNameEncoded[1000] = {0};
  
  encodeShellString(userNameEncoded, 1000, userName);  
  snprintf(command1, 1000, "ls %s", userNameEncoded);
  system(command1);
   
}
