int main(){
	int number = 123600;
	int a;
	int b;
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
	}
	else {
		result = '-';
	}
	return 0;
}
