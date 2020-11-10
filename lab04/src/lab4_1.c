int main(){
	#define PI 3.14
	#define RAD 5
	char comm = 's';
	float res;
	
	switch (comm){
		case 'l' : result = 2 * PI * RAD; break;
		case 's' : result = PI * RAD * RAD; break;
		case 'v' : result = 4 * PI * RAD * RAD * RAD; break;
		default : result = 0
	}
return 0;
}