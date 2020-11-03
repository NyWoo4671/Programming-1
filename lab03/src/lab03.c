int main()
{
	//First task
	#define r1 2.7
	#define r3 5.1
	#define r2 4.9
	float rev_res;
    float res;
	rev_res = (1/r1) + (1/r2) + (1/r3);
	res = 1/rev_res;
	
	//Second task
	#define value 322
	int first_num;
	int second_num;
	int third_num;
	int rev_numb;
	first_num = value  % 10;
	second_num = (value % 100) / 10;
	third_num = value / 100;
	rev_numb = first_num * 100 + second_num * 10 + third_num;
	
	//Third task
	#define A 2
	int a2;
	int a4;
	int a6;
	int a8;
	int a10;
	a2 = A * A;
	a4 = a2 * a2;
	a6 = a4 * a2;
	a8 = a4 * a4;
	a10 = a8 * a2;
	
	//Fourth task
	#define number 1337
	#define sys 8
	int first = number / 1000;
	int second = ( number % 1000) / 100;
	int third = ( number % 100 ) / 10;
	int fourth = number % 10;
	int dec = (sys * sys * sys) * first + (sys * sys) * second + sys * third + fourth;
	
	//Fifth task
	#define num 123
	int first_n = ( num / 100 );
	int third_n = ( num % 100 ) % 10;
	float diff = first / (float)third;
	diff *= 100;
	diff = (int)diff;
	diff /= 100;
	
	//Sixth task
	#define n_1 50
	#define n_2 52
	int sum = ((n_1 + n_2) / 2) * (n_2 - n_1 + 1);
	
	return 0;
}
	
	
	
	
	
	
