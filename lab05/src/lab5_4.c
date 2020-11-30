int main(){
	int number = 57;
	int summ;
	char res;
	for (int j = 1; j <= number / 2; j++){
		if (number % j == 0) summ += j;
	}
	if (summ == number ) res = '+';
	else res = '-';
	return 0;
}