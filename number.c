#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
        while ((c=getchar()) != EOF){
          putchar(c);
          if (c != 10) printf(" %3d\n", c);
          else printf("\\n %3d\n", c);
   }

        return 0;
}
