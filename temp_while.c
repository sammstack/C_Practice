#include <stdio.h>
int main()
{
#define upper 300
#define lower 0
#define step 20
 
int fahr;
int celcius;

fahr = lower;
printf("Fahr\t celcius\n");
printf("====\t =======\n");
while (fahr<=300)
{
celcius = 5*(fahr-32)/9;
printf("%3d\t%3d\n",fahr,celcius);
fahr = fahr +step;
}
return 0;
}

/* while is been used in case you dont know how much time it should run,the loop repeats continuously and stops only when user gives the output
   used define and symbolic constants so as to reduce the RAM usage
*/
