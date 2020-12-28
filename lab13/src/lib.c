#include "lib.h"
void minmax(char *TEXT){
int str_length = strlen(TEXT);
    char * text_copy = malloc((str_length + 1) * sizeof (char));
    strcpy(text_copy, TEXT);
    
    char space[] = " ";
    char *max_word ;
    char *min_word ;

    int max_length = 0;
    int min_length = 250;

    for (char *word = strtok(text_copy, space); word != NULL; word = strtok(NULL, space)) {
        int length = strlen(word);

        if (length > max_length) {
            max_length = length;
            max_word = word;
        }

        if (length < min_length) {
            min_length = length;
            min_word = word;
        }
    }
    free(text_copy);
}

void calc(char *STR){
char * buffer = malloc(strlen(STR) * sizeof(char));

    int op_left = strtol(STR, &buffer, 10);
    char op = buffer[0];
    int op_right = strtol(buffer + 1, NULL, 10);

    float result = do_operation(op_left, op_right, op);

    free(buffer);
	return;
	}

float do_operation(int operand_left, int operand_right, char oper) {
    float result = 0;
    switch (oper) {
        case '+' : result = operand_left + operand_right; break;
        case '-' : result = operand_left - operand_right; break;
        case '*' : result = operand_left * operand_right; break;
        case '/' :
            if (operand_right != 0) {
                result = (float) operand_left / (float) operand_right;
            }
            break;
        default: result = 0;
        }
       }
       
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
