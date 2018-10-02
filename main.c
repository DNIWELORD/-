#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAXLINE 1000 // максимальная длина строки в потоке

int max1; // текущая максимальная длина

char line1[MAXLINE]; // текущая введёная строка
char longest1[MAXLINE]; // саммая длинная строка из введёных

int getline1(void);
void copy1(void);

int getline(char line1[],int maxline);
void copy(char to[], char from[]);

int getline1(void)
{
    int c, i;
    extern char line1[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line1[i] = c;
    if (c == '\n') {
        line1[i] = c;
        ++i;
    }
    line1[i] = '\0';
    return i;
}

void copy1(void)
{
    int i;
    extern char line1[], longest1[];

    i = 0;
    while ((longest1[i] = line1[i]) != '\0')
        ++i;

}






void reverse(char s[])
{
    int i,c,d;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
        d =  i;
    }
    for (i = d; i >= 0; --i)
        s[i+d+1] = s[d - i];

    for (i = 0; i <= d; ++i){
        s[i] = s[i+d+1];
        s[i+d+1] = 0;
        s[d+1] = '\0';
    }
    printf("%d\n", max1);
}



void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
int getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n' && c != '~'; ++i){
        s[i] = c;
}
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int power(int base, int n)
{
    int i, p;

    p = 1;
    for(i = 1; i <= n; ++i)
        p = p * base;
    return p;
}
int tempFC(int c)
{
    int f;
    f = (5.0/9.0) * (c-32.0);
    printf("%d", f);

    return f;
}



