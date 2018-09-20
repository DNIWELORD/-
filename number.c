#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
        while ((c=getchar()) != EOF & c != 10){
          putchar(c);
          printf(" %3d\n", c);

   }
    printf("\\n %3d\n", c);

        return 0;
}
