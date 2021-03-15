#include "lib.h"
/**
 * функція заповнення масиву
 *
 * Послідовність дій:
 * - процес заповнення випадковими числами, за допомогою циклу for
 * @return успішний код повернення з програми (0)
 */
void fill_array_1(int size, int *start_array) {
    for (int i = 0; i < 10; i++) {
        char buff[10] = {0};
        puts("enter a number(from 1 to 10):");
        gets(buff);
    }
}
/**
 * функція заповнення масиву повторень
 *
 * Послідовність дій:
 * - процес заповнення, за допомогою циклу for
 * @return успішний код повернення з програми (0)
 */
void fill_array_of_repeats(int size, int *start_array, int *array_of_repeats){
    int count = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            if (*(start_array + i) == *(start_array + j)) {
                count++;
            }
        }
        *(array_of_repeats + i) = count;
        count = 0;
    }
}
/**
 * функція визначення розміру результуючего масиву
 *
 * Послідовність дій:
 * - процес заповнення випадковими числами, за допомогою циклу for та умов
 * @return успішний код повернення з програми (0)
 */
int size_of_result(int size, int *start_array, int *array_of_repeats){
    int res_size = 0;
    int buff = 0;
    for (int i = 0; i < 10; i++){
        if (*(array_of_repeats + i) == 1){
            continue;
        }else{
            for (int j = 0; j < i; j++){
                if(*(start_array + i) == *(start_array + j)) {
                    buff = 1;
                }
            }
            if (buff == 0){
                res_size += 1;
            }
            buff = 0;
        }
    }
    return res_size;
}
/**
 * функція заповнення  результуючего масиву
 *
 * Послідовність дій:
 * - процес заповнення, за допомогою циклу for та умов
 * @return успішний код повернення з програми (0)
 */
void fill_result_array(int size, int *start_array, int *array_of_repeats, int *result_array){
    int k = 0;
    int buff = 0;
    for (int i = 0; i < 10; i++){
        if (*(array_of_repeats + i) == 1){
            continue;
        }else{
            for (int j = 0; j < i; j++){
                if(*(start_array + i) == *(start_array + j)) {
                    buff = 1;
                }
            }
            if (buff == 0){
                *(result_array + k) = *(start_array + i);
                *(result_array + k + 1) = *(array_of_repeats + i);
                k += 2;
            }
            buff = 0;
        }
    }
}

void print_result(int *result_array, int size){
    char  **result_buf = (char**)malloc(size * 2 * sizeof(char *));
    for(int i = 0; i < size * 2; i++) {
        result_buf[i] = (char *) malloc(12 * sizeof(char));
    }
    puts("result:");
    for(int i = 0; i < size * 2; i++){
        sprintf(*(result_buf + i), " %d" , *(result_array + i));
        puts(*(result_buf + i));
    }
    free(result_buf);
}