int main()
{


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    extern int max1;
    extern char longest1[MAXLINE];
    float f, c, g;
    long nc;
    double ng;
    int C, q, w, e, nl, nq, nw, ne, m, cc, Cc, CC, W, state;
    int ndight, nwhite, nother, nword, nsymW[100], i, obs, ignor, n, I, max;
    int power(int m, int n);
    int len; // длинна текущий строки
    int maxs; // текущая максимальная длинна
    char line[MAXLINE]; // текущая введёная строка
    char longest[MAXLINE]; // саммая длинная строка из введёных
    char eight[1000], s[MAXLINE], S[MAXLINE], Tab[8], Tab2[10000];
    int eigh, ce, co, go, b;

    #define IN 1 // Внутри слова
    #define OUT 0 // Снаружи слова
    #define L 0 /* нижняя граница температур */
    #define up 300 /* верхняя граница */
    #define st 20 /* величина шага */  /*
    printf("Раз \nДва \nТри\n, \clol\n Перевод температуры по Фаренгейту в температуру по Цельсию и наоборот\n По Фаренгейту\t По цельсию \t По фаренгейту \n", EOF);

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

    while ((cc = getchar()) != EOF & cc != '\n')
        ++nc;
    printf("Колличество символов с циклом While: %1d\n\n", nc);

    printf("Введите текст для подсчёта символов циклом For\n");
    for(ng=0; (cc = getchar()) !=EOF & cc != '\n'; ++ng);
    printf("Количество символов с циклом For: %.0f\n\n", ng);

    printf("Введите текст для подсчёта количества строк. Для остановки цикла напишите ~ \n");
    nl = 0;
    while ((C=getchar()) != EOF & C != '~')
        if (C == '\n')
        ++nl;
    printf("Количество строк %d\n\n", nl);

    printf("Введите текст для подсчета колличества пробелов, знаков табуляции и символов конца строки. Для остановки цикла введите ~\n");
    nq = nw = ne = 0;
    while((q=getchar()) != EOF & q != '~') {
        if (q == ' ')  ++nq;
        if (q == '\t') ++nw;
        if (q == '\n') ++ne;
    }
    printf("Количество пробелов %d Количество символов табуляции: %d Количество символов конца строки %d\n\n", nq, nw, ne);

    printf("Программа для копирования входного потока в выходной с заменом кажой строки\nсостоящей из одного или нескольких пробелов, одним пробелом.\n Для завершения цикла введите ~");
    CC = 0;
    while ((Cc = getchar()) != EOF & Cc != '~'){
        if (Cc == ' ' & CC == 0){
            ++CC;
            putchar(Cc);
        }
        if (Cc != ' '){
            putchar(Cc);
            CC = 0;
        }
    }
    printf("Замена знаков табуляции на \\t, backspace на \\b а обратных косых чёрт - на \\\. Для завершения цикла напишите ~ \n");
    while ((W = getchar()) != EOF & W != '~'){
        if (W =='\t')printf("\\t");
        if (W == 'Backspace') printf("\\b");
        if (W == '/') printf("\\");

    }

    printf("Программа подсчёта строк, слов и символов во входном потоке. Каждое слово выводится на новой строке.\n Введите ~ что бы посмотреть результат\n");

    state = OUT;
    q = nq = nw = ne = 0;
    while ((C = getchar()) != EOF && C != '~') {

        ++ne;
        if (C == '\n')
            ++nq;
        if (C == ' ' || C == '\n' || C == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
            printf("\n");
            q = 0;
        }

            putchar(C);
    }
    printf("Нажатий Enter: %d Количество слов: %d Количество символов %d\n", nq, nw, ne);
while (nsymW[i] > 0 ){
        --nsymW[i];

   Напишите программу для вывода гистограммы длин слов во входном потоке.
    ignor = nsymW[100] = nword = 0;
    obs = OUT;
    for (i=0; i<=100; ++i)
        nsymW[i] = 0;
    while ((c=getchar()) != EOF && c != '~'){
    if (c == '\t' || c == '\n' || c == ' ')
        obs = OUT;
    else if (obs == OUT){
        ++nword; // количество слов
        obs = IN;
        ++nsymW[nword];
    }
    else
        ++nsymW[nword];
    }
    putchar(c);
    for (i = 1; i <= nword; ++i ){
        printf("%d \t",i);
        if (i == nword)
            printf("\n");
    }

    for (I = 1; I<= 15; ++I){
            printf("\n");
    for (i = 1; i <= nword; ++i ){
        if (nsymW[i] >= I )
        printf(" %3c\t",35);
    }

    }
    printf("\n");
    for (i = 1; i <= nword; ++i )
        printf("%d ",nsymW[i]);

  Функция возведения в степень power


    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));

    tempFC(20);
    printf("\n");
    tempFC(40);
    printf("\n");
    tempFC(60);

    eigh = maxs = 0;
    for (i = 0; i <= 1000; ++i)
                eight[i] = 0;
    while ((len=getline(line, MAXLINE)) > 0){
        printf("Работает len:%d  MAXLINE:%d\n", len, MAXLINE);

        if (len > maxs) {
            maxs = len;
            copy(longest, line);
        }
        if (len > 80)
            printf("Длинна строки больше 80: %s Длинна: %d\n", line, len);
            for (i = 0; i <= len; ++i)
                if (line[i] == '\0')
                    eigh = eigh + i ;
            else   eight[eigh + i] = line[i];


    }
    if (maxs > 0)
        printf("%s", longest);
        printf("Строки длиннее чем 80: %s", eight);



    reverse(s);
    printf("%s", s);



    max1 = 0;
    while ((len = getline1()) > 0)
        if (len > max1) {
            max1 = len;
            copy1();
        }
    if (max1 > 0)
        printf("%s", longest1);

// Программа замены табуляции на пробелы
    for(i = 0; i < 8; ++i)
        Tab[i] = ' ';
    Tab[8] = '\0';
    while((c = getchar()) != EOF && c != '\n')
        if (c == '\t')
            printf("%s", Tab);
    else
        putchar(c);

   */
   // программа замены пробелов на минимальное количество табулдяций и дополнительных пробелов

   ce = 0;
    while ((c = getchar()) != EOF && c != '\n')
        if (c == ' ')
            ++ce;
        else if (ce >= 8){
            co = ce/8; // Количество необходимых для замены пробелов /t
            ce = ce - co * 8; // Количество оставшихся пробелов
            for (b = 0; b < co; ++b){
                Tab2[b] = '\t';
                go = b;
            }
            for (i = 0; i < ce; ++i)
                Tab2[b+i] = ' ';
            Tab2[b+i+1] = '\0';
            printf("%s", Tab2);
            ce = 0;
            putchar(c);
        }
        else{
            ce = 0;
            putchar(c);
        }



    return 0;
}








