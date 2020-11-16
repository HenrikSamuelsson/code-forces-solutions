#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long n;
    long long m;
    long long a;
    long long c;
    long long r;

    scanf("%lld %lld %lld", &n, &m, &a);
    if (0 == n % a)
    {
        c = n / a;
    }
    else
    {
        c = n / a + 1;
    }

    if (0 == m % a)
    {
        r = m / a;
    }
    else
    {
        r = m / a + 1;
    }

    printf("%lld\n", r * c);

    return EXIT_SUCCESS;
}
