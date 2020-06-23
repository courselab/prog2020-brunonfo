/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/

void sort (int *a, int *b, int *c)
{
  int t;

  if((*a<*b) && (*a<*c) && (*b<*c)){  // caso: a - b - c //
  return;
  }

  if((*a<*b) && (*a<*c) && (*c<*b)){  // caso: a - c - b //
  t = *b;
  *b = *c;
  *c = t;
  return;
  }

  if((*b<*a) && (*a<*c) && (*b<*c)){  // caso: b - a - c //
  t = *a;
  *a = *b;
  *b = t;
  return;
  }

  if((*b<*a) && (*c<*a) && (*b<*c)){  // caso: b - c - a //
  t = *a;
  *a = *b;
  *b = *c;
  *c = t;
  return;
  }

  if((*a<*b) && (*c<*a) && (*c<*b)){  // caso: c - a - b // 
  t = *a;
  *a = *c;
  *c = *b;
  *b = t;
  return;
  }

  if((*b<*a) && (*c<*a) && (*c<*b)){  // caso: c - b - a //
  t = *a;
  *a = *c;
  *c = t;
  return;
  }  
  
}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
