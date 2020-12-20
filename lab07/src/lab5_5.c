#include <stdlib.h>
#include <time.h>
int root(int number){
double num = number;
	double eps = 0.00001;
	double root = num / 2;
	while ( root - num / root > eps )
	{
		root = 0.5 * ( root + num / root);
	}
	return root;
}
int main(){
	srand(time(NULL));
	int res = root(rand());
	return 0;
}
