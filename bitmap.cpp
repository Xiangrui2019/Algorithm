#include <cstdio>
#include <iostream>

using namespace std;

#define BITPERWORD 32
#define SHIFT 5
#define MASK 0x1F
#define N (1 << 20)

typedef unsigned char* byte_pointer;

int a[1 + N / BITPERWORD];

void set(int i) { a[i >> SHIFT] |= (1 << (i & MASK)); }
void clr(int i) { a[i >> SHIFT] &= ~(1 << (i & MASK)); }
int test(int i) { return a[i >> SHIFT] & (1 << (i & MASK)); }

void show_bytes(byte_pointer ptr, size_t len)
{
    for (size_t i = 0; i < len; i++)
        printf(" %.2x", ptr[i]);

    putchar('\n');
}

int main()
{
    int u, v;

    while (cin >> u >> v)
    {
        printf("%d %d\n", u, v);
    }

    return 0;
}

