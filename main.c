#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Ðàç \nPLZ RUSSIAN LANGUAGE AHHAHAHAHA SERGEY KIRIKEZA!\nÒðè\n, \clol\n Ïåðåâîä òåìïåðàòóðû ïî Ôàðåíãåéòó â òåìïåðàòóðó ïî Öåëüñèþ è íàîáîðîò\n");

    float f, c, L, up, st, g;
    L = 0; // íèæíÿÿ ãðàíèöà òåìïåðàòóð
    up = 300; // âåðõíÿÿ ãðàíèöà
    st = 20; // âåëè÷èíà øàãà

    f = L;
    while (f <= up){
        c = (5.0/9.0) * (f-32.0);
        printf("%3.0f\t%3.1f", f, c);
        g = f;
        f = (9.0/5.0) * c +32.0;
        printf("\t%3.0f\n", f);
        f=g+st;
    }
    
    for (f = 300; f >= 0; f = f - 20 )
        printf("%3.0f \t%3.1f\n", f, (5.0/9.0)*(f-32));

    return 0;
}
