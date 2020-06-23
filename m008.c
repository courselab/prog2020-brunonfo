/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  int i = 0;
  int j = 0;
  char t[MAX];
  strcpy(t, s);

  while(t[i]!=0){
    i++;
  }
  while(t[i]!=' '){
    i--;
  }
  i++;

  while(t[i]!=0){

    if(t[i]>64 && t[i]<91)
    s[j]=t[i];

    else
    s[j]=t[i]-32;

    i++;
    j++;
  }
  j--;
  s[j]=',';
  j++;
  s[j]=' ';
  j++;
  i=0;

  while(t[i]!=0){
    s[j]=t[i];
    j++;
    i++;
  }

  while(t[i]!=' '){
    i--;
    j--;
    s[j]=0;
  }


return;
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
