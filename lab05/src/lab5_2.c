int main(){
	int number = 14;
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
	return 0;
}
		
