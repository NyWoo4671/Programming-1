/**
 * @file lab5_2.c
 * @brief Визначення чи є число простим
 *
 * @author Vasilyazhenko Dmitriy
 * @date 21-dec-2020
 * @version 1.0
 */
 /**
 * функція для визначення чи є число простим
 *
 * Послідовність дій:
 * - створення змінних для заданого числа та результату
 * - процес визначення чи є число прости, за допомогою циклу for та умов
 * @return успішний код повернення з програми (res)
 * @param res результат визначення
 */

char s1mple(int num) {
int number = num;
	char res;
	if (number > 1) {
		for (int i = 2; i < number; i++){
			if (number % i == 0){
				res = '-';
				break;
			}
			else {
				res = '+';
			}
		}
	}
	return res;
}
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінної res
 * - виклик функціїї
 * @return успішний код повернення з програми (0)
 */
int main(){
	char res;
	res = s1mple(14);
	return 0;
}

		
