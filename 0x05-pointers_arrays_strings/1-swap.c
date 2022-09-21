#include "main.h"
#include <stdio.h>


/**
 *swap_int - swaps the values of two intergers
 *
 *@a:one interger
 *@b:second interger
 *
 *return always 0
 */


void swap_int(int *a, int *b)

{
int c = *a;
*a = *b;
*b = c;

}
