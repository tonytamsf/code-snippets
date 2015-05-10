/*
http://inst.eecs.berkeley.edu/~ctest/contest/practice-contest.pdf

1. Given a sequence of distinct 32-bit signed integers, you are to print the integer(s) that
is (are) closest to the mean of all the integers in the sequence.
The input is a sequence of integer numerals separated by whitespace. The output
consists of one integer or two integers, in order, separated by a blank, as appropriate.
Example 1:
Input Output
1 9 3 10 -1 4 5 4
Example 2:
Input Output
1 9 3 10 -2 4 5 6 4 5
*/
#include <stdlib.h>
#include <stdio.h>


float fabs(float a) {
   return (a < 0) ? (a * -1) : a;
}
int main (int argc, char *argv[]) {
  int all[32];
  int potential = 9999;
  int potential2 = 9999;
  float mean = 0;
  float minDiff = 9999;
  float total = 0;
  int count = 0;
  int d;
  int i = 0;
  float f;

  while (scanf("%d", &d) != -1) {
     total += d;
     mean = total / ++count;
     printf( "mean = %2.2f ", mean);
     all[count] = d;
  }
  for (i = 0; i < 32; i++) {
     f = all[i];
     if (fabs(f - mean ) < minDiff) {
        potential = all[i];
        minDiff = fabs(all[i] - mean );
     }
     if (fabs(f - mean ) == minDiff) {
        printf("f - mean %f minDiff %f\n", fabs(f - mean), minDiff);
        potential2 = all[i];
        minDiff = fabs(all[i] - mean );
     }
  }
  printf("mean %2.2f potential %d potential2 %d\n", mean, potential, potential2);
}
