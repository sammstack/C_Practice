#include <stdio.h>
int main()
{
    printf("Fahrenheit\t Celcius\n");
    printf("==========\t =======\n");
        int f=0;
	while(f>=0&&f>=30)
	{
                printf("%3d\t\t %6.1f\n",f,(f-32)*5.0/9.0);
        }
f+=20;
return 0;
}
