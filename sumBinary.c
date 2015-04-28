#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// convert from string binary to integer
int atob(char *a) {
   int n = strlen(a);
   int num = 0;
   int index = 0;

   while (n-- >= 0) {
      if (a[n] == '1') {
         num = num + (1 << index);
      }
      index++;
   }
   return num;
}

// convert an int to string
// the caller needs to delete the memory return
char *itobs(int myInt) {
  char *c = malloc(sizeof (char) * 33);
  int seenOne = 0;
  int cur = 0;

  for (int i = 0; i < 32; i++) {
    if (myInt & (1 << (31 - i)))  {
      c[cur++] = '1';
      seenOne = 1;
    } else {
      if (seenOne == 1) {
         c[cur++] = '0';
      }
    }
  }
  c[cur] = '\0';
  return c;
}

char *sumBinary(char *a, char *b) {
 return itobs(atob(a) + atob(b));
}

int
main (int arc, char *argv[])  {
  printf( "0111101 + 1101 = %s\n", sumBinary("0111101", "1101"));
}
