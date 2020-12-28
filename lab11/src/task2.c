/**
 * @mainpage
 * # Загальне завдання
 * 
 *
 * @author Vasilyazhenko Dmitro
 * @date 22-dec-2020
 * @version 0.1
 */

/**
 * @file task2.c
 * @brief Завдання №2
 * # Знайти безперервну послідовність позитивних чисе у вхідному масиві,сума елемертів якої максимальна та переписати їх у вхідний масивю
 * @author Vasilyazhenko Dmitro
 * @date 22-dec-2020
 * @version 1.0
 */
#include <time.h>
#define SIZE 20
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення створення вхідного масиву
 * - виклик функціїї fill_array для заповнення вхідного масиву випадковими числами
 * - виклик функціїї min_max для визначення послідовності
 * - виклик функціїї fill_res_array для заповнення результуючего масиву
 * @return успішний код повернення з програми (0)
 * @param res_size - розмір результуючого масиву
 */

int main()
{
    srand(time(NULL));

    int *array = malloc(SIZE * sizeof(int));
    fill_array_2(SIZE, array);

    int min_max[2] = {0};
    find_minmax_1(SIZE, array,min_max);
    int size_of_res = min_max[1] - min_max[0] + 1;
    int *res_arr = malloc(size_of_res * sizeof(int));
    
    fill_res_arr(array, res_arr, min_max[0], min_max[1]);
    free(res_arr);
    free(array);
    return 0;
}
