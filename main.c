#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);

float f, c, g;
long nc;
double ng;
int C, q, w, e, nl, nq, nw, ne, m;


#define L 0 /* нижняя граница температур */
#define up 300 /* верхняя граница */
#define st 20 /* величина шага */
printf("Раз \nДва \nТри\n, \clol\n Перевод температуры по Фаренгейту в температуру по Цельсию и наоборот\n По Фаренгейту\t По цельсию \t По фаренгейту\n");

    f = L;
    while (f <= up){
        c = (5.0/9.0) * (f-32.0);
        printf("%3.0f\t\t%3.1f", f, c);
        g = f;
        f = (9.0/5.0) * c +32.0;
        printf("\t\t%3.0f\n", f);
        f=g+st;
    }
printf("\nЦикл For\n");
    for (f = 300; f >= 0; f = f - 20 )
        printf("%3.0f \t%3.1f\n", f, (5.0/9.0)*(f-32));


printf("Введите текст для подсчёта символов циклом While\n");
nc = 0;

    while (getchar() != EOF)
        ++nc;
        printf("Колличество символов с циклом While: %1d\n\n", nc);

printf("Введите текст для подсчёта символов циклом For\n");
    for(ng=0; getchar() !=EOF; ++ng);
        printf("Количество символов с циклом For: %.0f\n\n", ng);

printf("Введите текст для подсчёта количества строк \n");
nl = 0;
    while ((C=getchar()) != EOF)
        if (C == '\n')
            ++nl;
    printf("Количество строк %d\n\n", nl);

printf("Введите текст для подсчета колличества пробелов, знаков табуляции и символов конца строки\n");
nq = nw = ne = 0;
    while((q=getchar()) != EOF) {
    if (q == ' ')  ++nq;
    if (q == '\t') ++nw;
    if (q == '\n') ++ne;
    }
printf("Количество пробелов %d Количество символов табуляции: %d Количество символов конца строки %d\n\n", nq, nw, ne);

        return 0;
}
