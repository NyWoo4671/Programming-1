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
int main(){
	char result = Perfecto(7);
	return 0;
}
