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
int main(){
	char res;
	res = lucky(123600);
	return 0;
}
