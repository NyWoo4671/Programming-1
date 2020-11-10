int main(){
	#define number 145.343
	int integer = number;
	float fractional = number - ineger;
	fractional *= 1000;
	float diff = ( integer / fractional );
	diff *= 100;
	diff = (int)diff;
	diff /= 100;
return 0;
}