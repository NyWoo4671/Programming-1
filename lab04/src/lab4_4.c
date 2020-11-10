int main(){
	#define x -5.0f
	float y = 0;
	if ( x < -1 ){
		y = -1 / x;
	}
	else if ( x >= -1 && x <= 1 ){
		y = x * x;
	}
	else if ( x > 1 ){
		y = 1;
	}
return 0;
}
