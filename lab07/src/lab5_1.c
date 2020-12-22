/**
 * @file lab5_1.c
 * @brief Знаходження НОД чисел
 *
 * @author Vasilyazhenko Dmitriy
 * @date 21-dec-2020
 * @version 1.0
 */
/**
 * функція для знаходження НОД
 *
 * Послідовність дій:
 * - Створення змінних
 * - процес знаходження НОД, за допомогою циклу do while
 * @return успішний код повернення з програми (b)
 */
int gcd(int num1, int num2){
    int a;
	int b;
	if (num1 > num2){
		a = num1;
		b = num2;
	}
	else {
		a = num2;
		b = num1;
	} 
	int gcd;
	int ostatok;
	do{
		ostatok = a % b;
		if(ostatok != 0) gcd = ostatok;
		a = b;
		b = gcd;
	} while(ostatok != 0);
	return b;
};
 /**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення змінної result
 * - виклик функціїї
 * @return успішний код повернення з програми (0)
 */
int main(){
	int result;
    result = gcd( 143, 22);
		return 0;
}

			

		
