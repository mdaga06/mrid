// problem link:- https://www.codechef.com/problems/FLOW006
#include <stdio.h>
int main(void)
{
    int t, n, d, i;
    int c = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        while (n != 0)
        {
            d = n % 10;
            n = n / 10;
            c = c + d;
        }

        printf("%d\n", c);
        c = 0;
    }
    return 0;
}
