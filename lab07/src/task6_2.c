/**
 * @file lab6_2.c
 * @brief Визначення число просте чи складене
 *
 * @author Vasilyazhenko Dmitriy
 * @date 21-dec-2020
 * @version 1.0
 */
/**
 * функція для визначення типу числа
 *
 * Послідовність дій:
 * - Створення змінних
 * - процес визначення, за допомогою циклу for та умов
 * @return успішний код повернення з програми (0)
 * @param prime_numbers
 * @param SIZE
 */
void prime(int number)
{
    int SIZE = 14;
    int Prime_numbers[SIZE];
    int num = number;
    for (int i = 0; i < SIZE; i++) {
        for (int j = num; j < 99999; j++) {
            int prime = 1;  // Число простое
            for (int num2 = 2; num2 <= j / 2; num2++) {
                if (j % num2 == 0) {
                    prime = 0; // Число составное
                    break;
                }
            }
            if (prime == 1) {
                Prime_numbers[i] = j;
                num = j + 1;
                break;
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
    prime(14);
    return 0;
}
