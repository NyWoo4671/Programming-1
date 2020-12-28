/**
 * @mainpage
 * # Загальне завдання
 * 
 *
 * @author Vasilyazhenko Dmitro
 * @date 22-dec-2020
 * @version 0.1
 */
#define SIZE 5
#include <time.h>

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - виділення пам'яті
 * - виклик функціїї fill_array_3 для заповнення вхідного масиву випадковими числами
 * - виклик функціїї fill_res_array для заповнення результуючего масиву
 * - виклик функції sort_array для сортування масиву
 * - звільнення пам'ті
 * @return успішний код повернення з програми (0)
 */
 
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


