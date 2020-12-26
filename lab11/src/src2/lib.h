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