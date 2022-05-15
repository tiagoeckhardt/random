#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){    
    const char *filename = "corre";    
    FILE *file;        
        if (file = fopen(filename, "r")){       
    printf("Aplicação já está ligada!\n");
                return 1;    
                }        
    else        
        printf("Aplicação a ser ligada!\n");                        fopen(filename, "w");        
        sleep (20);            
        remove(filename);        
        return 0;
}
