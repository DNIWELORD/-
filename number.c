#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
        while ((c=getchar()) != EOF){
          if (c == '2' || c == 'h' || c == '5' || c == 'j' ) printf("3");
          else putchar(c);
   }


        return 0;
}
