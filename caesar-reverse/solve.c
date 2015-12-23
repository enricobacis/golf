#include <stdio.h>
#define P putchar
main(x){char*s;scanf("%d %[^\n]s",&x,s);char*c=s;for(;*c;c++)P(*c==32?32:97+(*c-97+x)%26);P(10);while(c>=s)P(*--c);}
