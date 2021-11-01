/*
 * This program should compute the first n values of the Fibonacci sequence
 * for a user-specified value of n, but it's currently broken.  Use GDB and
 * Valgrind to help debug it.
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * This function computes the Fibonacci sequence up to the n'th value and
 * stores the sequence in the provided array, which should be pre-allocated.
 */
void compute_fib_seq(int* fib_seq, int n) {
  int prev_fib, prev_prev_fib;
  fib_seq[0] = 0;
  fib_seq[1] = 1;
  for (int i = 0; i < n; i++) {
    prev_fib = fib_seq[i-1];
    prev_prev_fib = fib_seq[i-2];
    fib_seq[i] = prev_fib + prev_prev_fib;
  }
}

int main(int argc, char const *argv[]) {
  if (argc < 2) {
    printf("Error: You must specify the value of n.\n");
    printf("\nusage: %s <n>\n", argv[0]);
    return 1;
  }

  /*
   * Convert user-specified value of n from a strint to an integer.
   */
  int n = strtol(argv[1], NULL, 0);
  if (n <= 0) {
    printf("Error: n must be a positive integer value.\n");
    printf("\nusage: %s <n>\n", argv[0]);
    return 1;
  }

  int* fib_seq;
  int i;
  compute_fib_seq(fib_seq, n);
  printf("The first %d digits of the Fibonacci sequence are:\n", n);
  for (i = 0; i < n; i++) {
    printf(" %d", fib_seq[i]);
  }
  printf("\n");

  return 0;
}
