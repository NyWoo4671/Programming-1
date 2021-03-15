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
#include <time.h>

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - виділення пам'яті для вхідного масиву
 * - виділення пам'яті для масиву повторень
 * - виклик функціїї fill_array_1 для заповнення вхідного масиву випадковими числами
 * - виклик функціїї fill_array_of_repeats для заповнення масиву повторень
 * - виклик функції size_of_result для визначення розміру результуючого масиву
 * - виділення пам'яті для результуючого масиву
 * - виклик функціїї fill_result_array для заповнення результуючего масиву
 * - звільнення пам'ті
 * @return успішний код повернення з програми (0)
 * @param res_size - розмір результуючого масиву
 */
 
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

    print_result(result_array, res_size);

    free(result_array);
    free(start_array);
    free(array_of_repeats);
    
    
    
    return 0;
}