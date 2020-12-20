char s1mple(int num) {
int number = num;
	char res;
	if (number > 1) {
		for (int i = 2; i < number; i++){
			if (number % i == 0){
				res = '-';
				break;
			}
			else {
				res = '+';
			}
		}
	}
	return res;
}

int main(){
	char res;
	res = s1mple(14);
	return 0;
}

		
