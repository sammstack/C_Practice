#define start 0
#define stop 300
#define count 20

#include <stdio.h>
int main()

{
    int f;
    printf("Fahrenheit\t Celcius\n");
    printf("==========\t =======\n");
    for(f=start;f<=stop;f+=count)
        {
         printf("%3d\t\t %6.1f\n",f,(f-32)*5.0/9.0);
        }
return 0;
}




/* 
  1. MEMORY: #define boundaries use 0 bytes RAM (Flash/Immediate values). 
             Only 'int f' uses RAM (4 bytes stack).
  2. PRINTF: Use "%3d", NOT "%3.0d". The '.0' hides zero values!
  3. FLOATS: Use '5.0f' / '9.0f' for 32-bit float FPU register math.
             Using '5' / '9' causes integer truncation (chops decimals).
*/
