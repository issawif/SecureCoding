#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  const char *fileName = argv[1];
 // readfile(fileName);

}

/*
int read_file(const char *filename) {
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
*/
