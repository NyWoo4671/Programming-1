#define SIZE 5
void fill_array(int size, int **array){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            *(*(array + i) + j) = rand() % 10;
        }
    }
}

void fill_res_array(int size, int **array, int *res_array){
    for(int i = 0; i < SIZE; i++){
        *(res_array + i) = *(*(array + i) + i);
    }
}

void sort_array(int size, int *res_array){
    int temp = 0;
    for (int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if (*(res_array + i) < *(res_array + j)) {
                temp = *(res_array + j);
                *(res_array + j) = *(res_array + i);
                *(res_array + i) = temp;
            }
        }
    }
}