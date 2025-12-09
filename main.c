#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.h"
int main( void ) {
 int result = power( 2, 3 );
 printf( "2³ == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );
 //permutation de contenu de deux variables, question d'apprendre les pointeurs
 int first = 16 ;
 int second = 20;
printf("first = %d et second = %d ",first,second);
permutation(&first,&second);
printf("first = %d et second = %d",first,second);
 return EXIT_SUCCESS;
}