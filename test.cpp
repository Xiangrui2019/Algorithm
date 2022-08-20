#include <cstdio>
#include <cmath>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    printf("%d %.5f %.5f", x + y, (x+y)/2., sqrt(x*y));

    return 0;
}

