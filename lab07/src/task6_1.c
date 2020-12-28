/**
 * @file task6_1.c
 * @brief Заповнення строки символами
 *
 * @author Vasilyazhenko Dmitriy
 * @date 21-dec-2020
 * @version 1.0
 */
 
/**
 * функція для заповнення
 *
 * Послідовність дій:
 * - Створення змінних
 * - процес заповнення, за допомогою циклу for
 * @return успішний код повернення з програми (0)
 * @param sum кількість пробілів
 * @param napolnenie символ для заповнення
 */
void feeling() {
int line[99];
const int N = 15;
char napolnenie = '_';
int sum = 0;
for (int a = 0; line[a] != ' '; a++) {
    sum += 1;
}
char buff[N];
for (int b = 0; b < N; b++) {
    buff[b] = line[b];
}
int c = (N - sum - 1) / 2;
for (int d = 0; d < c; d++) {
    line[d] = napolnenie;
}
int f = 0;
for (int g = c; g <= c + sum; g++) {
    line[g] = buff[c];
    g += 1;
}
int h = sum + c;
for (int j = h; j < N - 1; j++) {
    line[j] = napolnenie;
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
    feeling("Ivanov");
    return 0;
}


