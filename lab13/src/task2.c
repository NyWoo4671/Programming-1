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
 * @file main2.c
 * @brief Завдання №2
 *
 * @author Vasilyazhenko Dmitro
 * @date 24-dec-2020
 * @version 1.0
 */

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
    int str_length = strlen(TEXT);
    char * text_copy = malloc((str_length + 1) * sizeof (char));
    strcpy(text_copy, TEXT);
    
    char space[] = " ";
    char *max_word ;
    char *min_word ;

    int max_length = 0;
    int min_length = 250;

    for (char *word = strtok(text_copy, space); word != NULL; word = strtok(NULL, space)) {
        int length = strlen(word);

        if (length > max_length) {
            max_length = length;
            max_word = word;
        }

        if (length < min_length) {
            min_length = length;
            min_word = word;
        }
    }

    free(text_copy);
    return 0;
}