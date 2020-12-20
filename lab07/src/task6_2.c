#define SIZE 55
int prime(int SIZE)
{
    int Prime_numbers[SIZE];
    int num = number;
    for (int i = 0; i < SIZE; i++) {
        for (int j = num; j < 99999; j++) {
            int prime = 1;  // Число простое
            for (int num2 = 2; num2 <= j / 2; num2++) {
                if (j % num2 == 0) {
                    prime = 0; // Число составное
                    break;
                }
            }
            if (prime == 1) {
                Prime_numbers[i] = j;
                num = j + 1;
                break;
            }
        }
    }
    return 
}
int main()
{
    natural();
    return 0;
}
