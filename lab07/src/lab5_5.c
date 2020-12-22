/**
 * @file lab5_5.c
 * @brief Знаходження кореня числа
 *
 * @author Vasilyazhenko Dmitriy
 * @date 21-dec-2020
 * @version 1.0
 */

#include <stdlib.h>
#include <time.h>
/**
 * функція для визначення кореня числа
 *
 * Послідовність дій:
 * - Створення змінних
 * - процес визначення, за допомогою циклу while
 * @return успішний код повернення з програми (root)
 */
int root(int number){
double num = number;
	double eps = 0.00001;
	double root = num / 2;
	while ( root - num / root > eps )
	{
		root = 0.5 * ( root + num / root);
	}
	return root;
}
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінної res
 * - виклик функціїї для числа сгенерованого rand
 * @param res результат виконання root
 * @return успішний код повернення з програми (0)
 */
int main(){
	srand(time(NULL));
	int res = root(rand());
	return 0;
}
