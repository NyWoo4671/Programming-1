int main(){
	#define number 145.343
	int integ = number;
	float fract = number - integ;
	fract *= 1000;
	float diff = ( integ / fract);
	diff *= 100;
	diff = (int)diff;
	diff /= 100;
return 0;
}
