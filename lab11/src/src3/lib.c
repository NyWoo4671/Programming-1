#define SIZE 10
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
