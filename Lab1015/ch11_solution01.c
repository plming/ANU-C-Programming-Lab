#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x = 0x12345678;
    unsigned char *xp = (char *)&x;

    // Intel CPU: Little Endian
    printf("byte order: %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);
    return 0;
}