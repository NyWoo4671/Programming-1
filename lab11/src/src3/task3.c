

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



