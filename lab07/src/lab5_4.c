/**
 * @file lab5_4.c
 * @brief Знаходження чи є число досколналим
 *
 * @author Vasilyazhenko Dmitriy
 * @date 21-dec-2020
 * @version 1.0
 */
/**
 * функція для визначення чи є число досколналим
 *
 * Послідовність дій:
 * - Створення змінних
 * - процес визначення, за допомогою циклу for та умов
 * @return успішний код повернення з програми (res)
 */
char Perfecto(int num){
int number = num;
	int summ = 0;
	char res;
	for (int j = 1; j <= number / 2; j++){
		if (number % j == 0) summ += j;
	}
	if (summ == number ) res = '+';
	else res = '-';
	return res;
}
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінної result
 * - виклик функціїї
 * @return успішний код повернення з програми (0)
 */
int main(){
	char result = Perfecto(7);
	return 0;
}
