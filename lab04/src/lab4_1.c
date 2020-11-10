int main(){
	#define PI 3.14
	#define RAD 5
	char comm = 's';
	float res;
	
	switch (comm){
		case 'l' : res = 2 * PI * RAD; break;
		case 's' : res = PI * RAD * RAD; break;
		case 'v' : res = 4 * PI * RAD * RAD * RAD; break;
		default : res = 0;
	}
return 0;
}
