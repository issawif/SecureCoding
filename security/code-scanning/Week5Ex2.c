#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  const char *filename = argv[1];
  


FILE* ptr = fopen(filename, "r");

if (ptr == NULL) {
printf("File cannot be opened.\n");
return(-1);
}

char buff[BUFFSIZE];

while (fgets(buff, BUFFSIZE, ptr) != NULL) {
printf("%s", buff);
}

return 0; 
}

