#include <stdlib.h>
#include <time.h>

/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */

/**

* main - main function

* Return: always 0

*/

int main (void)

{
  
  int n;

srand(time(0));
n = rand() - RAND_MAX / 2; 
/* printf the value of n */

 if (n > 0)

  printf ("\n%d is positive", n);

 else if (n < 0)

   printf ("\n%d is negative", n);
 
 else if (n == 0)

  printf ("\n%d is zero", n);

 return(0);

}
