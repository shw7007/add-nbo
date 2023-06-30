#include <stddef.h>
#include <stdint.h>
#include <stdio.h> 
#include <netinet/in.h>

int main(int argc, char * arcv []) {
    FILE  *f1, *f2;
    uint32_t i1,i2;

    f1 = fopen(arcv[1], "rb");
    f2 = fopen(arcv[2], "rb");
    fread(&i1, 4, 1, f1);
    fread(&i2, 4, 1, f2);
    //i1 = __builtin_bswap32(i1);
    //i2 = __builtin_bswap32(i2);
    i1 = htonl(i1);
    i2 = htonl(i2);
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", i1, i1, i2, i2, i1+i2, i1+i2);
    
} 
