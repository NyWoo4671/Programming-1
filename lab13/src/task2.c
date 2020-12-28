/**
 * @mainpage
 * # Загальне завдання
 *  Знайти найдовше і найкоротше слово у тексті. 
 * 
 *
 * @author Vasilyazhenko Dmitro
 * @date 24-dec-2020
 * @version 0.1
 */

/**
 * @file task2.c
 * @brief Завдання №2
 *
 * @author Vasilyazhenko Dmitro
 * @date 24-dec-2020
 * @version 1.0
 */



#define TEXT "Random text in a line"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - Формування строки для пошуку
 * - Створення змінних для макс і мін слів
 * - цикл пошуку макс і мін слів
 * @return успішний код повернення з програми (0)
 * @param max_word  - слово максимальної довжини
 * @param min_word - слово мінімальної довжини
 */

int main(){
    minmax(TEXT);
    return 0;
}
