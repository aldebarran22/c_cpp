// Generar la tabla de códigos ascii

#include <stdio.h>

#define BELL 7
#define TAB 9

int main(){
    //unsigned char c;
    short int c;
    /*
    unsigned char -> 1 byte:
    0  :   0000 0000
    255:   1111 1111
    256: 1 0000 0000  --> overflow
    */

    for (c = 0 ; c < 256 ; c++){
        switch(c){
            case BELL:
                printf("%03d: BELL\n", c);    
                break;

            case TAB:
                printf("%03d: TAB\n", c);    
                break;

            default:
                printf("%03d: %c\n", c, c);
        }
        
        //if (c == 255) break;
    }
}