#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long n;
    long long m;
    long long a;
    long long columns;
    long long rows;
    long long area;

    scanf("%lld %lld %lld", &n, &m, &a);

    columns = (long long)ceil((double)n / (double)a);
    rows = (long long)ceil((double)m / (double)a);
    area = columns * rows;

    printf("%lld\n", area);

    return EXIT_SUCCESS;
}
