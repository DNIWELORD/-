#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAXLINE 1000 // ������������ ����� ������ � ������

int getline(char line[],int maxline);
void copy(char to[], char from[]);

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

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
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

    float f, c, g;
    long nc;
    double ng;
    int C, q, w, e, nl, nq, nw, ne, m, cc, Cc, CC, W, state;
    int ndight, nwhite, nother, nword, nsymW[100], i, obs, ignor, n, I, max;
    int power(int m, int n);
    int len; // ������ ������� ������
    int maxs; // ������� ������������ ������
    char line[MAXLINE]; // ������� ������� ������
    char longest[MAXLINE]; // ������ ������� ������ �� �������


    #define IN 1 // ������ �����
    #define OUT 0 // ������� �����
    #define L 0 /* ������ ������� ���������� */
    #define up 300 /* ������� ������� */
    #define st 20 /* �������� ���� */  /*
    printf("��� \n��� \n���\n, \clol\n ������� ����������� �� ���������� � ����������� �� ������� � ��������\n �� ����������\t �� ������� \t �� ���������� \n", EOF);

    f = L;
    while (f <= up){
        c = (5.0/9.0) * (f-32.0);
        printf("%3.0f\t\t%3.1f", f, c);
        g = f;
        f = (9.0/5.0) * c +32.0;
        printf("\t\t%3.0f\n", f);
        f=g+st;
    }
    printf("\n���� For\n");
    for (f = 300; f >= 0; f = f - 20 )
        printf("%3.0f \t%3.1f\n", f, (5.0/9.0)*(f-32));


    printf("������� ����� ��� �������� �������� ������ While\n");
    nc = 0;

    while ((cc = getchar()) != EOF & cc != '\n')
        ++nc;
    printf("����������� �������� � ������ While: %1d\n\n", nc);

    printf("������� ����� ��� �������� �������� ������ For\n");
    for(ng=0; (cc = getchar()) !=EOF & cc != '\n'; ++ng);
    printf("���������� �������� � ������ For: %.0f\n\n", ng);

    printf("������� ����� ��� �������� ���������� �����. ��� ��������� ����� �������� ~ \n");
    nl = 0;
    while ((C=getchar()) != EOF & C != '~')
        if (C == '\n')
        ++nl;
    printf("���������� ����� %d\n\n", nl);

    printf("������� ����� ��� �������� ����������� ��������, ������ ��������� � �������� ����� ������. ��� ��������� ����� ������� ~\n");
    nq = nw = ne = 0;
    while((q=getchar()) != EOF & q != '~') {
        if (q == ' ')  ++nq;
        if (q == '\t') ++nw;
        if (q == '\n') ++ne;
    }
    printf("���������� �������� %d ���������� �������� ���������: %d ���������� �������� ����� ������ %d\n\n", nq, nw, ne);

    printf("��������� ��� ����������� �������� ������ � �������� � ������� ����� ������\n��������� �� ������ ��� ���������� ��������, ����� ��������.\n ��� ���������� ����� ������� ~");
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
    printf("������ ������ ��������� �� \\t, backspace �� \\b � �������� ����� ���� - �� \\\. ��� ���������� ����� �������� ~ \n");
    while ((W = getchar()) != EOF & W != '~'){
        if (W =='\t')printf("\\t");
        if (W == 'Backspace') printf("\\b");
        if (W == '/') printf("\\");

    }

    printf("��������� �������� �����, ���� � �������� �� ������� ������. ������ ����� ��������� �� ����� ������.\n ������� ~ ��� �� ���������� ���������\n");

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
    printf("������� Enter: %d ���������� ����: %d ���������� �������� %d\n", nq, nw, ne);
while (nsymW[i] > 0 ){
        --nsymW[i];

   �������� ��������� ��� ������ ����������� ���� ���� �� ������� ������.
    ignor = nsymW[100] = nword = 0;
    obs = OUT;
    for (i=0; i<=100; ++i)
        nsymW[i] = 0;
    while ((c=getchar()) != EOF && c != '~'){
    if (c == '\t' || c == '\n' || c == ' ')
        obs = OUT;
    else if (obs == OUT){
        ++nword; // ���������� ����
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

  ������� ���������� � ������� power


    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));

    tempFC(20);
    printf("\n");
    tempFC(40);
    printf("\n");
    tempFC(60);
*/

    maxs = 0;
    while ((len=getline(line, MAXLINE)) > 0)
        if (len > maxs) {
            max = len;
            copy(longest, line);
        }
    if (maxs > 0)
        printf("%s", longest);



    return 0;
}jdj









