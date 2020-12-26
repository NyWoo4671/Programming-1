#include "lib.h"
void caesar_cipher(char *string){
int str_length = strlen(string);
    char n;
    char STR[str_length];
    int sdvig = 3;
    for (int i = 0; i < str_length; i++){
    n = string[i];
     if( n >= 0 && n <= 7 ){
        n = n + sdvig;
        }
        if (n == 8){
            n = 1;
        }
        if (n == 9){
            n = 2;
        } else if ( n >= 'a' && n <= 'x'){
        
        if (n == 'y'){
            n = 'a';
        }
         if (n == 'z'){
            n = 'b';
        }
        n = n + sdvig;
    	}
    	STR[i] = n;
    	}
	return;

}
