int main(){
	#define number 1337
	#define sys 8
	int first = number / 1000;
	int second = ( number % 1000) / 100;
	int third = ( number % 100 ) / 10;
	int fourth = number % 10;
	int dec = (sys * sys * sys) * first + (sys * sys) * second + sys * third + fourth;
return 0;
}