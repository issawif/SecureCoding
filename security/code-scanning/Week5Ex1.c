#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
  
  char cmd[BUFSIZE] = "wc -c < ";
  //char* fl;
  int i = BUFSIZE - sizeof(cmd);

  if (sizeof(argv[1] >= i) || !strcmp(argv[1], ";rm")) // would need to call something to check if input is sanitized
  {
    return 0;
  }
  else 
  {
    
    strncat(cmd, argv[1], BUFSIZE-1);
    clearenv();
    system(cmd);  
    if (!strcmp(cmd, ";rm"))  // would need to call something to sanitize the input
    {
        return 0;
    } 
    else 
     {
        system(cmd);
     }
  }

}
