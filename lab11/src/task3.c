/**
 * @mainpage
 * # Загальне завдання
 * 
 *
 * @author Vasilyazhenko Dmitro
 * @date 22-dec-2020
 * @version 0.1
 */

#define SIZE 10

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - задання змінних та вхідного масиву
 * - виклик функціїї find_minmax_2 для знаходження першої та останної позицій послідовності
 * - виділення пам'яті
 * - виклик функції fill_res_arr для сортування масиву
 * - звільнення пам'ті
 * @return успішний код повернення з програми (0)
 */

int main()
{
    float array[SIZE] = {1.73, 1.24, 1.11, 1.77, 1.77, 1.13, 1.43, 1.11, 1.33, 1.33};

    int min_max[2] = {0};
    int size_of_res = find_minmax_2(SIZE, array, min_max);
    float *res_arr = malloc(size_of_res * sizeof(float));
    
    fill_res_arr(array, res_arr, min_max[0], min_max[1]);
    free(res_arr);
    return 0;
}



