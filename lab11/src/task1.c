 #include <stdlib.h>
#include <time.h>


void fill_array(int size, int *start_array);

void array_of_repeats(int size, int *start_array, int *array_of_repeats){
    int count = 0;
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++) {
            if (*(start_array + i) == *(start_array + j)) {
                count++;
            }
        }
        *(array_of_repeats + i) = count;
        count = 0;
    }
}

 
int size_of_res_array(int size, int *start_array, int *array_of_repeats);

void fill_result_array(int size, int *start_array, int *array_of_repeats, int *result_array);

#define SIZE 10

int main()
{
    srand(time(NULL));
    
    int *start_array = malloc(SIZE * sizeof(int));
    int *array_of_repeats = malloc(SIZE * sizeof(int));
    
    fill_array(SIZE, start_array);
    array_of_repeats(SIZE, start_array, array_of_repeats);
    
    int res_size = size_of_result(SIZE, start_array, array_of_repeats);
    
    int *result_array = malloc(res_size * 2 * sizeof(int));
   
    fill_result_array(res_size, start_array, array_of_repeats, result_array);
    
    free(result_array);
    free(start_array);
    free(array_of_repeats);
    
    
    
    return 0;
}

void fill_array(int size, int *start_array) {
    for (int i = 0; i < SIZE; i++) {
        *(start_array + i) = rand() % 5 + 1;
    }
}

int size_of_result(int size, int *start_array, int *array_of_repeats){
    int res_size = 0;
    int buff = 0;
    for (int i = 0; i < SIZE; i++){
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

void fill_result_array(int size, int *start_array, int *array_of_repeats, int *result_array){
    int k = 0;
    int buff = 0;
    for (int i = 0; i < SIZE; i++){
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
