/**
 * @file task6_4.c
 * @brief Визначення кількості слів незважаючи на кількіть пробілів
 *
 * @author Vasilyazhenko Dmitriy
 * @date 21-dec-2020
 * @version 1.0
 */
/**
 * функція для визначення кількості слів
 *
 * Послідовність дій:
 * - Створення змінних
 * - процес визначення, за допомогою циклу for та умов
 * @return успішний код повернення з програми (0)
 * @param sum кількість слів
 */
int space(char line[])
{
    int sum = 0;
    for (int i = 0; i <= line; i++) {
        if (line[i] == '\0') {
            break;
        }
        if (line[i + 1] == ' ') {
            continue;
        }
        else if (line[i] == ' ') {
            sum += 1;
        }
    }
    return sum;
}
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінної
 * - виклик функціїї
 * @param result результат роботи функції
 * @return успішний код повернення з програми (0)
 */
int main()
{
    int result = space(" Random words    in   line and more");
    return 0;
}
