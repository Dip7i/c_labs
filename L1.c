#include <stdio.h>
#include <math.h>
#define pred(x, y) (x) > (y)? (x) : (y)
#define max_from_3(x, y, z) pred((x), pred((y), (z)))
 
int main(void)
{ 
   float x, y, z;
    printf("Enter x -> ");
    scanf("%f", &x);
    printf("Enter y -> ");
    scanf("%f", &y);
    printf("Enter z -> ");
    scanf("%f", &z);
    int r = max_from_3(x, y, z );
   if (r == x && r > (z + y))
   {
      r = x - (z + y);
           
   }
   if (r == x && r < (z + y))
   {
      r = (z + y) - x;
           
   }
   if (r == y && r > (z + x))
   {
      r = y - (z + x);
           
   }
   if (r == y && r < (z + x))
   {
      r = (z + x) - y;
          
   }
   if (r == z && r > (y + x))
   {
      r = z - (y + x);
      
   }
   if (r == z && r < (y + x))
   {
      r = (y + x) - z;
      
   }
   printf("%d", r);
      scanf("%f", &r);
}