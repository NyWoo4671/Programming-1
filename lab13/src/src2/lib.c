#include "lib.h"
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
    return result;
}