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


#define L 0 /* ������ ������� ���������� */
#define up 300 /* ������� ������� */
#define st 20 /* �������� ���� */
printf("��� \n��� \n���\n, \clol\n ������� ����������� �� ���������� � ����������� �� ������� � ��������\n �� ����������\t �� ������� \t �� ����������\n");

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

    while (getchar() != EOF)
        ++nc;
        printf("����������� �������� � ������ While: %1d\n\n", nc);

printf("������� ����� ��� �������� �������� ������ For\n");
    for(ng=0; getchar() !=EOF; ++ng);
        printf("���������� �������� � ������ For: %.0f\n\n", ng);

printf("������� ����� ��� �������� ���������� ����� \n");
nl = 0;
    while ((C=getchar()) != EOF)
        if (C == '\n')
            ++nl;
    printf("���������� ����� %d\n\n", nl);

printf("������� ����� ��� �������� ����������� ��������, ������ ��������� � �������� ����� ������\n");
nq = nw = ne = 0;
    while((q=getchar()) != EOF) {
    if (q == ' ')  ++nq;
    if (q == '\t') ++nw;
    if (q == '\n') ++ne;
    }
printf("���������� �������� %d ���������� �������� ���������: %d ���������� �������� ����� ������ %d\n\n", nq, nw, ne);

        return 0;
}
