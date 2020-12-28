/**
 * @file task6_6.c
 * @brief Множення матриці саму на себе
 *
 * @author Vasilyazhenko Dmitriy
 * @date 21-dec-2020
 * @version 1.0
 */
/**
 * Розмір матриці
 */
#define SIZE 3
/**
 *  функція для множення матриці саму на себе
 *
 * Послідовність дій:
 * - Створення змінних
 * - процес множення, за допомогою циклу for
 * @return успішний код повернення з програми (0)
 * @param array вхідний масив
 * @param result результуючий масив
 */
void matrix_mul()
{
    int array[SIZE][SIZE] = { {1, 2, 3},
                 {4, 5, 6},
                 {7, 8, 3} };
    int result[SIZE][SIZE] = { 0 };
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            for (int k = 0; k < SIZE; k++)
            {
                result[i][j] += array[i][k] * array[k][j];
            }
        }
    }
}
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - виклик функціїї
 * @return успішний код повернення з програми (0)
 */
int main()
{
    matrix_mul();
    return 0;
}
