int main(){	
	#define num 123
	int first_n = ( num / 100 );
	int third_n = ( num % 100 ) % 10;
	float diff = first_n / (float)third_n;
	diff *= 100;
	diff = (int)diff;
	diff /= 100;
return 0;
}
