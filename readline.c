#include <stdio.h>
#include <stdlib.h>

char *readline() {
  char *line = malloc(256);
  char c;
  int i = 0;
  while ((c = getchar()) != '\n' && c != -1) {
    line[i++] = c; 
  }
  line[i] = '\0';
  if (i == 0 && c == -1) {
    return NULL;
  }
  return line;
}

int main(int argc, char *argv[ ]) {
   while (readline() != NULL) {
     printf("%s\n", readline());
   }
}
