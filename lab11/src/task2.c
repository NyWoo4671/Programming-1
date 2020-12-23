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

#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/**
 * функція для заповнення вхідного масиву
 *
 */
void fill_array(int size, int *array);
/**
* фуункція для визначення послідовності
*
*/
void find_minmax(int size, int *array, int min_max[]);
/**
* функція для заповнення результуючего масиву
*
*/
void fill_res_arr(int *array, int *res_arr, int pos1, int pos2);

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
    fill_array(SIZE, array);

    int min_max[2] = {0};
    find_minmax(SIZE, array,min_max);
    int size_of_res = min_max[1] - min_max[0] + 1;
    int *result_arr = malloc(size_of_res * sizeof(int));
    
    fill_res_arr(array, res_arr, min_max[0], min_max[1]);
    free(res_arr);
    free(array);
    return 0;
}

void fill_array(int size, int *array)
{
    for (size_t i = 0; i < SIZE; i++)
    {
        *(array + i) = rand() % 20 - 10;
    }
}

void find_minmax(int size, int *array, int min_max[])
{
    int temp = 0;
    int sum = 0;
    int temp_1_pos = 0;
    int 1_pos = 0;
    int 2_pos = 0;
    for (int i = 0; i < SIZE; i++) {
        if (*(array + i) > 0) {
            if (temp_ == 0) {
                temp_1_pos = i;
            }
            temp += *(array + i);
        }else{
            if (temp > sum) {
                sum = temp;
                1_pos = temp_1_pos;
                2_pos = i - 1;
            }
            temp = 0;
        }
    }
    min_max[0] = 1_pos;
    min_max[1] = 2_pos;
}

void fill_res_arr (int *array, int *res_arr, int pos1, int pos2){
    for (int i = pos1; i <= pos2; i++ ){
        *(result_arr + (i - pos1)) = *(array + i);
    }
}
