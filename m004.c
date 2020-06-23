/* m004.c - Binary to decimal.

   This program takes a string read as a command line argument and,
   interpreting it as a positive binary integer, outputs its 
   corresponding value in decimal base.


   E.g.

      command line    : m004 0011 
      expected output : 3

   Directions:

      Please, edit function decimal();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Return the value in decimal base of the string b, interpreted
   as the a positive binary number. If the string contains any
   characters other than '1's and '0's, truncate the string
   right before the spurious character (eg. truncate 110x001
   into 110); an empty string means zero. */
int pot2 (int exp){
   
  float resultado = 1;
  int i;
  for ( i = 1; i < exp-1; i++){
    resultado = resultado*2;    
    }
  return resultado;
  }


int decimal (char *b)
{
  int k =0;
  int n;
  int value = 0;
  n = strlen(b);

  for(int i=n-1; i>=0; i--){

  value = value + (b[i]-'1'+1)*(pot2(n-i +1));
  }
  return value;
}

#define USAGE "m004 <string>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  n = decimal (argv[1]);

  printf ("%d\n", n);
  
  return 0;
}
