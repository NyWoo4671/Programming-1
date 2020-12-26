#include "lib.h"
#define SIZE 20

void fill_array(int size, int *array)
{
    for (size_t i = 0; i < SIZE; i++)
    {
        *(array + i) = rand() % 20 - 10;
    }
}

void find_minmax(int size, int *array, int min_max[])
{
    int temp = 0;
    int sum = 0;
    int temp_1_pos = 0;
    int first_pos = 0;
    int second_pos = 0;
    for (int i = 0; i < SIZE; i++) {
        if (*(array + i) > 0) {
            if (temp == 0) {
                temp_1_pos = i;
            }
            temp += *(array + i);
        }else{
            if (temp > sum) {
                sum = temp;
                first_pos = temp_1_pos;
                second_pos = i - 1;
            }
            temp = 0;
        }
    }
    min_max[0] = first_pos;
    min_max[1] = second_pos;
}

void fill_res_arr (int *array, int *res_arr, int pos1, int pos2){
    for (int i = pos1; i <= pos2; i++ ){
        *(res_arr + (i - pos1)) = *(array + i);
    }
}
