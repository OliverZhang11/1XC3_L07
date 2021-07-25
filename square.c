#include <stdio.h>
#include "library.h"

int main(int argc, char *argv[])
{ int square_side, area;

   printf("Enter the side of square: ");
   scanf("%d", &square_side);
   //calculation of the area
   area = square_side * square_side;

   printf("Area of the square: %d", area);
   return 0;

}
