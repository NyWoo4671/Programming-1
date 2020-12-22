/**
 * @file lab6_3.c
 * @brief Переведення числа у текстовий вигляд
 *
 * @author Vasilyazhenko Dmitriy
 * @date 21-dec-2020
 * @version 1.0
 */
/**
 * функція для переведення числа
 *
 * Послідовність дій:
 * - Створення змінних
 * - процес переведення, за допомогою циклу for та умов
 * @return успішний код повернення з програми (0)
 */
void string(int num)
{
    int number = num;
    char result[4][15];
    for (int i = 0; i < 15; i++) {
        result[i][i] = ' ';
    }

    char thousands[9][20] = { " one thousand ", " two thousands ", " three thousands ", " four thousands ", " five thousands", " six thousands ", " seven thousands ", " eight thousands ", " nine thousands " };
    char hundreds[9][20] = { " one hundred ", " two hundreds ", " three hundreds ", " four hundreds ", " five hundreds ", " six hundreds ", " seven hundreds ", " eight hundreds ", " nine hundreds " };
    char cardinal[10][20] = { " ten ", " eleven ", " twelve ", " thirteen ", " fourteen ", " fifteen ", " sixteen ", " seventeen ", " eighteen ", " nineteen " };
    char dozens[9][15] = { " twenty ", " thirty ", " fourty ", " fifty ", " sixty ", " seventy ", " eighty ", " ninety " };
    char units[9][15] = { " one ", " two ", " three ", " four ", " five ", " six ", " seven ", " eight ", " nine " };

    for (int i = 0; i < 15; i++) {
        result[0][i] = thousands[number / 1000 - 1][i];
        result[1][i] = hundreds[number % 1000 / 100 - 1][i];
        if (number % 100 >= 10 && number % 100 < 20) {
            result[2][i] = cardinal[number % 100 - 10][i];
        }
        else {
            result[2][i] = dozens[number % 100 / 10 - 2][i];
            result[3][i] = units[number % 10 - 1][i];
        }
    }
    return;
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
    string(15);
    return 0;
}
