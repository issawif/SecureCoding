#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
  
  char cmd[BUFSIZE] = "wc -c < ";
  //char* fl;
  int i = BUFSIZE - sizeof(cmd);

  if (sizeof(argv[1] >= i)
  {
    return 0;
  }
  else {
    //strncpy(fl, argv[1], i);
    //strncat(cmd, fl, BUFSIZE-1);
    strncat(cmd, argv[1], BUFSIZE-1);
    clearenv();
      
    if (!strcmp(cmd, ";rm")) 
    {
        return 0;
    } 
    else 
     {
        system(cmd);
     }
  }

}
