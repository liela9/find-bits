#include <stdio.h>
void find_bits(unsigned long x, unsigned long y);
int main(void)
{
    unsigned long x, y;
    printf("Please enter first dezimal number\n");
    scanf("%lu", &x);
    printf("Please enter the second dezimal number\n");
    scanf("%lu", &y);
    find_bits(x, y);
}

void find_bits(unsigned long x, unsigned long y)
{
    int count = 0;
    unsigned long z;
    int c;
    for(c=31; c>=0; c--)
    {
        z = x >> c;
        if(x&z&y)
		count++;
    }
    printf("num of bits: %u\n", count);
    
}
