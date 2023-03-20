#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* printf n value if positive or negative or zero */
  if (n < 0)
    printf("\n%d is negative",n);
  if (n > 0)
    printf("\n%d is positive",n);
  if (n = 0)
    printf("\n%d is zero",n);
  return(0);
}
