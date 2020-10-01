#include <stdio.h>

int ctr(int x)
{
    return x % 9 == 0 ? x / 9 : x / 9 + 1;
}
int main()
{
    int t = 1;
   scanf("%d",&t);
    while (t--)
    {
        int pc, pr;
        scanf("%d %d",&pc,&pr);
        int cd, rd;
        cd = ctr(pc);
        rd = ctr(pr);
        if (cd >= rd)
            printf("1 %d\n",rd);
        else
           printf("0 %d\n",cd);
    }
}
