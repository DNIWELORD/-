#include <stdio.h>
#include <stdlib.h>

int main()
{
int c;
   while ((c=getchar()) != EOF){
    putchar(c);
    printf(" %3d\n", c);
   }
    return 0;
}
