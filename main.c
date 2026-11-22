#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n);

int main(void)
{
int m = 9966990;
int n= 0;

scanf("%d", &n);
if (n > m)
{
    printf("NG");
    return 0;
}

int ans = gcd(m,n);
printf("%d", ans);
return 0;
}
int gcd(int m, int n)
{
    int r;
    int a = m;
    int b = n;
    for (; b != 0;)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return abs(a);
}