/**
 * @file lab5_3.c
 * @brief Знаходження чи є  білет щасливим
 *
 * @author Vasilyazhenko Dmitriy
 * @date 21-dec-2020
 * @version 1.0
 */
/**
 * функція для визначення "Щасливого білету"
 *
 * Послідовність дій:
 * - Створення змінних
 * - процес визначення, за допомогою циклу while та умов
 * @return успішний код повернення з програми (result)
 */
char lucky(int num){
int number = num;
	int a = 0;
	int b = 0;
	char result;
	while ( number / 1000 ){
		a += number % 10;
		number = number / 10;
	}
	while ( number % 1000 ){
		b += number % 10;
		number = number / 10;
	}
	if (a == b){
		result = '+';
		return result;
	}
	else {
		result = '-';
		return result;
	}
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
	res = lucky(123600);
	return 0;
}
