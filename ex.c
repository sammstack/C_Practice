#include <stdio.h>
int main()
{
int c;
long int nl=0;
while ((c = getchar()) != EOF)
    if (c == '\n')
        ++nl;
printf("%ld",nl);
return 0;
}

