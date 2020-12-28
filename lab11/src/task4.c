#define SIZE 5
#include <time.h>
int main(){
    
    srand(time(NULL));
    
    int  **array = (int**)malloc(SIZE * sizeof(int *));
    for(int i = 0; i<SIZE; i++){
        array[i] = (int *)malloc(SIZE * sizeof(int));
    }
    int *res_array = malloc(SIZE * sizeof(int));
    
    
    fill_array_3(SIZE, array);
    fill_res_array(SIZE, array, res_array);
    sort_array(SIZE, res_array);
            
    free(array);
    free(res_array);

}


