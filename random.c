#include <stdlib.h>
#include <stdio.h>
#include <time.h>
 
int main(void)
{
    int i;
 
    srand(time(NULL));
    i = 1000+(rand()%9000);
 
    puts("Pin aleatório:");
    printf("%d\n",i);
}
