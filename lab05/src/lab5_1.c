int main(){
	#define num1 143
	#define num2 22
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
		return 0;
}
			

		
