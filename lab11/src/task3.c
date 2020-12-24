#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


float min_max(int size, float array[], int min_max[]);
float find_minmax(int size, float array[], int min_max[]);
void fill_res_arr(float array[], float *res_arr, int pos1, int pos2);

#define SIZE 10

int main()
{
    float array[SIZE] = {1.73, 1.24, 1.11, 1.77, 1.77, 1.13, 1.43, 1.11, 1.33, 1.33};

    int min_max[2] = {0};
    int size_of_res = find_minmax(SIZE, array, min_max);
    float *res_arr = malloc(size_of_res * sizeof(float));
    
    fill_res_arr(array, res_arr, min_max[0], min_max[1]);
    free(res_arr);
    return 0;
}


float find_minmax(int size, float array[], int min_max[])
{
    int temp = 1;
    int count = 0;
    int temp_1 = 0;
    int first_pos = 0;
    int second_pos = 0;
    for (int i = 0; i < SIZE; i++) {
        if (array[i] >= array[i - 1]) {
            if (temp == 1) {
                temp_1 = i - 1;
            }
            temp += 1;
        }else{
            if (temp > count) {
                count = temp;
                first_pos = temp_1;
                second_pos = i - 1;
            }
            temp = 1;
        }
    }
    min_max[0] = first_pos;
    min_max[1] = second_pos; 
    return count;
}

void fill_res_arr (float array[], float *res_arr, int pos1, int pos2){
    for (int i = pos1; i <= pos2; i++ ){
        *(res_arr + (i - pos1)) = array[i];
    }
}




