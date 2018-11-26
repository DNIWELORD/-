#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,n, Result[2];
    int dv[101];
    #define OPEN 1
    #define CLOSE 0
    b = 100; // Door number
    printf("Door number : ");
    for(i=1; i<=b; i = i+1)
        printf("%2d", i);
    printf("\n");
    n = 1;
    printf("Doors closed: ");
    for(i=1; i<=b; i = i+1){
        dv[i] = CLOSE;
        printf("%2d", dv[i]);
    }
    printf("\n");

    for(n=1; n<=b; n = n+1){
        printf("%3d   ghost : ", n);
        a = 1;
        for(i=1; i<=b; i = i+1){
            if (i == n*a){
                a= a+1;
                if (dv[i] == 1)
                    dv[i] = CLOSE;
                else if (dv[i] == 0)
                    dv[i] = OPEN;
                    printf("%2d", dv[i]);
            }
            else
                printf("%2d", dv[i]);
        }
        printf("\n");
    }
    Result[0] = Result[1] = 0;
    for(i=1; i<=b; i  = i+1){
        if (dv[i] == 0)
            Result[0] = Result[0] + 1;
        if (dv[i] == 1)
            Result[1] = Result[1] + 1;
    }
    printf("Open doors: %d, Closed doors: %d", Result[1], Result[0]);
    return 0;
}
