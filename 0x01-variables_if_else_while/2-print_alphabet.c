#include <stdio.h>

/**
 * main - Program start
 *
 * Return : Always 0 (Success)
 */
int main () {

   int ch;

   for(ch = 0 ; ch < 26 ; ++ch)
   {
   putchar('a' + ch);
   }

   putchar('\n');
 
    return(0);
}
