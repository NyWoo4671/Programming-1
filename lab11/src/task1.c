#define SIZE 10
#include <time.h>
int main()
{
    srand(time(NULL));
    
    int *start_array = malloc(SIZE * sizeof(int));
    int *array_of_repeats = malloc(SIZE * sizeof(int));
    
    fill_array_1(SIZE, start_array);
    fill_array_of_repeats(SIZE, start_array, array_of_repeats);
    
    int res_size = size_of_result(SIZE, start_array, array_of_repeats);
    
    int *result_array = malloc(res_size * 2 * sizeof(int));
   
    fill_result_array(res_size, start_array, array_of_repeats, result_array);
    
    free(result_array);
    free(start_array);
    free(array_of_repeats);
    
    
    
    return 0;
}
