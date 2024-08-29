/* cs210sil.c
 * =============================================================
 *    Name: Lucas Briggs
 * Section: T1/2 Kloenne
 * Purpose: Creating a safe input library
 * =============================================================
 */

#include <stdlib.h>
#include <stdio.h>

// Use this function as a template for the others
int getIntegerSafe(){
   int value;
   int scanfReturn = 0;

   // attempt to read an integer value
   scanfReturn = scanf("%d", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}

int getFloatSafe(){
   float value;
   int scanfReturn = 0;

   // attempt to read a float value
   scanfReturn = scanf("%f", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad float input - terminating\n");
      exit(1);
   }
   return value;
}

int getLongSafe(){
   long value;
   int scanfReturn = 0;

   // attempt to read a long value
   scanfReturn = scanf("%ld", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad long input - terminating\n");
      exit(1);
   }
   return value;
}

int getDoubleSafe(){
   double value;
   int scanfReturn = 0;

   // attempt to read a double value
   scanfReturn = scanf("%lf", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad double input - terminating\n");
      exit(1);
   }
   return value;
}

int getCharSafe(){
   char value;
   int scanfReturn = 0;

   // attempt to read a char value
   scanfReturn = scanf(" %c", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad character input - terminating\n");
      exit(1);
   }
   return value;
}

